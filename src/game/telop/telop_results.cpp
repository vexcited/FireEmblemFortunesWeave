#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"

namespace game::telop {

namespace {

// Judge kinds of the result ranks, five shows no judge.
constexpr int kDiningJudges[] = {3, 1, 0};
constexpr int kPerchJudges[] = {0, 1, 2, 4};
constexpr int kDivinationJudges[] = {3, 1, 0, 0};
constexpr int kTrainingJudges[] = {5, 0, 1, 2, 3, 5};
constexpr int kExploreJudges[] = {0, 1, 3};

}

class TelopPerchResult : public TelopResult {
public:
  ~TelopPerchResult() override;

  void Unknown56() override { ShowJudge(Unknown58(), 2, false); }

  int Unknown58() override {
    uint8_t rank = result_->rank;
    return rank <= 3 ? kPerchJudges[rank] : 5;
  }

  void Unknown59() override { PlayJudge(Unknown58()); }

private:
  struct Result {
    uint8_t unknown_00[0x68];
    uint8_t rank;
  };

  const Result* result_;
};

class TelopDiningResult : public TelopResult {
public:
  ~TelopDiningResult() override;

  void Unknown56() override {
    ShowJudge(Unknown58(), unknown_338_.empty(), false);
  }

  int Unknown58() override {
    if (result_ == nullptr || result_->rank > 2) {
      return 5;
    }
    return kDiningJudges[result_->rank];
  }

  void Unknown59() override { PlayJudge(Unknown58()); }

private:
  struct Result {
    uint8_t unknown_00[0x44];
    uint8_t rank;
  };

  const Result* result_;
};

class TelopThermaeResult : public TelopResult {
public:
  ~TelopThermaeResult() override;

  void Unknown56() override {
    ShowJudge(Unknown58(), unknown_338_.empty(), false);
  }

  int Unknown58() override {
    if (result_ == nullptr) {
      return 5;
    }
    switch (result_->rank) {
      case 0:
        return 1;
      case 1:
        return 3;
      default:
        return 5;
    }
  }

  void Unknown59() override { PlayJudge(Unknown58()); }

private:
  struct Result {
    uint8_t unknown_00[0x58];
    int32_t rank;
  };

  const Result* result_;
};

class TelopSpeechResult : public TelopResult {
public:
  ~TelopSpeechResult() override;

  void Unknown56() override {
    if (rank_ == 0) {
      accessor_.StartAnimation("Type_TitleOff");
      return;
    }
    bool judged = Unknown58() != 0;
    ShowJudge(Unknown58(), 1, judged);
  }

  int Unknown58() override {
    uint32_t judge = rank_ - 1;
    return judge < 4 ? judge : 5;
  }

  void Unknown59() override { PlayJudge(Unknown58()); }

private:
  const void* unknown_490_;
  int32_t rank_;
};

class TelopTheaterActResult : public TelopResult {
public:
  ~TelopTheaterActResult() override;

  void Unknown56() override { ShowJudge(Unknown58(), 1, false); }

  int Unknown58() override {
    uint32_t rank = result_->rank;
    return rank < 4 ? rank : 5;
  }

  void Unknown59() override { PlayJudge(Unknown58()); }

private:
  struct Result {
    uint8_t unknown_00[0x38];
    int32_t rank;
  };

  const Result* result_;
};

class TelopTheaterWatchResult : public TelopResult {
public:
  ~TelopTheaterWatchResult() override;

  void Unknown56() override { ShowJudge(Unknown58(), 1, false); }

  int Unknown58() override {
    if (result_ == nullptr) {
      return 5;
    }
    uint32_t rank = result_->rank;
    return rank < 4 ? rank : 5;
  }

  void Unknown59() override { PlayJudge(Unknown58()); }

private:
  struct Result {
    uint8_t unknown_00[0x2c];
    int32_t rank;
  };

  const Result* result_;
};

class TelopDivinationResult : public TelopResult {
public:
  ~TelopDivinationResult() override;

  void Unknown56() override { ShowJudge(Unknown58(), 1, false); }

  int Unknown58() override {
    if (result_ == nullptr || result_->rank > 3) {
      return 5;
    }
    return kDivinationJudges[result_->rank];
  }

  void Unknown59() override { PlayJudge(Unknown58()); }

private:
  struct Result {
    uint8_t unknown_00[0x38];
    uint8_t rank;
  };

  const Result* result_;
};

class TelopDivinationVisitorResult : public TelopResult {
public:
  ~TelopDivinationVisitorResult() override;

  void Unknown56() override { ShowJudge(Unknown58(), 1, false); }

  int Unknown58() override {
    uint8_t rank = result_->rank;
    return rank <= 3 ? kDivinationJudges[rank] : 5;
  }

  void Unknown59() override { PlayJudge(Unknown58()); }

private:
  struct Result {
    uint8_t unknown_00[0x38];
    uint8_t rank;
  };

  const Result* result_;
};

class TelopTrainingResult : public TelopResult {
public:
  ~TelopTrainingResult() override;

  bool Unknown43() override;

  void Unknown56() override {
    ShowJudge(Unknown58(), unknown_338_.empty(), false);
  }

  int Unknown58() override {
    if (result_ == nullptr || result_->rank > 5) {
      return 5;
    }
    return kTrainingJudges[result_->rank];
  }

  void Unknown59() override { PlayJudge(Unknown58()); }

private:
  struct Result {
    uint8_t unknown_00[0x38];
    uint8_t rank;
  };

  const Result* result_;
};

class TelopSubquestResult : public TelopResult {
public:
  ~TelopSubquestResult() override;

  void Unknown56() override {
    ShowHeadline(1, true, "MID_Sys_Result_QuestClear", "", "In_Judege01",
      "Type_Common");
  }
};

class TelopSidestoryResult : public TelopResult {
public:
  ~TelopSidestoryResult() override;

  void Unknown56() override {
    ShowHeadline(1, true, "MID_Sys_Result_QuestClear", "", "In_Judege01",
      "Type_Common");
  }
};

class TelopReconstructionResult : public TelopResult {
public:
  ~TelopReconstructionResult() override;

  void Unknown56() override {
    ShowHeadline(0, true, "MID_Sys_Result_Headline_Reconstruction", "",
      "In_Judege01", "Type_Common");
  }
};

class TelopCommonResult : public TelopResult {
public:
  ~TelopCommonResult() override;

  void Unknown56() override {
    ShowHeadline(1, true, "MID_Sys_Result_Headline_Result", "",
      "In_Judege01", "Type_Common");
  }
};

class TelopNoticeNewJob : public TelopResult {
public:
  ~TelopNoticeNewJob() override;

  void Unknown56() override {
    ShowHeadline(0, true, "MID_Sys_Result_ClassTrial_Unlock",
      "SE_SYS_Telop_ClasstrialOpen_In", "In_Judege01", "Type_Common");
  }
};

class TelopNoticeNewAction : public TelopResult {
public:
  ~TelopNoticeNewAction() override;

  void Unknown56() override {
    ShowHeadline(0, true, "MID_Sys_Result_Headline_NewAction", "",
      "In_Judege01", "Type_Common");
  }
};

class TelopSimpleLevelup : public TelopResult {
public:
  ~TelopSimpleLevelup() override;

  void Unknown56() override {
    ShowHeadline(1, true, "MID_Sys_LevelUp", "", "In_Judege03",
      "Type_Judge03");
  }

  void Unknown59() override { PlayJudge(3); }
};

class TelopScoutSuccessResult : public TelopResult {
public:
  ~TelopScoutSuccessResult() override;

  void Unknown56() override {
    std::string_view mid = "MID_Sys_Result_Headline_Join";
    if (joined_ == 0) {
      mid = "MID_Sys_Result_Headline_Scout_Success";
    }
    ShowHeadline(0, true, mid, "", "In_Judege03", "Type_Judge03");
  }

  void Unknown59() override { PlayJudge(3); }

private:
  const void* unknown_490_;
  int32_t joined_;
};

class TelopCaptureSuccessResult : public TelopResult {
public:
  ~TelopCaptureSuccessResult() override;

  void Unknown56() override {
    ShowHeadline(1, true, "MID_Sys_Result_Success", "", "In_Judege03",
      "Type_Judge03");
  }

  void Unknown57() override {
    ShowSkill(animal_, "MID_Sys_Result_Msg_Get_Animal");
  }

  void Unknown59() override { PlayJudge(1); }

private:
  const void* animal_;
};

class TelopCaptureFailResult : public TelopResult {
public:
  ~TelopCaptureFailResult() override;

  void Unknown56() override {
    ShowHeadline(1, false, "MID_Sys_Result_Failure", "", "In_Judege00",
      "Type_Judge00");
  }
};

class TelopScoutFailResult : public TelopResult {
public:
  ~TelopScoutFailResult() override;

  void Unknown56() override {
    ShowHeadline(0, true, "MID_Sys_Result_Headline_Scout_Failed", "",
      "In_Judege00", "Type_Judge00");
  }

  void Unknown57() override;
};

class TelopGrowMastery : public TelopResult {
public:
  ~TelopGrowMastery() override;

  bool Unknown43() override { return !masteries_.Update(1); }
  void Unknown56() override;
  void Unknown57() override;
  void Unknown61() override { masteries_.Update(2); }

private:
  // The grown masteries, their type is not recovered.
  class Masteries {
  public:
    // Returns true while the given phase still runs.
    bool Update(int phase);
  };

  uint8_t unknown_490_[0x10];
  Masteries masteries_;
};

class TelopGetItemResult : public TelopResult {
public:
  ~TelopGetItemResult() override;

  int Unknown55() override { return items_.empty(); }

  virtual const char* Unknown62();

protected:
  std::vector<const void*> items_;
};

class TelopExploreResult : public TelopGetItemResult {
public:
  ~TelopExploreResult() override;

  void Unknown56() override { ShowJudge(Unknown58(), 0, false); }

  int Unknown58() override {
    uint32_t rank = rank_;
    return rank <= 2 ? kExploreJudges[rank] : 5;
  }

  void Unknown59() override { PlayJudge(Unknown58()); }

private:
  uint8_t unknown_4a8_[0x18];
  int32_t rank_;
};

TelopPerchResult::~TelopPerchResult() = default;
TelopDiningResult::~TelopDiningResult() = default;
TelopThermaeResult::~TelopThermaeResult() = default;
TelopSpeechResult::~TelopSpeechResult() = default;
TelopTheaterActResult::~TelopTheaterActResult() = default;
TelopTheaterWatchResult::~TelopTheaterWatchResult() = default;
TelopDivinationResult::~TelopDivinationResult() = default;
TelopDivinationVisitorResult::~TelopDivinationVisitorResult() = default;
TelopTrainingResult::~TelopTrainingResult() = default;
TelopSubquestResult::~TelopSubquestResult() = default;
TelopSidestoryResult::~TelopSidestoryResult() = default;
TelopReconstructionResult::~TelopReconstructionResult() = default;
TelopCommonResult::~TelopCommonResult() = default;
TelopNoticeNewJob::~TelopNoticeNewJob() = default;
TelopNoticeNewAction::~TelopNoticeNewAction() = default;
TelopSimpleLevelup::~TelopSimpleLevelup() = default;
TelopScoutSuccessResult::~TelopScoutSuccessResult() = default;
TelopCaptureSuccessResult::~TelopCaptureSuccessResult() = default;
TelopGetItemResult::~TelopGetItemResult() = default;
TelopExploreResult::~TelopExploreResult() = default;
TelopCaptureFailResult::~TelopCaptureFailResult() = default;
TelopScoutFailResult::~TelopScoutFailResult() = default;
TelopGrowMastery::~TelopGrowMastery() = default;

}

#pragma GCC visibility pop
