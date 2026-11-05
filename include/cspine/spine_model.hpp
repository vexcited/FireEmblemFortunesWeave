#pragma once

#include <memory>
#include <string>

namespace cspine {

class SpineModel {
public:
  class AsyncArgument {
  public:
    virtual ~AsyncArgument();

    virtual void Clear();
    virtual void Assign(const AsyncArgument& other);

    virtual void CopySkeletonPath(const AsyncArgument& other);
    virtual void SetSkeletonPath(const char* path);
    virtual void CopyAtlasPath(const AsyncArgument& other);
    virtual void SetAtlasPath(const char* path);
    virtual void CopyAnimation(const AsyncArgument& other);
    virtual void SetAnimation(const char* name);
    virtual void CopySkin(const AsyncArgument& other);
    virtual void SetSkin(const char* name);
    virtual void CopyScale(const AsyncArgument& other);
    virtual void SetScale(float scale);
    virtual void CopyOwner(const AsyncArgument& other);
    virtual void SetOwner(const std::shared_ptr<void>& owner);

  private:
    std::string skeletonPath_;
    std::string atlasPath_;
    std::string animation_;
    std::string skin_;
    float scale_;
    std::shared_ptr<void> owner_;
  };
};

}
