#include "game/sound/se.hpp"
#include "game/vibration_setting.hpp"

namespace game::sound {

// The system sounds only check the global switch, the others the setting.
Handle PlayVibration(const char* label, bool system) {
  Handle handle;

  if (system ? g_vibration_enabled
      : g_game_setting->GetVibration().IsEnabled()) {
    handle = label != nullptr ? PlayLabel(label) : Handle();
  }

  return handle;
}

Handle PlaySeAt(const char* label, const snd::fnd::Vec3& position) {
  if (label == nullptr) {
    Handle none;
    return none;
  }

  return PlayAt(
    label, label, position, PlayParam(), 0, 0x10001, 0, 0.0f, 1.0f
  );
}

void Stop(Handle& handle) {
  Stop(handle, PlayParam(0.0f));
}

void PlayDecideSe() {
  PlaySe("SE_SYS_Decide_H");
}

void PlayDecideLightSe() {
  PlaySe("SE_SYS_Decide_H_Light");
}

void PlayCursorHorizontalSe() {
  PlaySeWithVibration("SE_SYS_Cursor_H", "VIB_Cursor_Medium");
}

void PlayCursorSe() {
  PlaySeWithVibration("SE_SYS_Cursor_Menu", "VIB_Cursor_Large");
}

void PlayCursorCharaSe() {
  PlaySeWithVibration("SE_SYS_Cursor_Chara", "VIB_Cursor_Chara");
}

void PlayCursorLeftSe() {
  PlaySeWithVibration("SE_SYS_Cursor_Left", "VIB_Cursor_Left");
}

void PlayCursorRightSe() {
  PlaySeWithVibration("SE_SYS_Cursor_Right", "VIB_Cursor_Right");
}

void PlayCursorHorizontalLeftSe() {
  PlaySeWithVibration("SE_SYS_Cursor_H_Left", "VIB_Cursor_Left");
}

void PlayCursorHorizontalRightSe() {
  PlaySeWithVibration("SE_SYS_Cursor_H_Right", "VIB_Cursor_Right");
}

void PlayListLeftSe() {
  PlaySeWithVibration("SE_SYS_List_Left", "VIB_List_Left");
}

void PlayListRightSe() {
  PlaySeWithVibration("SE_SYS_List_Right", "VIB_List_Right");
}

void PlayGaugeLeftSe() {
  PlaySeWithVibration("SE_SYS_Gauge_Left", "VIB_Gauge_Left");
}

void PlayGaugeRightSe() {
  PlaySeWithVibration("SE_SYS_Gauge_Right", "VIB_Gauge_Right");
}

void PlayPageSendSe() {
  PlaySeWithVibration("SE_SYS_Page_Send", "VIB_Page_Send");
}

void PlayPageBackSe() {
  PlaySeWithVibration("SE_SYS_Page_Back", "VIB_Page_Back");
}

void PlayCursorLeftCalendarSe() {
  PlaySeWithVibration(
    "SE_SYS_Cursor_Left_Calender", "VIB_Cursor_Left_Calender"
  );
}

void PlayCursorRightCalendarSe() {
  PlaySeWithVibration(
    "SE_SYS_Cursor_Right_Calender", "VIB_Cursor_Right_Calender"
  );
}

void PlayCursorHelpSe() {
  PlaySe("SE_SYS_Cursor_H");
  Handle vibration;

  if (g_game_setting->GetVibration().IsEnabled()) {
    vibration = PlayLabel("VIB_Cursor_Help");
  }
}

void PlayTalkSendSe() {
  PlaySe("SE_SYS_Talk_Send");
}

void PlayCancelSe() {
  PlaySe("SE_SYS_Cancel_M");
}

void PlayCursorTargetSe() {
  PlaySe("SE_SYS_Cursor_Target");
}

void PlayNgSe() {
  PlaySe("SE_SYS_NG");
}

void PlayDangerZoneOnSe() {
  PlaySe("SE_SYS_DangerZone_On");
}

void PlayDangerZoneOffSe() {
  PlaySe("SE_SYS_DangerZone_Off");
}

void PlayZoomViewInSe() {
  PlaySe("SE_SYS_ZoomView_In");
}

void PlayZoomViewOutSe() {
  PlaySe("SE_SYS_ZoomView_Out");
}

void PlayCameraTurnSe() {
  PlaySe("SE_SYS_Camera_Turn");
}

}
