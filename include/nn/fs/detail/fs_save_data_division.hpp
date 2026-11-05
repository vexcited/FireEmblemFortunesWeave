#pragma once

#include "nn/fs/detail/fs_memory.hpp"
#include "nn/fs/fs_save_data_transfer.hpp"
#include "nn/fssrv/sf/fssrv_sf_isave_data_transfer_manager.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::fs::detail {

class SaveDataExporterVersion2 : public ISaveDataDivisionExporter {
public:
  explicit SaveDataExporterVersion2(
    nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter>&& exporter) {
    m_Interface.Swap(exporter);
  }

  ~SaveDataExporterVersion2() override;

  static void* operator new(size_t size) noexcept {
    return Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    Deallocate(pointer, size);
  }

private:
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter> m_Interface;
};

class SaveDataImporterVersion2 : public ISaveDataDivisionImporter {
public:
  explicit SaveDataImporterVersion2(
    nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter>&& importer) {
    m_Interface.Swap(importer);
  }

  ~SaveDataImporterVersion2() override;

  static void* operator new(size_t size) noexcept {
    return Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    Deallocate(pointer, size);
  }

private:
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter> m_Interface;
};

}
