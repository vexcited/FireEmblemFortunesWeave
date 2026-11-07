import argparse
import json
from pathlib import Path

from ledger import ROOT, load_baseline, load_rows, measure, percent, validate

VERSION = '04007EF01F8AE000'
LIBRARIES = {
  'angelscript', 'compiler-rt-18.1.8', 'fdk-aac', 'libjpeg-turbo',
  'libjpeg-turbo-1.5.3', 'libjpeg-turbo-nx', 'libpng', 'libunwind-nx',
  'libwebm', 'llvm-libcxx', 'llvm-libcxx-21', 'musl', 'nandroid', 'ne10',
  'opus', 'physx', 'recastnavigation', 'recastnavigation-bd98d84',
  'spine-cpp', 'zlib', 'zlib-nx',
}
CATEGORIES = {
  'game': 'Game',
  'sdk': 'SDK',
  'libraries': 'Third-party libraries',
}


def category(module, source):
  parts = source.split('/')
  if len(parts) > 2 and parts[1] in LIBRARIES:
    return 'libraries'
  return 'game' if module == 'main' else 'sdk'


def measures(total, matched, functions, matched_functions):
  complete = total if total and matched == total else 0
  return {
    'fuzzy_match_percent': percent(matched, total),
    'total_code': total,
    'matched_code': matched,
    'matched_code_percent': percent(matched, total),
    'total_functions': functions,
    'matched_functions': matched_functions,
    'matched_functions_percent': percent(matched_functions, functions),
    'complete_code': complete,
    'complete_code_percent': percent(complete, total),
  }


def build(baseline, rows):
  # Matched code means behavior-verified bytes, nothing is byte matched yet.
  units = {}
  for r in rows:
    key = r['module'], r['source']
    units.setdefault(key, []).append(r)
  report_units = []
  for (module, source), items in sorted(units.items()):
    items.sort(key=lambda r: r['address'])
    verified = [r for r in items if r['status'] == 'verified']
    report_units.append({
      'name': f'{module}/{source}',
      'measures': measures(
        sum(r['size'] for r in items), sum(r['size'] for r in verified),
        len(items), len(verified),
      ),
      'functions': [
        {
          'name': r['name'],
          'size': r['size'],
          'fuzzy_match_percent': 100.0 if r['status'] == 'verified' else 0.0,
          'metadata': {'virtual_address': r['address']},
        }
        for r in items
      ],
      'metadata': {
        'complete': len(verified) == len(items),
        'module_name': module,
        'source_path': source,
        'progress_categories': [category(module, source)],
      },
    })
  result = measure(baseline, rows)
  # Text no ledger entry claims yet, so todo lists point at each module.
  for name, module in result['modules'].items():
    left = module['text_bytes'] - module['verified_bytes'] - \
      module['disputed_bytes']
    functions = module['functions'] - module['verified_functions'] - \
      module['disputed_functions']
    if left > 0:
      report_units.append({
        'name': f'{name}/unclaimed',
        'measures': measures(left, 0, functions, 0),
        'metadata': {
          'complete': False,
          'module_name': name,
          'progress_categories': ['game' if name == 'main' else 'sdk'],
        },
      })
  categories = []
  for key, label in CATEGORIES.items():
    chosen = [u for u in report_units
      if u['metadata']['progress_categories'] == [key]]
    categories.append({
      'id': key,
      'name': label,
      'measures': total_measures(chosen),
    })
  return {
    'version': 2,
    'measures': total_measures(report_units),
    'units': report_units,
    'categories': categories,
  }


def total_measures(units):
  total = sum(u['measures']['total_code'] for u in units)
  matched = sum(u['measures']['matched_code'] for u in units)
  functions = sum(u['measures']['total_functions'] for u in units)
  matched_functions = sum(
    u['measures']['matched_functions'] for u in units
  )
  result = measures(total, matched, functions, matched_functions)
  result['complete_code'] = sum(u['measures']['complete_code'] for u in units)
  result['complete_code_percent'] = percent(result['complete_code'], total)
  result['total_units'] = len(units)
  result['complete_units'] = sum(
    1 for u in units if u['metadata']['complete']
  )
  return result


def main():
  parser = argparse.ArgumentParser()
  parser.add_argument('--output', type=Path,
    default=ROOT / 'build/report.json')
  args = parser.parse_args()
  baseline = load_baseline()
  rows = load_rows()
  validate(baseline, rows)
  report = build(baseline, rows)
  args.output.parent.mkdir(parents=True, exist_ok=True)
  args.output.write_text(json.dumps(report, indent=1) + '\n')
  m = report['measures']
  print(f"{m['matched_code_percent']:.4f}%")


if __name__ == '__main__':
  main()
