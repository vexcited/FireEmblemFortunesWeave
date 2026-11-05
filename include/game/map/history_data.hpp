#pragma once

#include <stdint.h>

namespace game::map::history {

#pragma GCC visibility push(hidden)

// One rewind record. The slots without a known caller keep their index as
// name, slots 8 and 9 write and read the record.
class Data {
public:
  virtual ~Data() = default;

  virtual const void* Unknown02() const = 0;
  virtual int Unknown03() const = 0;
  virtual uint16_t Unknown04() const = 0;
  virtual const void* Unknown05() const = 0;
  virtual bool Unknown06() const = 0;
  virtual const void* Unknown07() const = 0;
  virtual void Unknown08() = 0;
  virtual void Unknown09() = 0;

protected:
  uint8_t unknown08_[0xe];
};

class DataAll : public Data {
public:
  ~DataAll() override;

  const void* Unknown02() const override;
  int Unknown03() const override;
  uint16_t Unknown04() const override;
  const void* Unknown05() const override;
  bool Unknown06() const override;
  const void* Unknown07() const override;
  void Unknown08() override;
  void Unknown09() override;

private:
  uint16_t unknown16_;
  int unknown18_;
  const void* unknown20_;
  const void* unknown28_;
  uint8_t unknown30_[0x18];
};

class DataDiff : public Data {
public:
  ~DataDiff() override;

  const void* Unknown02() const override;
  int Unknown03() const override;
  uint16_t Unknown04() const override;
  const void* Unknown05() const override;
  bool Unknown06() const override;
  const void* Unknown07() const override;
  void Unknown08() override;
  void Unknown09() override;

private:
  uint8_t unknown16_[0xa];
  uint8_t unknown20_[0x18];
};

struct UnitRecordKey {
  int unknown00;
  int unknown04;
};

class DataAdditionalUnit : public Data {
public:
  ~DataAdditionalUnit() override;

  const void* Unknown02() const override;
  int Unknown03() const override;
  uint16_t Unknown04() const override;
  const void* Unknown05() const override;
  bool Unknown06() const override;
  const void* Unknown07() const override;
  void Unknown08() override;
  void Unknown09() override;

private:
  uint8_t unknown16_[0x2];
  UnitRecordKey key_;
  uint8_t unknown20_[0x8];
  const void* unknown28_;
};

class DataAdditionalNewType : public Data {
public:
  ~DataAdditionalNewType() override;

  const void* Unknown02() const override;
  int Unknown03() const override;
  uint16_t Unknown04() const override;
  const void* Unknown05() const override;
  bool Unknown06() const override;
  const void* Unknown07() const override;
  void Unknown08() override;
  void Unknown09() override;

private:
  uint8_t unknown16_[0x2];
  UnitRecordKey key_;
  uint8_t unknown20_[0x8];
  const void* unknown28_;
};

#pragma GCC visibility pop

}
