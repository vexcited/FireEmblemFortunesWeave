import csv
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DATA = ROOT / 'data'
FIELDS = ['address', 'size', 'status', 'source', 'name']
STATUSES = ('verified', 'disputed')


def load_baseline(data=DATA):
  return json.loads((data / 'baseline.json').read_text())


def load_rows(data=DATA):
  rows = []
  for path in sorted((data / 'ledger').glob('*.csv')):
    with path.open(newline='') as f:
      reader = csv.DictReader(f)
      if reader.fieldnames != FIELDS:
        raise ValueError(f'{path.name}: unexpected columns.')
      for row in reader:
        rows.append({
          'module': path.stem,
          'address': int(row['address'], 16),
          'size': int(row['size']),
          'status': row['status'],
          'source': row['source'],
          'name': row['name'],
        })
  return rows


def write_rows(rows, data=DATA):
  directory = data / 'ledger'
  directory.mkdir(parents=True, exist_ok=True)
  modules = {}
  for row in rows:
    modules.setdefault(row['module'], []).append(row)
  for path in directory.glob('*.csv'):
    if path.stem not in modules:
      path.unlink()
  for module, items in modules.items():
    items.sort(key=lambda r: r['address'])
    with (directory / f'{module}.csv').open('w', newline='') as f:
      writer = csv.writer(f, lineterminator='\n')
      writer.writerow(FIELDS)
      for r in items:
        writer.writerow([f"{r['address']:x}", r['size'], r['status'],
          r['source'], r['name']])


def validate(baseline, rows):
  seen = set()
  for r in rows:
    where = f"{r['module']} {r['address']:#x}"
    if r['module'] not in baseline['modules']:
      raise ValueError(f'{where}: unknown module.')
    if r['status'] not in STATUSES:
      raise ValueError(f'{where}: unknown status.')
    if (r['module'], r['address']) in seen:
      raise ValueError(f'{where}: duplicate entry.')
    seen.add((r['module'], r['address']))
    if r['address'] % 4 or r['size'] <= 0 or r['size'] % 4:
      raise ValueError(f'{where}: unaligned entry.')
    if not r['name'] or not r['source']:
      raise ValueError(f'{where}: needs a name and a source.')
  result = measure(baseline, rows)
  for name, module in result['modules'].items():
    if module['verified_bytes'] + module['disputed_bytes'] > \
        module['text_bytes']:
      raise ValueError(f'{name}: more credit than text.')
    if module['verified_functions'] + module['disputed_functions'] > \
        module['functions']:
      raise ValueError(f'{name}: more entries than functions.')


def measure(baseline, rows):
  modules = {
    name: {
      'text_bytes': module['text'], 'functions': module['functions'],
      'verified_bytes': 0, 'disputed_bytes': 0,
      'verified_functions': 0, 'disputed_functions': 0,
    }
    for name, module in baseline['modules'].items()
  }
  for r in rows:
    module = modules[r['module']]
    module[f"{r['status']}_bytes"] += r['size']
    module[f"{r['status']}_functions"] += 1
  totals = {
    key: sum(m[key] for m in modules.values())
    for key in next(iter(modules.values()))
  }
  return {'modules': modules, **totals}


def percent(part, whole):
  return 100 * part / whole if whole else 0
