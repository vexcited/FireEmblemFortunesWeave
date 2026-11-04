#include <vector>

#include "gfx/flow/pass_node.hpp"

namespace gfxa {

// Shells for the gfxa task pass data. Only the sizes are known, from the
// node layouts; build lambdas fill each slot with a resource pointer.
class Task2DElementManager {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[2];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[11];
  };
};

class Task2DFinal {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[1];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class Task3DFinal {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[2];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[1];
  };
};

class Task3DUI {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[4];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[4];
  };
};

class TaskBloom {
public:
  class Composite {
  public:
    struct ResInput {
      gfx::flow::ResourceBase* resources[1];
    };

    struct ResOutput {
      gfx::flow::ResourceBase* resources[2];
    };
  };

  class Generate {
  public:
    struct ResInput {};

    struct ResOutput {
      gfx::flow::ResourceBase* resources[10];
    };
  };
};

class TaskBloom2D {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[1];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[9];
  };
};

class TaskCapsuleAO {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[6];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[3];
  };
};

class TaskCharacter {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[8];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[6];
  };
};

class TaskCharaDepth {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[3];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskCharaDiffusion {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[3];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[3];
  };
};

class TaskCharaMask {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[2];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[1];
  };
};

class TaskCharaOutline {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[3];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[4];
  };
};

class TaskCharaSceneBuffers {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[25];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskCharaSelfShadow {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[8];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[16];
  };
};

class TaskCharaShadow {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[9];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[5];
  };
};

class TaskCharaSilhouette {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[3];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskCharaTransparent {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[8];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[6];
  };
};

class TaskColorGrading {
public:
  class Apply {
  public:
    struct ResInput {
      gfx::flow::ResourceBase* resources[2];
    };

    struct ResOutput {
      gfx::flow::ResourceBase* resources[1];
    };
  };

  class BuildLut {
  public:
    struct ResInput {};

    struct ResOutput {
      gfx::flow::ResourceBase* resources[1];
    };
  };
};

class TaskContactShadow {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[5];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskDecal {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[3];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskDeferredLit {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[21];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskDepth {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[3];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskDiffusion {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[1];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[3];
  };
};

class TaskDLSS {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[4];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[5];
  };
};

class TaskDoF {
public:
  class CalcCoC {
  public:
    struct ResInput {
      gfx::flow::ResourceBase* resources[2];
    };

    struct ResOutput {
      gfx::flow::ResourceBase* resources[1];
    };
  };

  class Composite {
  public:
    struct ResInput {
      gfx::flow::ResourceBase* resources[4];
    };

    struct ResOutput {
      gfx::flow::ResourceBase* resources[5];
    };
  };
};

class TaskDoFTemporalFilter {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[3];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskEffect {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[18];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[5];
  };

  class CompOffscreen {
  public:
    struct ResInput {
      gfx::flow::ResourceBase* resources[1];
    };

    struct ResOutput {
      gfx::flow::ResourceBase* resources[2];
    };
  };

  class PreSetupPass {
  public:
    struct ResInput {
      gfx::flow::ResourceBase* resources[2];
    };

    struct ResOutput {
      gfx::flow::ResourceBase* resources[2];
    };
  };
};

class TaskEffect2D {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[1];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[3];
  };

  class PreSetupPass {
  public:
    struct ResInput {};

    struct ResOutput {
      gfx::flow::ResourceBase* resources[2];
    };
  };
};

class TaskEffectDecal {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[2];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[11];
  };
};

class TaskExposure {
public:
  class Calc {
  public:
    struct ResInput {
      gfx::flow::ResourceBase* resources[4];
    };

    struct ResOutput {
      gfx::flow::ResourceBase* resources[1];
    };
  };

  class Comp {
  public:
    struct ResInput {
      gfx::flow::ResourceBase* resources[4];
    };

    struct ResOutput {
      gfx::flow::ResourceBase* resources[6];
    };
  };

  class SpotLighting {
  public:
    struct ResInput {
      gfx::flow::ResourceBase* resources[12];
    };

    struct ResOutput {
      gfx::flow::ResourceBase* resources[1];
    };
  };
};

class TaskFog {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[5];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskForward {
public:
  class Base {
  public:
    struct ResInput {
      gfx::flow::ResourceBase* resources[27];
    };

    struct ResOutput {
      gfx::flow::ResourceBase* resources[4];
    };
  };

  class Depth {
  public:
    struct ResInput {
      gfx::flow::ResourceBase* resources[3];
    };

    struct ResOutput {
      gfx::flow::ResourceBase* resources[2];
    };
  };
};

class TaskGaussianBlur {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[1];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskGBuffer {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[4];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[6];
  };
};

class TaskGradationFilter {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[1];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskHeightFog {
public:
  struct ResInput {
    alignas(16) gfx::flow::ResourceBase* resources[22];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[1];
  };
};

class TaskLensFlareSystem {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[2];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskLightCulling {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[3];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[4];
  };
};

class TaskLocalShadow {
public:
  struct ResInput {};

  struct ResOutput {};
};

class TaskMeshFog {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[5];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[1];
  };
};

class TaskMirage {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[3];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskModelEffect {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[17];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskMotionBlur {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[3];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskObjectRender {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[5];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskPainting {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[3];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskPostCharaOutline {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[7];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskPostCharaRimlight {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[6];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[1];
  };
};

class TaskPrimitive {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[2];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[3];
  };
};

class TaskPrimitive2D {
public:
  struct ResInput {};

  struct ResOutput {};
};

class TaskRadialBlur {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[1];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[2];
  };
};

class TaskShadow {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[11];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[5];
  };
};

class TaskSharpness {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[2];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[3];
  };
};

class TaskSightMapRender {
public:
  struct ResInput {
    alignas(16) gfx::flow::ResourceBase* resources[146];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[3];
  };
};

class TaskSkyBlur {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[5];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[11];
  };
};

class TaskSkyComp {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[2];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[1];
  };
};

class TaskSpine {
public:
  struct ResInput {};

  struct ResOutput {};
};

class TaskSSAO {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[4];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[5];
  };
};

class TaskSSR {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[12];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[9];
  };
};

class TaskTimeSlip {
public:
  struct ResInput {
    gfx::flow::ResourceBase* resources[2];
  };

  struct ResOutput {
    gfx::flow::ResourceBase* resources[1];
  };
};

// Stand-ins for the ResInput and ResOutput types local to the gfxa
// MainPass setup functions and to SwitchComputeOverlapModePass.
namespace passes {

struct SetupPrePassInput {};

struct SetupPrePassOutput {
  gfx::flow::ResourceBase* resources[7];
  std::vector<gfx::flow::ResourceBase*> list0;
  std::vector<gfx::flow::ResourceBase*> list1;
};

struct SetupForwardPassInput {
  gfx::flow::ResourceBase* resources[2];
};

struct SetupForwardPassOutput {
  gfx::flow::ResourceBase* resources[2];
};

struct SetupDepthUpscalePassInput {
  gfx::flow::ResourceBase* resources[1];
};

struct SetupDepthUpscalePassOutput {
  gfx::flow::ResourceBase* resources[2];
};

struct SetupMainShadowPassInput {
  gfx::flow::ResourceBase* resources[2];
};

struct SetupMainShadowPassOutput {
  gfx::flow::ResourceBase* resources[2];
};

// The second pair declared in SetupMainShadowPass.
struct SetupMainShadowPassInput2 {};

struct SetupMainShadowPassOutput2 {
  gfx::flow::ResourceBase* resources[7];
};

struct SwitchComputeOverlapModeInput {};

struct SwitchComputeOverlapModeOutput {};

// The second pair declared in SwitchComputeOverlapModePass.
struct SwitchComputeOverlapModeInput2 {};

struct SwitchComputeOverlapModeOutput2 {};

// Used for both the input and the output.
struct SetupCapturePassRes {};

}

}

template class gfx::flow::PassNode<gfxa::Task2DElementManager::ResInput,
  gfxa::Task2DElementManager::ResOutput>;
template class gfx::flow::PassNode<gfxa::Task2DFinal::ResInput,
  gfxa::Task2DFinal::ResOutput>;
template class gfx::flow::PassNode<gfxa::Task3DFinal::ResInput,
  gfxa::Task3DFinal::ResOutput>;
template class gfx::flow::PassNode<gfxa::Task3DUI::ResInput,
  gfxa::Task3DUI::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskBloom2D::ResInput,
  gfxa::TaskBloom2D::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskBloom::Composite::ResInput,
  gfxa::TaskBloom::Composite::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskBloom::Generate::ResInput,
  gfxa::TaskBloom::Generate::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskCapsuleAO::ResInput,
  gfxa::TaskCapsuleAO::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskCharaDepth::ResInput,
  gfxa::TaskCharaDepth::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskCharaDiffusion::ResInput,
  gfxa::TaskCharaDiffusion::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskCharaMask::ResInput,
  gfxa::TaskCharaMask::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskCharaOutline::ResInput,
  gfxa::TaskCharaOutline::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskCharaSceneBuffers::ResInput,
  gfxa::TaskCharaSceneBuffers::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskCharaSelfShadow::ResInput,
  gfxa::TaskCharaSelfShadow::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskCharaShadow::ResInput,
  gfxa::TaskCharaShadow::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskCharaSilhouette::ResInput,
  gfxa::TaskCharaSilhouette::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskCharaTransparent::ResInput,
  gfxa::TaskCharaTransparent::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskCharacter::ResInput,
  gfxa::TaskCharacter::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskColorGrading::Apply::ResInput,
  gfxa::TaskColorGrading::Apply::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskColorGrading::BuildLut::ResInput,
  gfxa::TaskColorGrading::BuildLut::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskContactShadow::ResInput,
  gfxa::TaskContactShadow::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskDLSS::ResInput,
  gfxa::TaskDLSS::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskDecal::ResInput,
  gfxa::TaskDecal::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskDeferredLit::ResInput,
  gfxa::TaskDeferredLit::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskDepth::ResInput,
  gfxa::TaskDepth::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskDiffusion::ResInput,
  gfxa::TaskDiffusion::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskDoF::CalcCoC::ResInput,
  gfxa::TaskDoF::CalcCoC::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskDoF::Composite::ResInput,
  gfxa::TaskDoF::Composite::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskDoFTemporalFilter::ResInput,
  gfxa::TaskDoFTemporalFilter::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskEffect2D::PreSetupPass::ResInput,
  gfxa::TaskEffect2D::PreSetupPass::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskEffect2D::ResInput,
  gfxa::TaskEffect2D::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskEffect::CompOffscreen::ResInput,
  gfxa::TaskEffect::CompOffscreen::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskEffect::PreSetupPass::ResInput,
  gfxa::TaskEffect::PreSetupPass::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskEffect::ResInput,
  gfxa::TaskEffect::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskEffectDecal::ResInput,
  gfxa::TaskEffectDecal::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskExposure::Calc::ResInput,
  gfxa::TaskExposure::Calc::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskExposure::Comp::ResInput,
  gfxa::TaskExposure::Comp::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskExposure::SpotLighting::ResInput,
  gfxa::TaskExposure::SpotLighting::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskFog::ResInput,
  gfxa::TaskFog::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskForward::Base::ResInput,
  gfxa::TaskForward::Base::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskForward::Depth::ResInput,
  gfxa::TaskForward::Depth::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskGBuffer::ResInput,
  gfxa::TaskGBuffer::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskGaussianBlur::ResInput,
  gfxa::TaskGaussianBlur::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskGradationFilter::ResInput,
  gfxa::TaskGradationFilter::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskHeightFog::ResInput,
  gfxa::TaskHeightFog::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskLensFlareSystem::ResInput,
  gfxa::TaskLensFlareSystem::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskLightCulling::ResInput,
  gfxa::TaskLightCulling::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskLocalShadow::ResInput,
  gfxa::TaskLocalShadow::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskMeshFog::ResInput,
  gfxa::TaskMeshFog::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskMirage::ResInput,
  gfxa::TaskMirage::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskModelEffect::ResInput,
  gfxa::TaskModelEffect::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskMotionBlur::ResInput,
  gfxa::TaskMotionBlur::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskObjectRender::ResInput,
  gfxa::TaskObjectRender::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskPainting::ResInput,
  gfxa::TaskPainting::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskPostCharaOutline::ResInput,
  gfxa::TaskPostCharaOutline::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskPostCharaRimlight::ResInput,
  gfxa::TaskPostCharaRimlight::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskPrimitive2D::ResInput,
  gfxa::TaskPrimitive2D::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskPrimitive::ResInput,
  gfxa::TaskPrimitive::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskRadialBlur::ResInput,
  gfxa::TaskRadialBlur::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskSSAO::ResInput,
  gfxa::TaskSSAO::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskSSR::ResInput,
  gfxa::TaskSSR::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskShadow::ResInput,
  gfxa::TaskShadow::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskSharpness::ResInput,
  gfxa::TaskSharpness::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskSightMapRender::ResInput,
  gfxa::TaskSightMapRender::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskSkyBlur::ResInput,
  gfxa::TaskSkyBlur::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskSkyComp::ResInput,
  gfxa::TaskSkyComp::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskSpine::ResInput,
  gfxa::TaskSpine::ResOutput>;
template class gfx::flow::PassNode<gfxa::TaskTimeSlip::ResInput,
  gfxa::TaskTimeSlip::ResOutput>;
template class gfx::flow::PassNode<gfxa::passes::SetupCapturePassRes,
  gfxa::passes::SetupCapturePassRes>;
template class gfx::flow::PassNode<gfxa::passes::SetupDepthUpscalePassInput,
  gfxa::passes::SetupDepthUpscalePassOutput>;
template class gfx::flow::PassNode<gfxa::passes::SetupForwardPassInput,
  gfxa::passes::SetupForwardPassOutput>;
template class gfx::flow::PassNode<gfxa::passes::SetupMainShadowPassInput,
  gfxa::passes::SetupMainShadowPassOutput>;
template class gfx::flow::PassNode<gfxa::passes::SetupMainShadowPassInput2,
  gfxa::passes::SetupMainShadowPassOutput2>;
template class gfx::flow::PassNode<gfxa::passes::SetupPrePassInput,
  gfxa::passes::SetupPrePassOutput>;
template class gfx::flow::PassNode<gfxa::passes::SwitchComputeOverlapModeInput,
  gfxa::passes::SwitchComputeOverlapModeOutput>;
template class gfx::flow::PassNode<gfxa::passes::SwitchComputeOverlapModeInput2,
  gfxa::passes::SwitchComputeOverlapModeOutput2>;
template class gfx::flow::PassNode<int, int>;
