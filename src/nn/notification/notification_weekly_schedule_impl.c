#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64
nn_notification_WeeklyScheduleAlarmSettingBuilder_UnsetUid(__int64 result);
__int64

nn_notification_WeeklyScheduleAlarmSettingBuilder_UnsetUid(__int64 result)
{
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  return result;
}

#pragma GCC visibility pop
