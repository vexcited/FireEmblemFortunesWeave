#include "game/proc/proc_inst.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class ProcGmapShow : public ProcInst {
public:
  ~ProcGmapShow() override;
};

class ProcGmapSelectMove : public ProcInst {
public:
  ~ProcGmapSelectMove() override;
};

class ProcFinishReconstruction : public ProcInst {
public:
  ~ProcFinishReconstruction() override;
};

class ProcTutorialAttachmentResult : public ProcInst {
public:
  ~ProcTutorialAttachmentResult() override;
};

namespace {

class ProcGainLegion : public ProcInst {
public:
  ProcGainLegion();

  ~ProcGainLegion() override;
};

[[gnu::used]] ProcGainLegion::ProcGainLegion() = default;

class ProcBeginRecruit : public ProcInst {
public:
  ProcBeginRecruit();

  ~ProcBeginRecruit() override;
};

[[gnu::used]] ProcBeginRecruit::ProcBeginRecruit() = default;

class ProcGmapHadesLoad : public ProcInst {
public:
  ProcGmapHadesLoad();

  ~ProcGmapHadesLoad() override;
};

[[gnu::used]] ProcGmapHadesLoad::ProcGmapHadesLoad() = default;

class ProcGmapOpenRouteSeq : public ProcInst {
public:
  ProcGmapOpenRouteSeq();

  ~ProcGmapOpenRouteSeq() override;
};

[[gnu::used]] ProcGmapOpenRouteSeq::ProcGmapOpenRouteSeq() = default;

class ProcGmapOpenMapSeq : public ProcGmapOpenRouteSeq {
public:
  ProcGmapOpenMapSeq();

  ~ProcGmapOpenMapSeq() override;
};

[[gnu::used]] ProcGmapOpenMapSeq::ProcGmapOpenMapSeq() = default;

class ProcGmapUpdateSpotViewSeq : public ProcInst {
public:
  ProcGmapUpdateSpotViewSeq();

  ~ProcGmapUpdateSpotViewSeq() override;
};

[[gnu::used]] ProcGmapUpdateSpotViewSeq::ProcGmapUpdateSpotViewSeq() = default;

class ProcSpotAttachmentIconAnim : public ProcInst {
public:
  ProcSpotAttachmentIconAnim();

  ~ProcSpotAttachmentIconAnim() override;
};

[[gnu::used]] ProcSpotAttachmentIconAnim::ProcSpotAttachmentIconAnim() = default;

class ProcGmapOpenSpotWithFocusSeq : public ProcInst {
public:
  ProcGmapOpenSpotWithFocusSeq();

  ~ProcGmapOpenSpotWithFocusSeq() override;
};

[[gnu::used]] ProcGmapOpenSpotWithFocusSeq::ProcGmapOpenSpotWithFocusSeq() = default;

class ProcProgressScheduleBeforeSideStory : public ProcInst {
public:
  ProcProgressScheduleBeforeSideStory();

  ~ProcProgressScheduleBeforeSideStory() override;
};

[[gnu::used]] ProcProgressScheduleBeforeSideStory::ProcProgressScheduleBeforeSideStory() = default;

}

#pragma GCC visibility pop

ProcGmapShow::~ProcGmapShow() = default;

ProcGainLegion::~ProcGainLegion() = default;

ProcBeginRecruit::~ProcBeginRecruit() = default;

ProcGmapHadesLoad::~ProcGmapHadesLoad() = default;

ProcGmapOpenRouteSeq::~ProcGmapOpenRouteSeq() = default;

ProcGmapOpenMapSeq::~ProcGmapOpenMapSeq() = default;

ProcGmapUpdateSpotViewSeq::~ProcGmapUpdateSpotViewSeq() = default;

ProcSpotAttachmentIconAnim::~ProcSpotAttachmentIconAnim() = default;

ProcGmapOpenSpotWithFocusSeq::~ProcGmapOpenSpotWithFocusSeq() = default;

ProcProgressScheduleBeforeSideStory::~ProcProgressScheduleBeforeSideStory() = default;

ProcGmapSelectMove::~ProcGmapSelectMove() = default;

ProcFinishReconstruction::~ProcFinishReconstruction() = default;

ProcTutorialAttachmentResult::~ProcTutorialAttachmentResult() = default;

}
