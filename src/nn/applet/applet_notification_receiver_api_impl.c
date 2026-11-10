#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_applet_NotificationReceiver_Destroy_NotificationReceiver_plt(_QWORD);
__int64 applet_notification_receiver_api_1e2110(__int64 a1);

__int64 applet_notification_receiver_api_1e2110(__int64 a1)
{
  nn_applet_NotificationReceiver_Destroy_NotificationReceiver_plt(a1 + 224);
  nn_applet_NotificationReceiver_Destroy_NotificationReceiver_plt(a1 + 152);
  nn_applet_NotificationReceiver_Destroy_NotificationReceiver_plt(a1 + 80);
  return nn_applet_NotificationReceiver_Destroy_NotificationReceiver_plt(a1 +
                                                                         8);
}

#pragma GCC visibility pop
