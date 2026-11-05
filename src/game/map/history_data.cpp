#include "game/map/history_data.hpp"

namespace game::map::history {

const void* DataAll::Unknown02() const {
  return unknown28_;
}

int DataAll::Unknown03() const {
  return unknown18_;
}

uint16_t DataAll::Unknown04() const {
  return unknown16_;
}

const void* DataAll::Unknown05() const {
  return unknown20_;
}

bool DataAll::Unknown06() const {
  return true;
}

const void* DataAll::Unknown07() const {
  return unknown30_;
}

const void* DataDiff::Unknown02() const {
  return nullptr;
}

int DataDiff::Unknown03() const {
  return 0;
}

uint16_t DataDiff::Unknown04() const {
  return 0;
}

const void* DataDiff::Unknown05() const {
  return nullptr;
}

bool DataDiff::Unknown06() const {
  return true;
}

const void* DataDiff::Unknown07() const {
  return unknown20_;
}

const void* DataAdditionalUnit::Unknown02() const {
  return unknown28_;
}

int DataAdditionalUnit::Unknown03() const {
  return key_.unknown04;
}

uint16_t DataAdditionalUnit::Unknown04() const {
  return 1;
}

const void* DataAdditionalUnit::Unknown05() const {
  return &key_;
}

bool DataAdditionalUnit::Unknown06() const {
  return false;
}

const void* DataAdditionalUnit::Unknown07() const {
  return nullptr;
}

const void* DataAdditionalNewType::Unknown02() const {
  return unknown28_;
}

int DataAdditionalNewType::Unknown03() const {
  return key_.unknown04;
}

uint16_t DataAdditionalNewType::Unknown04() const {
  return 1;
}

const void* DataAdditionalNewType::Unknown05() const {
  return &key_;
}

}
