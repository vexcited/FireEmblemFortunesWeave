#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _DWORD GameData_1a83140[4];
extern _UNKNOWN GameData_1ac0b57;
extern _UNKNOWN GameData_1ae6bf6;
extern _UNKNOWN GameData_1aee5d5;
extern _UNKNOWN GameData_1aee641;
extern _DWORD GameData_1b39518[24];
extern __int64 (*GameData_1fe8e20[])();
extern __int64 (*GameData_1fe92b8[])();
extern __int64 (*GameData_1fe9388[])();
extern __int64 (*GameData_1ffcba8[])();
extern __int64 (*GameData_1ffd190[])();
extern __int64 (*GameData_1ffd260[])();
extern __int64 (*GameData_1ffe0d8[])();
extern __int64 (*GameData_1ffe190[])();
extern __int64 (*GameData_1ffe248[])();
extern __int64 (*GameData_1ffe300[])();
extern __int64 (*GameData_1ffe3b8[])();
extern __int64 (*GameData_1ffe470[])();
extern __int64 (*GameData_1ffe528[])();
extern __int64 (*GameData_1ffe5e0[])();
extern __int64 (*GameData_1ffe798[])();
extern __int64 (*GameData_1ffe7e8[])();
extern __int64 (*GameData_1ffe838[])();
extern __int64 (*GameData_1ffeb38[])();
extern __int64 (*GameData_1ffeec0[])();
extern __int64 (*GameData_1fff150[])();
extern __int64 (*GameData_1fff5d8[])();
extern __int64 (*GameData_1fff6a8[])();
extern __int64 (*GameData_20002b8[])();
extern __int64 (*GameData_2000440[])();
extern char* GameData_2000878;
extern __int64 (*GameData_20008e8[])();
extern __int64 (*GameData_2000a70[])();
extern __int64 (*GameData_2000b40[])();
extern __int64 (*GameData_2001010[])();
extern __int64 (*GameData_20010e0[])();
extern __int64 (*GameData_2044668[])();
extern __int64 GameData_212bf68;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212c6a0[3];
extern __int64 (*GameData_212c6d0[11])();
extern __int64 (*GameData_212c720)();
extern _UNKNOWN* GameData_212c730;
extern __int64* GameData_212c738[2];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212cf60;
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 (*GameData_212d060[8])();
extern int* GameData_212d490;
extern _UNKNOWN* GameData_212d498;
extern __int64 GameData_212dbf0[2];
extern __int64 (*GameData_212dd40[3])();
extern __int64* GameData_212dec0[4];
extern int* GameData_212df08;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern __int64* GameData_212e348;
extern __int64* GameData_212ebc0[5];
extern __int64 GameData_212f510[6];
extern __int64 GameData_212f518[5];
extern __int64* GameData_212faf8[3];
extern __int64 GameData_2131678;
extern __int64* GameData_21319b0[6];
extern _UNKNOWN GameData_2166898;
extern int GameData_2167728;
extern _UNKNOWN GameData_2174f00;
extern _UNKNOWN GameData_2175550;
extern __int64 GameData_21c9608;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca080;
extern __int64 GameData_21ca310;
extern __int64 GameData_21caab0;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21ee240;
extern __int64 GameData_21ee260;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_22054a8;
extern __int64 GameData_220b6d0;
extern __int64 GameData_2219098;
extern __int64 GameData_221bea8;
extern char GameData_222be28;
extern __int64 GameData_222be30;
extern __int64 GameData_222be38;
extern __int64 GameData_222be40;
extern int GameData_222be48;
extern __int64 GameData_222be50;
extern int GameData_222be58;
extern __int64 GameData_222be60;
extern char GameData_222be68;
extern __int64 GameData_222be70;
extern __int64 GameData_222be78;
extern __int64 GameData_222be80;
extern int GameData_222be88;
extern __int64 GameData_222be90;
extern int GameData_222be98;
extern __int64 GameData_222bea0;
extern char GameData_222bea8;
extern __int64 GameData_222beb0;
extern __int64 GameData_222beb8;
extern __int64 GameData_222bec0;
extern int GameData_222bec8;
extern __int64 GameData_222bed0;
extern int GameData_222bed8;
extern __int64 GameData_222bee0;
extern char GameData_222bee8;
extern __int64 GameData_222bef0;
extern __int64 GameData_222bef8;
extern __int64 GameData_222bf00;
extern int GameData_222bf08;
extern __int64 GameData_222bf10;
extern int GameData_222bf18;
extern __int64 GameData_222bf20;
extern char GameData_222bf28;
extern __int64 GameData_222bf30;
extern __int64 GameData_222bf38;
extern __int64 GameData_222bf40;
extern int GameData_222bf48;
extern __int64 GameData_222bf50;
extern int GameData_222bf58;
extern __int64 GameData_222bf60;
extern char GameData_222bf68;
extern __int64 GameData_222bf70;
extern __int64 GameData_222bf78;
extern __int64 GameData_222bf80;
extern int GameData_222bf88;
extern __int64 GameData_222bf90;
extern int GameData_222bf98;
extern __int64 GameData_222bfa0;
extern char GameData_222bfa8;
extern __int64 GameData_222bfb0;
extern __int64 GameData_222bfb8;
extern __int64 GameData_222bfc0;
extern int GameData_222bfc8;
extern __int64 GameData_222bfd0;
extern int GameData_222bfd8;
extern __int64 GameData_222bfe0;
extern char GameData_222bfe8;
extern __int64 GameData_222bff0;
extern __int64 GameData_222bff8;
extern __int64 GameData_222c000;
extern int GameData_222c008;
extern __int64 GameData_222c010;
extern int GameData_222c018;
extern __int64 GameData_222c020;
extern char GameData_222c028;
extern __int64 GameData_222c030;
extern __int64 GameData_222c038;
extern __int64 GameData_222c040;
extern int GameData_222c048;
extern __int64 GameData_222c050;
extern int GameData_222c058;
extern __int64 GameData_222c060;
extern char GameData_222c068;
extern __int64 GameData_222c070;
extern __int64 GameData_222c078;
extern __int64 GameData_222c080;
extern int GameData_222c088;
extern __int64 GameData_222c090;
extern int GameData_222c098;
extern __int64 GameData_222c0a0;
extern char GameData_222c0a8;
extern __int64 GameData_222c0b0;
extern __int64 GameData_222c0b8;
extern __int64 GameData_222c0c0;
extern int GameData_222c0c8;
extern __int64 GameData_222c0d0;
extern int GameData_222c0d8;
extern __int64 GameData_222c0e0;
extern char GameData_222c0e8;
extern __int64 GameData_222c0f0;
extern __int64 GameData_222c0f8;
extern __int64 GameData_222c100;
extern int GameData_222c108;
extern __int64 GameData_222c110;
extern int GameData_222c118;
extern __int64 GameData_222c120;
extern char GameData_222c128;
extern __int64 GameData_222c130;
extern __int64 GameData_222c138;
extern __int64 GameData_222c140;
extern int GameData_222c148;
extern __int64 GameData_222c150;
extern int GameData_222c158;
extern __int64 GameData_222c160;
extern char GameData_222c168;
extern __int64 GameData_222c170;
extern __int64 GameData_222c178;
extern __int64 GameData_222c180;
extern int GameData_222c188;
extern __int64 GameData_222c190;
extern int GameData_222c198;
extern __int64 GameData_222c1a0;
extern char GameData_222c1a8;
extern __int64 GameData_222c1b0;
extern __int64 GameData_222c1b8;
extern __int64 GameData_222c1c0;
extern int GameData_222c1c8;
extern __int64 GameData_222c1d0;
extern int GameData_222c1d8;
extern __int64 GameData_222c1e0;
extern char GameData_222c1e8;
extern __int64 GameData_222c1f0;
extern __int64 GameData_222c1f8;
extern __int64 GameData_222c200;
extern int GameData_222c208;
extern __int64 GameData_222c210;
extern int GameData_222c218;
extern __int64 GameData_222c220;
extern _UNKNOWN GameData_222c228;
extern char GameData_222c230;
extern __int64 GameData_222c238;
extern __int64 GameData_222c240;
extern __int64 GameData_222c248;
extern int GameData_222c250;
extern __int64 GameData_222c258;
extern int GameData_222c260;
extern __int64 GameData_222c268;
extern char GameData_222c270;
extern __int64 GameData_222c278;
extern __int64 GameData_222c280;
extern __int64 GameData_222c288;
extern int GameData_222c290;
extern __int64 GameData_222c298;
extern int GameData_222c2a0;
extern __int64 GameData_222c2a8;
extern char GameData_222c2b0;
extern __int64 GameData_222c2b8;
extern __int64 GameData_222c2c0;
extern int GameData_222c2d0;
extern __int64 GameData_222c2d8;
extern int GameData_222c2e0;
extern __int64 GameData_222c2e8;
extern char GameData_222c2f0;
extern __int64 GameData_222c2f8;
extern __int64 GameData_222c300;
extern int GameData_222c310;
extern __int64 GameData_222c318;
extern int GameData_222c320;
extern __int64 GameData_222c328;
extern char GameData_222c330;
extern __int64 GameData_222c338;
extern __int64 GameData_222c340;
extern __int64 GameData_222c348;
extern int GameData_222c350;
extern __int64 GameData_222c358;
extern int GameData_222c360;
extern __int64 GameData_222c368;
extern char GameData_222c370;
extern __int64 GameData_222c378;
extern __int64 GameData_222c380;
extern __int64 GameData_222c388;
extern int GameData_222c390;
extern __int64 GameData_222c398;
extern int GameData_222c3a0;
extern __int64 GameData_222c3a8;
extern char GameData_222c3b0;
extern __int64 GameData_222c3b8;
extern __int64 GameData_222c3c0;
extern __int64 GameData_222c3c8;
extern int GameData_222c3d0;
extern __int64 GameData_222c3d8;
extern int GameData_222c3e0;
extern __int64 GameData_222c3e8;
extern char GameData_222c3f0;
extern __int64 GameData_222c3f8;
extern __int64 GameData_222c400;
extern __int64 GameData_222c408;
extern int GameData_222c410;
extern __int64 GameData_222c418;
extern int GameData_222c420;
extern __int64 GameData_222c428;
extern char GameData_222c430;
extern __int64 GameData_222c438;
extern __int64 GameData_222c440;
extern __int64 GameData_222c448;
extern int GameData_222c450;
extern __int64 GameData_222c458;
extern int GameData_222c460;
extern __int64 GameData_222c468;
extern char GameData_222c470;
extern __int64 GameData_222c478;
extern __int64 GameData_222c480;
extern __int64 GameData_222c488;
extern int GameData_222c490;
extern __int64 GameData_222c498;
extern int GameData_222c4a0;
extern __int64 GameData_222c4a8;
extern char GameData_222c4b0;
extern __int64 GameData_222c4b8;
extern __int64 GameData_222c4c0;
extern __int64 GameData_222c4c8;
extern int GameData_222c4d0;
extern __int64 GameData_222c4d8;
extern int GameData_222c4e0;
extern __int64 GameData_222c4e8;
extern char GameData_222c4f0;
extern __int64 GameData_222c4f8;
extern __int64 GameData_222c500;
extern int GameData_222c510;
extern __int64 GameData_222c518;
extern int GameData_222c520;
extern __int64 GameData_222c528;
extern char GameData_222c530;
extern __int64 GameData_222c538;
extern __int64 GameData_222c540;
extern int GameData_222c550;
extern __int64 GameData_222c558;
extern int GameData_222c560;
extern __int64 GameData_222c568;
extern char GameData_222c570;
extern __int64 GameData_222c578;
extern __int64 GameData_222c580;
extern __int64 GameData_222c588;
extern int GameData_222c590;
extern __int64 GameData_222c598;
extern int GameData_222c5a0;
extern __int64 GameData_222c5a8;
extern char GameData_222c5b0;
extern __int64 GameData_222c5b8;
extern __int64 GameData_222c5c0;
extern __int64 GameData_222c5c8;
extern int GameData_222c5d0;
extern __int64 GameData_222c5d8;
extern int GameData_222c5e0;
extern __int64 GameData_222c5e8;
extern char GameData_222c5f0;
extern __int64 GameData_222c5f8;
extern __int64 GameData_222c600;
extern __int64 GameData_222c608;
extern int GameData_222c610;
extern __int64 GameData_222c618;
extern int GameData_222c620;
extern __int64 GameData_222c628;
extern char GameData_222c630;
extern __int64 GameData_222c638;
extern __int64 GameData_222c640;
extern __int64 GameData_222c648;
extern int GameData_222c650;
extern __int64 GameData_222c658;
extern int GameData_222c660;
extern __int64 GameData_222c668;
extern char GameData_222c670;
extern __int64 GameData_222c678;
extern __int64 GameData_222c680;
extern __int64 GameData_222c688;
extern int GameData_222c690;
extern __int64 GameData_222c698;
extern int GameData_222c6a0;
extern __int64 GameData_222c6a8;
extern char GameData_222c6b0;
extern __int64 GameData_222c6b8;
extern __int64 GameData_222c6c0;
extern __int64 GameData_222c6c8;
extern int GameData_222c6d0;
extern __int64 GameData_222c6d8;
extern int GameData_222c6e0;
extern __int64 GameData_222c6e8;
extern char GameData_222c6f0;
extern __int64 GameData_222c6f8;
extern __int64 GameData_222c700;
extern __int64 GameData_222c708;
extern int GameData_222c710;
extern __int64 GameData_222c718;
extern int GameData_222c720;
extern __int64 GameData_222c728;
extern _UNKNOWN GameData_222c730;
extern int GameData_222e468;
extern char GameData_222ffa0;
extern __int64 GameData_222ffa8;
extern __int64 GameData_222ffb0;
extern __int64 GameData_222ffb8;
extern int GameData_222ffc0;
extern __int64 GameData_222ffc8;
extern int GameData_222ffd0;
extern __int64 GameData_222ffd8;
extern char GameData_222ffe0;
extern __int64 GameData_222ffe8;
extern __int64 GameData_222fff0;
extern __int64 GameData_222fff8;
extern int GameData_2230000;
extern __int64 GameData_2230008;
extern int GameData_2230010;
extern __int64 GameData_2230018;
extern char GameData_2230020;
extern __int64 GameData_2230028;
extern __int64 GameData_2230030;
extern __int64 GameData_2230038;
extern int GameData_2230040;
extern __int64 GameData_2230048;
extern int GameData_2230050;
extern __int64 GameData_2230058;
extern char GameData_2230060;
extern __int64 GameData_2230068;
extern __int64 GameData_2230070;
extern __int64 GameData_2230078;
extern int GameData_2230080;
extern __int64 GameData_2230088;
extern int GameData_2230090;
extern __int64 GameData_2230098;
extern char GameData_22300a0;
extern __int64 GameData_22300a8;
extern __int64 GameData_22300b0;
extern __int64 GameData_22300b8;
extern int GameData_22300c0;
extern __int64 GameData_22300c8;
extern int GameData_22300d0;
extern __int64 GameData_22300d8;
extern char GameData_22300e0;
extern __int64 GameData_22300e8;
extern __int64 GameData_22300f0;
extern __int64 GameData_22300f8;
extern int GameData_2230100;
extern __int64 GameData_2230108;
extern int GameData_2230110;
extern __int64 GameData_2230118;
extern char GameData_2230120;
extern __int64 GameData_2230128;
extern __int64 GameData_2230130;
extern __int64 GameData_2230138;
extern int GameData_2230140;
extern __int64 GameData_2230148;
extern int GameData_2230150;
extern __int64 GameData_2230158;
extern char GameData_2230160;
extern __int64 GameData_2230168;
extern __int64 GameData_2230170;
extern __int64 GameData_2230178;
extern int GameData_2230180;
extern __int64 GameData_2230188;
extern int GameData_2230190;
extern __int64 GameData_2230198;
extern char GameData_22301a0;
extern __int64 GameData_22301a8;
extern __int64 GameData_22301b0;
extern __int64 GameData_22301b8;
extern int GameData_22301c0;
extern __int64 GameData_22301c8;
extern int GameData_22301d0;
extern __int64 GameData_22301d8;
extern char GameData_22301e0;
extern __int64 GameData_22301e8;
extern __int64 GameData_22301f0;
extern __int64 GameData_22301f8;
extern int GameData_2230200;
extern __int64 GameData_2230208;
extern int GameData_2230210;
extern __int64 GameData_2230218;
extern char GameData_2230220;
extern __int64 GameData_2230228;
extern __int64 GameData_2230230;
extern __int64 GameData_2230238;
extern int GameData_2230240;
extern __int64 GameData_2230248;
extern int GameData_2230250;
extern __int64 GameData_2230258;
extern char GameData_2230260;
extern __int64 GameData_2230268;
extern __int64 GameData_2230270;
extern __int64 GameData_2230278;
extern int GameData_2230280;
extern __int64 GameData_2230288;
extern int GameData_2230290;
extern __int64 GameData_2230298;
extern char GameData_22302a0;
extern __int64 GameData_22302a8;
extern __int64 GameData_22302b0;
extern __int64 GameData_22302b8;
extern int GameData_22302c0;
extern __int64 GameData_22302c8;
extern int GameData_22302d0;
extern __int64 GameData_22302d8;
extern char GameData_22302e0;
extern __int64 GameData_22302e8;
extern __int64 GameData_22302f0;
extern __int64 GameData_22302f8;
extern int GameData_2230300;
extern __int64 GameData_2230308;
extern int GameData_2230310;
extern __int64 GameData_2230318;
extern char GameData_2230320;
extern __int64 GameData_2230328;
extern __int64 GameData_2230330;
extern __int64 GameData_2230338;
extern int GameData_2230340;
extern __int64 GameData_2230348;
extern int GameData_2230350;
extern __int64 GameData_2230358;
extern char GameData_2230360;
extern __int64 GameData_2230368;
extern __int64 GameData_2230370;
extern __int64 GameData_2230378;
extern int GameData_2230380;
extern __int64 GameData_2230388;
extern int GameData_2230390;
extern __int64 GameData_2230398;
extern char GameData_22303a0;
extern __int64 GameData_22303a8;
extern __int64 GameData_22303b0;
extern __int64 GameData_22303b8;
extern int GameData_22303c0;
extern __int64 GameData_22303c8;
extern int GameData_22303d0;
extern __int64 GameData_22303d8;
extern char GameData_22303e0;
extern __int64 GameData_22303e8;
extern __int64 GameData_22303f0;
extern __int64 GameData_22303f8;
extern int GameData_2230400;
extern __int64 GameData_2230408;
extern int GameData_2230410;
extern __int64 GameData_2230418;
extern char GameData_2230420;
extern __int64 GameData_2230428;
extern __int64 GameData_2230430;
extern __int64 GameData_2230438;
extern int GameData_2230440;
extern __int64 GameData_2230448;
extern int GameData_2230450;
extern __int64 GameData_2230458;
extern char GameData_2230460;
extern __int64 GameData_2230468;
extern __int64 GameData_2230470;
extern __int64 GameData_2230478;
extern int GameData_2230480;
extern __int64 GameData_2230488;
extern int GameData_2230490;
extern __int64 GameData_2230498;
extern char GameData_22304a0;
extern __int64 GameData_22304a8;
extern __int64 GameData_22304b0;
extern __int64 GameData_22304b8;
extern int GameData_22304c0;
extern __int64 GameData_22304c8;
extern int GameData_22304d0;
extern __int64 GameData_22304d8;
extern _UNKNOWN GameData_22304e0;
extern char GameData_22304e8;
extern __int64 GameData_22304f0;
extern __int64 GameData_22304f8;
extern __int64 GameData_2230500;
extern int GameData_2230508;
extern __int64 GameData_2230510;
extern int GameData_2230518;
extern __int64 GameData_2230520;
extern char GameData_2230528;
extern __int64 GameData_2230530;
extern __int64 GameData_2230538;
extern __int64 GameData_2230540;
extern int GameData_2230548;
extern __int64 GameData_2230550;
extern int GameData_2230558;
extern __int64 GameData_2230560;
extern char GameData_2230568;
extern __int64 GameData_2230570;
extern __int64 GameData_2230578;
extern __int64 GameData_2230580;
extern int GameData_2230588;
extern __int64 GameData_2230590;
extern int GameData_2230598;
extern __int64 GameData_22305a0;
extern char GameData_22305a8;
extern __int64 GameData_22305b0;
extern __int64 GameData_22305b8;
extern __int64 GameData_22305c0;
extern int GameData_22305c8;
extern __int64 GameData_22305d0;
extern int GameData_22305d8;
extern __int64 GameData_22305e0;
extern char GameData_22305e8;
extern __int64 GameData_22305f0;
extern __int64 GameData_22305f8;
extern __int64 GameData_2230600;
extern int GameData_2230608;
extern __int64 GameData_2230610;
extern int GameData_2230618;
extern __int64 GameData_2230620;
extern char GameData_2230628;
extern __int64 GameData_2230630;
extern __int64 GameData_2230638;
extern __int64 GameData_2230640;
extern int GameData_2230648;
extern __int64 GameData_2230650;
extern int GameData_2230658;
extern __int64 GameData_2230660;
extern char GameData_2230668;
extern __int64 GameData_2230670;
extern __int64 GameData_2230678;
extern __int64 GameData_2230680;
extern int GameData_2230688;
extern __int64 GameData_2230690;
extern int GameData_2230698;
extern __int64 GameData_22306a0;
extern char GameData_22306a8;
extern __int64 GameData_22306b0;
extern __int64 GameData_22306b8;
extern __int64 GameData_22306c0;
extern int GameData_22306c8;
extern __int64 GameData_22306d0;
extern int GameData_22306d8;
extern __int64 GameData_22306e0;
extern char GameData_22306e8;
extern __int64 GameData_22306f0;
extern __int64 GameData_22306f8;
extern __int64 GameData_2230700;
extern int GameData_2230708;
extern __int64 GameData_2230710;
extern int GameData_2230718;
extern __int64 GameData_2230720;
extern char GameData_2230728;
extern __int64 GameData_2230730;
extern __int64 GameData_2230738;
extern __int64 GameData_2230740;
extern int GameData_2230748;
extern __int64 GameData_2230750;
extern int GameData_2230758;
extern __int64 GameData_2230760;
extern char GameData_2230768;
extern __int64 GameData_2230770;
extern __int64 GameData_2230778;
extern __int64 GameData_2230780;
extern int GameData_2230788;
extern __int64 GameData_2230790;
extern int GameData_2230798;
extern __int64 GameData_22307a0;
extern char GameData_22307a8;
extern __int64 GameData_22307b0;
extern __int64 GameData_22307b8;
extern __int64 GameData_22307c0;
extern int GameData_22307c8;
extern __int64 GameData_22307d0;
extern int GameData_22307d8;
extern __int64 GameData_22307e0;
extern char GameData_22307e8;
extern __int64 GameData_22307f0;
extern __int64 GameData_22307f8;
extern __int64 GameData_2230800;
extern int GameData_2230808;
extern __int64 GameData_2230810;
extern int GameData_2230818;
extern __int64 GameData_2230820;
extern char GameData_2230828;
extern __int64 GameData_2230830;
extern __int64 GameData_2230838;
extern __int64 GameData_2230840;
extern int GameData_2230848;
extern __int64 GameData_2230850;
extern int GameData_2230858;
extern __int64 GameData_2230860;
extern char GameData_2230868;
extern __int64 GameData_2230870;
extern __int64 GameData_2230878;
extern __int64 GameData_2230880;
extern int GameData_2230888;
extern __int64 GameData_2230890;
extern int GameData_2230898;
extern __int64 GameData_22308a0;
extern _UNKNOWN GameData_22308a8;
extern char GameData_22308b0;
extern __int64 GameData_22308b8;
extern __int64 GameData_22308c0;
extern __int64 GameData_22308c8;
extern int GameData_22308d0;
extern __int64 GameData_22308d8;
extern int GameData_22308e0;
extern __int64 GameData_22308e8;
extern char GameData_22308f0;
extern __int64 GameData_22308f8;
extern __int64 GameData_2230900;
extern __int64 GameData_2230908;
extern int GameData_2230910;
extern __int64 GameData_2230918;
extern int GameData_2230920;
extern __int64 GameData_2230928;
extern char GameData_2230930;
extern __int64 GameData_2230938;
extern __int64 GameData_2230940;
extern __int64 GameData_2230948;
extern int GameData_2230950;
extern __int64 GameData_2230958;
extern int GameData_2230960;
extern __int64 GameData_2230968;
extern char GameData_2230970;
extern __int64 GameData_2230978;
extern __int64 GameData_2230980;
extern __int64 GameData_2230988;
extern int GameData_2230990;
extern __int64 GameData_2230998;
extern int GameData_22309a0;
extern __int64 GameData_22309a8;
extern char GameData_22309b0;
extern __int64 GameData_22309b8;
extern __int64 GameData_22309c0;
extern __int64 GameData_22309c8;
extern int GameData_22309d0;
extern __int64 GameData_22309d8;
extern int GameData_22309e0;
extern __int64 GameData_22309e8;
extern char GameData_22309f0;
extern __int64 GameData_22309f8;
extern __int64 GameData_2230a00;
extern __int64 GameData_2230a08;
extern int GameData_2230a10;
extern __int64 GameData_2230a18;
extern int GameData_2230a20;
extern __int64 GameData_2230a28;
extern char GameData_2230a30;
extern __int64 GameData_2230a38;
extern __int64 GameData_2230a40;
extern __int64 GameData_2230a48;
extern int GameData_2230a50;
extern __int64 GameData_2230a58;
extern int GameData_2230a60;
extern __int64 GameData_2230a68;
extern char GameData_2230a70;
extern __int64 GameData_2230a78;
extern __int64 GameData_2230a80;
extern __int64 GameData_2230a88;
extern int GameData_2230a90;
extern __int64 GameData_2230a98;
extern int GameData_2230aa0;
extern __int64 GameData_2230aa8;
extern char GameData_2230ab0;
extern __int64 GameData_2230ab8;
extern __int64 GameData_2230ac0;
extern __int64 GameData_2230ac8;
extern int GameData_2230ad0;
extern __int64 GameData_2230ad8;
extern int GameData_2230ae0;
extern __int64 GameData_2230ae8;
extern char GameData_2230af0;
extern __int64 GameData_2230af8;
extern __int64 GameData_2230b00;
extern __int64 GameData_2230b08;
extern int GameData_2230b10;
extern __int64 GameData_2230b18;
extern int GameData_2230b20;
extern __int64 GameData_2230b28;
extern char GameData_2230b30;
extern __int64 GameData_2230b38;
extern __int64 GameData_2230b40;
extern __int64 GameData_2230b48;
extern int GameData_2230b50;
extern __int64 GameData_2230b58;
extern int GameData_2230b60;
extern __int64 GameData_2230b68;
extern char GameData_2230b70;
extern __int64 GameData_2230b78;
extern __int64 GameData_2230b80;
extern __int64 GameData_2230b88;
extern int GameData_2230b90;
extern __int64 GameData_2230b98;
extern int GameData_2230ba0;
extern __int64 GameData_2230ba8;
extern char GameData_2230bb0;
extern __int64 GameData_2230bb8;
extern __int64 GameData_2230bc0;
extern __int64 GameData_2230bc8;
extern int GameData_2230bd0;
extern __int64 GameData_2230bd8;
extern int GameData_2230be0;
extern __int64 GameData_2230be8;
extern char GameData_2230bf0;
extern __int64 GameData_2230bf8;
extern __int64 GameData_2230c00;
extern __int64 GameData_2230c08;
extern int GameData_2230c10;
extern __int64 GameData_2230c18;
extern int GameData_2230c20;
extern __int64 GameData_2230c28;
extern char GameData_2230c30;
extern __int64 GameData_2230c38;
extern __int64 GameData_2230c40;
extern __int64 GameData_2230c48;
extern int GameData_2230c50;
extern __int64 GameData_2230c58;
extern int GameData_2230c60;
extern __int64 GameData_2230c68;
extern char GameData_2230c70;
extern __int64 GameData_2230c78;
extern __int64 GameData_2230c80;
extern __int64 GameData_2230c88;
extern int GameData_2230c90;
extern __int64 GameData_2230c98;
extern int GameData_2230ca0;
extern __int64 GameData_2230ca8;
extern char GameData_2230cb0;
extern __int64 GameData_2230cb8;
extern __int64 GameData_2230cc0;
extern __int64 GameData_2230cc8;
extern int GameData_2230cd0;
extern __int64 GameData_2230cd8;
extern int GameData_2230ce0;
extern __int64 GameData_2230ce8;
extern char GameData_2230cf0;
extern __int64 GameData_2230cf8;
extern __int64 GameData_2230d00;
extern __int64 GameData_2230d08;
extern int GameData_2230d10;
extern __int64 GameData_2230d18;
extern int GameData_2230d20;
extern __int64 GameData_2230d28;
extern char GameData_2230d30;
extern __int64 GameData_2230d38;
extern __int64 GameData_2230d40;
extern __int64 GameData_2230d48;
extern int GameData_2230d50;
extern __int64 GameData_2230d58;
extern int GameData_2230d60;
extern __int64 GameData_2230d68;
extern char GameData_2230d70;
extern __int64 GameData_2230d78;
extern __int64 GameData_2230d80;
extern __int64 GameData_2230d88;
extern int GameData_2230d90;
extern __int64 GameData_2230d98;
extern int GameData_2230da0;
extern __int64 GameData_2230da8;
extern _UNKNOWN GameData_2230db0;
extern char GameData_2230db8;
extern __int64 GameData_2230dc0;
extern __int64 GameData_2230dc8;
extern __int64 GameData_2230dd0;
extern int GameData_2230dd8;
extern __int64 GameData_2230de0;
extern int GameData_2230de8;
extern __int64 GameData_2230df0;
extern char GameData_2230df8;
extern __int64 GameData_2230e00;
extern __int64 GameData_2230e08;
extern __int64 GameData_2230e10;
extern int GameData_2230e18;
extern __int64 GameData_2230e20;
extern int GameData_2230e28;
extern __int64 GameData_2230e30;
extern char GameData_2230e38;
extern __int64 GameData_2230e40;
extern __int64 GameData_2230e48;
extern __int64 GameData_2230e50;
extern int GameData_2230e58;
extern __int64 GameData_2230e60;
extern int GameData_2230e68;
extern __int64 GameData_2230e70;
extern char GameData_2230e78;
extern __int64 GameData_2230e80;
extern __int64 GameData_2230e88;
extern __int64 GameData_2230e90;
extern int GameData_2230e98;
extern __int64 GameData_2230ea0;
extern int GameData_2230ea8;
extern __int64 GameData_2230eb0;
extern char GameData_2230eb8;
extern __int64 GameData_2230ec0;
extern __int64 GameData_2230ec8;
extern __int64 GameData_2230ed0;
extern int GameData_2230ed8;
extern __int64 GameData_2230ee0;
extern int GameData_2230ee8;
extern __int64 GameData_2230ef0;
extern char GameData_2230ef8;
extern __int64 GameData_2230f00;
extern __int64 GameData_2230f08;
extern __int64 GameData_2230f10;
extern int GameData_2230f18;
extern __int64 GameData_2230f20;
extern int GameData_2230f28;
extern __int64 GameData_2230f30;
extern char GameData_2230f38;
extern __int64 GameData_2230f40;
extern __int64 GameData_2230f48;
extern __int64 GameData_2230f50;
extern int GameData_2230f58;
extern __int64 GameData_2230f60;
extern int GameData_2230f68;
extern __int64 GameData_2230f70;
extern char GameData_2230f78;
extern __int64 GameData_2230f80;
extern __int64 GameData_2230f88;
extern __int64 GameData_2230f90;
extern int GameData_2230f98;
extern __int64 GameData_2230fa0;
extern int GameData_2230fa8;
extern __int64 GameData_2230fb0;
extern char GameData_2230fb8;
extern __int64 GameData_2230fc0;
extern __int64 GameData_2230fc8;
extern __int64 GameData_2230fd0;
extern int GameData_2230fd8;
extern __int64 GameData_2230fe0;
extern int GameData_2230fe8;
extern __int64 GameData_2230ff0;
extern _UNKNOWN GameData_2230ff8;
extern char GameData_2231000;
extern __int64 GameData_2231008;
extern __int64 GameData_2231010;
extern __int64 GameData_2231018;
extern int GameData_2231020;
extern __int64 GameData_2231028;
extern int GameData_2231030;
extern __int64 GameData_2231038;
extern char GameData_2231040;
extern __int64 GameData_2231048;
extern __int64 GameData_2231050;
extern __int64 GameData_2231058;
extern int GameData_2231060;
extern __int64 GameData_2231068;
extern int GameData_2231070;
extern __int64 GameData_2231078;
extern char GameData_2231080;
extern __int64 GameData_2231088;
extern __int64 GameData_2231090;
extern __int64 GameData_2231098;
extern int GameData_22310a0;
extern __int64 GameData_22310a8;
extern int GameData_22310b0;
extern __int64 GameData_22310b8;
extern char GameData_22310c0;
extern __int64 GameData_22310c8;
extern __int64 GameData_22310d0;
extern __int64 GameData_22310d8;
extern int GameData_22310e0;
extern __int64 GameData_22310e8;
extern int GameData_22310f0;
extern __int64 GameData_22310f8;
extern char GameData_2231100;
extern __int64 GameData_2231108;
extern __int64 GameData_2231110;
extern __int64 GameData_2231118;
extern int GameData_2231120;
extern __int64 GameData_2231128;
extern int GameData_2231130;
extern __int64 GameData_2231138;
extern char GameData_2231140;
extern __int64 GameData_2231148;
extern __int64 GameData_2231150;
extern __int64 GameData_2231158;
extern int GameData_2231160;
extern __int64 GameData_2231168;
extern int GameData_2231170;
extern __int64 GameData_2231178;
extern char GameData_2231180;
extern __int64 GameData_2231188;
extern __int64 GameData_2231190;
extern __int64 GameData_2231198;
extern int GameData_22311a0;
extern __int64 GameData_22311a8;
extern int GameData_22311b0;
extern __int64 GameData_22311b8;
extern char GameData_22311c0;
extern __int64 GameData_22311c8;
extern __int64 GameData_22311d0;
extern __int64 GameData_22311d8;
extern int GameData_22311e0;
extern __int64 GameData_22311e8;
extern int GameData_22311f0;
extern __int64 GameData_22311f8;
extern char GameData_2231200;
extern __int64 GameData_2231208;
extern __int64 GameData_2231210;
extern __int64 GameData_2231218;
extern int GameData_2231220;
extern __int64 GameData_2231228;
extern int GameData_2231230;
extern __int64 GameData_2231238;
extern _UNKNOWN GameData_2231240;
extern char GameData_2231248;
extern __int64 GameData_2231250;
extern __int64 GameData_2231258;
extern __int64 GameData_2231260;
extern int GameData_2231268;
extern __int64 GameData_2231270;
extern int GameData_2231278;
extern __int64 GameData_2231280;
extern char GameData_2231288;
extern __int64 GameData_2231290;
extern __int64 GameData_2231298;
extern __int64 GameData_22312a0;
extern int GameData_22312a8;
extern __int64 GameData_22312b0;
extern int GameData_22312b8;
extern __int64 GameData_22312c0;
extern char GameData_22312c8;
extern __int64 GameData_22312d0;
extern __int64 GameData_22312d8;
extern __int64 GameData_22312e0;
extern int GameData_22312e8;
extern __int64 GameData_22312f0;
extern int GameData_22312f8;
extern __int64 GameData_2231300;
extern char GameData_2231308;
extern __int64 GameData_2231310;
extern __int64 GameData_2231318;
extern __int64 GameData_2231320;
extern int GameData_2231328;
extern __int64 GameData_2231330;
extern int GameData_2231338;
extern __int64 GameData_2231340;
extern char GameData_2231348;
extern __int64 GameData_2231350;
extern __int64 GameData_2231358;
extern __int64 GameData_2231360;
extern int GameData_2231368;
extern __int64 GameData_2231370;
extern int GameData_2231378;
extern __int64 GameData_2231380;
extern char GameData_2231388;
extern __int64 GameData_2231390;
extern __int64 GameData_2231398;
extern __int64 GameData_22313a0;
extern int GameData_22313a8;
extern __int64 GameData_22313b0;
extern int GameData_22313b8;
extern __int64 GameData_22313c0;
extern char GameData_22313c8;
extern __int64 GameData_22313d0;
extern __int64 GameData_22313d8;
extern __int64 GameData_22313e0;
extern int GameData_22313e8;
extern __int64 GameData_22313f0;
extern int GameData_22313f8;
extern __int64 GameData_2231400;
extern char GameData_2231408;
extern __int64 GameData_2231410;
extern __int64 GameData_2231418;
extern __int64 GameData_2231420;
extern int GameData_2231428;
extern __int64 GameData_2231430;
extern int GameData_2231438;
extern __int64 GameData_2231440;
extern char GameData_2231448;
extern __int64 GameData_2231450;
extern __int64 GameData_2231458;
extern __int64 GameData_2231460;
extern int GameData_2231468;
extern __int64 GameData_2231470;
extern int GameData_2231478;
extern __int64 GameData_2231480;
extern char GameData_2231488;
extern __int64 GameData_2231490;
extern __int64 GameData_2231498;
extern __int64 GameData_22314a0;
extern int GameData_22314a8;
extern __int64 GameData_22314b0;
extern int GameData_22314b8;
extern __int64 GameData_22314c0;
extern char GameData_22314c8;
extern __int64 GameData_22314d0;
extern __int64 GameData_22314d8;
extern __int64 GameData_22314e0;
extern int GameData_22314e8;
extern __int64 GameData_22314f0;
extern int GameData_22314f8;
extern __int64 GameData_2231500;
extern char GameData_2231508;
extern __int64 GameData_2231510;
extern __int64 GameData_2231518;
extern __int64 GameData_2231520;
extern int GameData_2231528;
extern __int64 GameData_2231530;
extern int GameData_2231538;
extern __int64 GameData_2231540;
extern char GameData_2231548;
extern __int64 GameData_2231550;
extern __int64 GameData_2231558;
extern __int64 GameData_2231560;
extern int GameData_2231568;
extern __int64 GameData_2231570;
extern int GameData_2231578;
extern __int64 GameData_2231580;
extern char GameData_2231588;
extern __int64 GameData_2231590;
extern __int64 GameData_2231598;
extern __int64 GameData_22315a0;
extern int GameData_22315a8;
extern __int64 GameData_22315b0;
extern int GameData_22315b8;
extern __int64 GameData_22315c0;
extern char GameData_22315c8;
extern __int64 GameData_22315d0;
extern __int64 GameData_22315d8;
extern __int64 GameData_22315e0;
extern int GameData_22315e8;
extern __int64 GameData_22315f0;
extern int GameData_22315f8;
extern __int64 GameData_2231600;
extern char GameData_2231608;
extern __int64 GameData_2231610;
extern __int64 GameData_2231618;
extern __int64 GameData_2231620;
extern int GameData_2231628;
extern __int64 GameData_2231630;
extern int GameData_2231638;
extern __int64 GameData_2231640;
extern char GameData_2231648;
extern __int64 GameData_2231650;
extern __int64 GameData_2231658;
extern __int64 GameData_2231660;
extern int GameData_2231668;
extern __int64 GameData_2231670;
extern int GameData_2231678;
extern __int64 GameData_2231680;
extern char GameData_2231688;
extern __int64 GameData_2231690;
extern __int64 GameData_2231698;
extern __int64 GameData_22316a0;
extern int GameData_22316a8;
extern __int64 GameData_22316b0;
extern int GameData_22316b8;
extern __int64 GameData_22316c0;
extern _UNKNOWN GameData_22316c8;
extern char GameData_22316d0;
extern __int64 GameData_22316d8;
extern __int64 GameData_22316e0;
extern __int64 GameData_22316e8;
extern int GameData_22316f0;
extern __int64 GameData_22316f8;
extern int GameData_2231700;
extern __int64 GameData_2231708;
extern char GameData_2231710;
extern __int64 GameData_2231718;
extern __int64 GameData_2231720;
extern __int64 GameData_2231728;
extern int GameData_2231730;
extern __int64 GameData_2231738;
extern int GameData_2231740;
extern __int64 GameData_2231748;
extern char GameData_2231750;
extern __int64 GameData_2231758;
extern __int64 GameData_2231760;
extern __int64 GameData_2231768;
extern int GameData_2231770;
extern __int64 GameData_2231778;
extern int GameData_2231780;
extern __int64 GameData_2231788;
extern char GameData_2231790;
extern __int64 GameData_2231798;
extern __int64 GameData_22317a0;
extern __int64 GameData_22317a8;
extern int GameData_22317b0;
extern __int64 GameData_22317b8;
extern int GameData_22317c0;
extern __int64 GameData_22317c8;
extern char GameData_22317d0;
extern __int64 GameData_22317d8;
extern __int64 GameData_22317e0;
extern __int64 GameData_22317e8;
extern int GameData_22317f0;
extern __int64 GameData_22317f8;
extern int GameData_2231800;
extern __int64 GameData_2231808;
extern char GameData_2231810;
extern __int64 GameData_2231818;
extern __int64 GameData_2231820;
extern __int64 GameData_2231828;
extern int GameData_2231830;
extern __int64 GameData_2231838;
extern int GameData_2231840;
extern __int64 GameData_2231848;
extern char GameData_2231850;
extern __int64 GameData_2231858;
extern __int64 GameData_2231860;
extern __int64 GameData_2231868;
extern int GameData_2231870;
extern __int64 GameData_2231878;
extern int GameData_2231880;
extern __int64 GameData_2231888;
extern char GameData_2231890;
extern __int64 GameData_2231898;
extern __int64 GameData_22318a0;
extern __int64 GameData_22318a8;
extern int GameData_22318b0;
extern __int64 GameData_22318b8;
extern int GameData_22318c0;
extern __int64 GameData_22318c8;
extern char GameData_22318d0;
extern __int64 GameData_22318d8;
extern __int64 GameData_22318e0;
extern __int64 GameData_22318e8;
extern int GameData_22318f0;
extern __int64 GameData_22318f8;
extern int GameData_2231900;
extern __int64 GameData_2231908;
extern _UNKNOWN GameData_2231910;
extern char GameData_2231918;
extern __int64 GameData_2231920;
extern __int64 GameData_2231928;
extern __int64 GameData_2231930;
extern int GameData_2231938;
extern __int64 GameData_2231940;
extern int GameData_2231948;
extern __int64 GameData_2231950;
extern char GameData_2231958;
extern __int64 GameData_2231960;
extern __int64 GameData_2231968;
extern __int64 GameData_2231970;
extern int GameData_2231978;
extern __int64 GameData_2231980;
extern int GameData_2231988;
extern __int64 GameData_2231990;
extern char GameData_2231998;
extern __int64 GameData_22319a0;
extern __int64 GameData_22319a8;
extern __int64 GameData_22319b0;
extern int GameData_22319b8;
extern __int64 GameData_22319c0;
extern int GameData_22319c8;
extern __int64 GameData_22319d0;
extern char GameData_22319d8;
extern __int64 GameData_22319e0;
extern __int64 GameData_22319e8;
extern __int64 GameData_22319f0;
extern int GameData_22319f8;
extern __int64 GameData_2231a00;
extern int GameData_2231a08;
extern __int64 GameData_2231a10;
extern char GameData_2231a18;
extern __int64 GameData_2231a20;
extern __int64 GameData_2231a28;
extern __int64 GameData_2231a30;
extern int GameData_2231a38;
extern __int64 GameData_2231a40;
extern int GameData_2231a48;
extern __int64 GameData_2231a50;
extern char GameData_2231a58;
extern __int64 GameData_2231a60;
extern __int64 GameData_2231a68;
extern __int64 GameData_2231a70;
extern int GameData_2231a78;
extern __int64 GameData_2231a80;
extern int GameData_2231a88;
extern __int64 GameData_2231a90;
extern char GameData_2231a98;
extern __int64 GameData_2231aa0;
extern __int64 GameData_2231aa8;
extern __int64 GameData_2231ab0;
extern int GameData_2231ab8;
extern __int64 GameData_2231ac0;
extern int GameData_2231ac8;
extern __int64 GameData_2231ad0;
extern char GameData_2231ad8;
extern __int64 GameData_2231ae0;
extern __int64 GameData_2231ae8;
extern __int64 GameData_2231af0;
extern int GameData_2231af8;
extern __int64 GameData_2231b00;
extern int GameData_2231b08;
extern __int64 GameData_2231b10;
extern char GameData_2231b18;
extern __int64 GameData_2231b20;
extern __int64 GameData_2231b28;
extern __int64 GameData_2231b30;
extern int GameData_2231b38;
extern __int64 GameData_2231b40;
extern int GameData_2231b48;
extern __int64 GameData_2231b50;
extern char GameData_2231b58;
extern __int64 GameData_2231b60;
extern __int64 GameData_2231b68;
extern __int64 GameData_2231b70;
extern int GameData_2231b78;
extern __int64 GameData_2231b80;
extern int GameData_2231b88;
extern __int64 GameData_2231b90;
extern char GameData_2231b98;
extern __int64 GameData_2231ba0;
extern __int64 GameData_2231ba8;
extern __int64 GameData_2231bb0;
extern int GameData_2231bb8;
extern __int64 GameData_2231bc0;
extern int GameData_2231bc8;
extern __int64 GameData_2231bd0;
extern char GameData_2231bd8;
extern __int64 GameData_2231be0;
extern __int64 GameData_2231be8;
extern __int64 GameData_2231bf0;
extern int GameData_2231bf8;
extern __int64 GameData_2231c00;
extern int GameData_2231c08;
extern __int64 GameData_2231c10;
extern char GameData_2231c18;
extern __int64 GameData_2231c20;
extern __int64 GameData_2231c28;
extern __int64 GameData_2231c30;
extern int GameData_2231c38;
extern __int64 GameData_2231c40;
extern int GameData_2231c48;
extern __int64 GameData_2231c50;
extern char GameData_2231c58;
extern __int64 GameData_2231c60;
extern __int64 GameData_2231c68;
extern __int64 GameData_2231c70;
extern int GameData_2231c78;
extern __int64 GameData_2231c80;
extern int GameData_2231c88;
extern __int64 GameData_2231c90;
extern char GameData_2231c98;
extern __int64 GameData_2231ca0;
extern __int64 GameData_2231ca8;
extern __int64 GameData_2231cb0;
extern int GameData_2231cb8;
extern __int64 GameData_2231cc0;
extern int GameData_2231cc8;
extern __int64 GameData_2231cd0;
extern char GameData_2231cd8;
extern __int64 GameData_2231ce0;
extern __int64 GameData_2231ce8;
extern __int64 GameData_2231cf0;
extern int GameData_2231cf8;
extern __int64 GameData_2231d00;
extern int GameData_2231d08;
extern __int64 GameData_2231d10;
extern char GameData_2231d18;
extern __int64 GameData_2231d20;
extern __int64 GameData_2231d28;
extern __int64 GameData_2231d30;
extern int GameData_2231d38;
extern __int64 GameData_2231d40;
extern int GameData_2231d48;
extern __int64 GameData_2231d50;
extern char GameData_2231d58;
extern __int64 GameData_2231d60;
extern __int64 GameData_2231d68;
extern __int64 GameData_2231d70;
extern int GameData_2231d78;
extern __int64 GameData_2231d80;
extern int GameData_2231d88;
extern __int64 GameData_2231d90;
extern char GameData_2231d98;
extern __int64 GameData_2231da0;
extern __int64 GameData_2231da8;
extern __int64 GameData_2231db0;
extern int GameData_2231db8;
extern __int64 GameData_2231dc0;
extern int GameData_2231dc8;
extern __int64 GameData_2231dd0;
extern char GameData_2231dd8;
extern __int64 GameData_2231de0;
extern __int64 GameData_2231de8;
extern __int64 GameData_2231df0;
extern int GameData_2231df8;
extern __int64 GameData_2231e00;
extern int GameData_2231e08;
extern __int64 GameData_2231e10;
extern char GameData_2231e18;
extern __int64 GameData_2231e20;
extern __int64 GameData_2231e28;
extern __int64 GameData_2231e30;
extern int GameData_2231e38;
extern __int64 GameData_2231e40;
extern int GameData_2231e48;
extern __int64 GameData_2231e50;
extern _UNKNOWN GameData_2231e58;
extern int GameData_2231ff4;
extern __int64 GameData_2232000;
extern char GameData_2232220;
extern __int64 GameData_2232228;
extern __int64 GameData_2232230;
extern __int64 GameData_2232238;
extern int GameData_2232240;
extern __int64 GameData_2232248;
extern int GameData_2232250;
extern __int64 GameData_2232258;
extern char GameData_2232260;
extern __int64 GameData_2232268;
extern __int64 GameData_2232270;
extern __int64 GameData_2232278;
extern int GameData_2232280;
extern __int64 GameData_2232288;
extern int GameData_2232290;
extern __int64 GameData_2232298;
extern char GameData_22322a0;
extern __int64 GameData_22322a8;
extern __int64 GameData_22322b0;
extern __int64 GameData_22322b8;
extern int GameData_22322c0;
extern __int64 GameData_22322c8;
extern int GameData_22322d0;
extern __int64 GameData_22322d8;
extern char GameData_22322e0;
extern __int64 GameData_22322e8;
extern __int64 GameData_22322f0;
extern __int64 GameData_22322f8;
extern int GameData_2232300;
extern __int64 GameData_2232308;
extern int GameData_2232310;
extern __int64 GameData_2232318;
extern char GameData_2232320;
extern __int64 GameData_2232328;
extern __int64 GameData_2232330;
extern __int64 GameData_2232338;
extern int GameData_2232340;
extern __int64 GameData_2232348;
extern int GameData_2232350;
extern __int64 GameData_2232358;
extern char GameData_2232360;
extern __int64 GameData_2232368;
extern __int64 GameData_2232370;
extern __int64 GameData_2232378;
extern int GameData_2232380;
extern __int64 GameData_2232388;
extern int GameData_2232390;
extern __int64 GameData_2232398;
extern char GameData_22323a0;
extern __int64 GameData_22323a8;
extern __int64 GameData_22323b0;
extern __int64 GameData_22323b8;
extern int GameData_22323c0;
extern __int64 GameData_22323c8;
extern int GameData_22323d0;
extern __int64 GameData_22323d8;
extern char GameData_22323e0;
extern __int64 GameData_22323e8;
extern __int64 GameData_22323f0;
extern __int64 GameData_22323f8;
extern int GameData_2232400;
extern __int64 GameData_2232408;
extern int GameData_2232410;
extern __int64 GameData_2232418;
extern char GameData_2232420;
extern __int64 GameData_2232428;
extern __int64 GameData_2232430;
extern __int64 GameData_2232438;
extern int GameData_2232440;
extern __int64 GameData_2232448;
extern int GameData_2232450;
extern __int64 GameData_2232458;
extern char GameData_2232460;
extern __int64 GameData_2232468;
extern __int64 GameData_2232470;
extern __int64 GameData_2232478;
extern int GameData_2232480;
extern __int64 GameData_2232488;
extern int GameData_2232490;
extern __int64 GameData_2232498;
extern char GameData_22324a0;
extern __int64 GameData_22324a8;
extern __int64 GameData_22324b0;
extern __int64 GameData_22324b8;
extern int GameData_22324c0;
extern __int64 GameData_22324c8;
extern int GameData_22324d0;
extern __int64 GameData_22324d8;
extern char GameData_22324e0;
extern __int64 GameData_22324e8;
extern __int64 GameData_22324f0;
extern __int64 GameData_22324f8;
extern int GameData_2232500;
extern __int64 GameData_2232508;
extern int GameData_2232510;
extern __int64 GameData_2232518;
extern char GameData_2232520;
extern __int64 GameData_2232528;
extern __int64 GameData_2232530;
extern int GameData_2232540;
extern __int64 GameData_2232548;
extern int GameData_2232550;
extern __int64 GameData_2232558;
extern char GameData_2232560;
extern __int64 GameData_2232568;
extern __int64 GameData_2232570;
extern int GameData_2232580;
extern __int64 GameData_2232588;
extern int GameData_2232590;
extern __int64 GameData_2232598;
extern char GameData_22325a0;
extern __int64 GameData_22325a8;
extern __int64 GameData_22325b0;
extern __int64 GameData_22325b8;
extern int GameData_22325c0;
extern __int64 GameData_22325c8;
extern int GameData_22325d0;
extern __int64 GameData_22325d8;
extern char GameData_22325e0;
extern __int64 GameData_22325e8;
extern __int64 GameData_22325f0;
extern __int64 GameData_22325f8;
extern int GameData_2232600;
extern __int64 GameData_2232608;
extern int GameData_2232610;
extern __int64 GameData_2232618;
extern char GameData_2232620;
extern __int64 GameData_2232628;
extern __int64 GameData_2232630;
extern __int64 GameData_2232638;
extern int GameData_2232640;
extern __int64 GameData_2232648;
extern int GameData_2232650;
extern __int64 GameData_2232658;
extern char GameData_2232660;
extern __int64 GameData_2232668;
extern __int64 GameData_2232670;
extern int GameData_2232680;
extern __int64 GameData_2232688;
extern int GameData_2232690;
extern __int64 GameData_2232698;
extern char GameData_22326a0;
extern __int64 GameData_22326a8;
extern __int64 GameData_22326b0;
extern int GameData_22326c0;
extern __int64 GameData_22326c8;
extern int GameData_22326d0;
extern __int64 GameData_22326d8;
extern char GameData_22326e0;
extern __int64 GameData_22326e8;
extern __int64 GameData_22326f0;
extern __int64 GameData_22326f8;
extern int GameData_2232700;
extern __int64 GameData_2232708;
extern int GameData_2232710;
extern __int64 GameData_2232718;
extern char GameData_2232720;
extern __int64 GameData_2232728;
extern __int64 GameData_2232730;
extern __int64 GameData_2232738;
extern int GameData_2232740;
extern __int64 GameData_2232748;
extern int GameData_2232750;
extern __int64 GameData_2232758;
extern char GameData_2232760;
extern __int64 GameData_2232768;
extern __int64 GameData_2232770;
extern __int64 GameData_2232778;
extern int GameData_2232780;
extern __int64 GameData_2232788;
extern int GameData_2232790;
extern __int64 GameData_2232798;
extern char GameData_22327a0;
extern __int64 GameData_22327a8;
extern __int64 GameData_22327b0;
extern __int64 GameData_22327b8;
extern int GameData_22327c0;
extern __int64 GameData_22327c8;
extern int GameData_22327d0;
extern __int64 GameData_22327d8;
extern char GameData_22327e0;
extern __int64 GameData_22327e8;
extern __int64 GameData_22327f0;
extern __int64 GameData_22327f8;
extern int GameData_2232800;
extern __int64 GameData_2232808;
extern int GameData_2232810;
extern __int64 GameData_2232818;
extern char GameData_2232820;
extern __int64 GameData_2232828;
extern __int64 GameData_2232830;
extern __int64 GameData_2232838;
extern int GameData_2232840;
extern __int64 GameData_2232848;
extern int GameData_2232850;
extern __int64 GameData_2232858;
extern char GameData_2232860;
extern __int64 GameData_2232868;
extern __int64 GameData_2232870;
extern __int64 GameData_2232878;
extern int GameData_2232880;
extern __int64 GameData_2232888;
extern int GameData_2232890;
extern __int64 GameData_2232898;
extern char GameData_22328a0;
extern __int64 GameData_22328a8;
extern __int64 GameData_22328b0;
extern __int64 GameData_22328b8;
extern int GameData_22328c0;
extern __int64 GameData_22328c8;
extern int GameData_22328d0;
extern __int64 GameData_22328d8;
extern char GameData_22328e0;
extern __int64 GameData_22328e8;
extern __int64 GameData_22328f0;
extern __int64 GameData_22328f8;
extern int GameData_2232900;
extern __int64 GameData_2232908;
extern int GameData_2232910;
extern __int64 GameData_2232918;
extern _UNKNOWN GameData_2232920;
extern __int64 GameData_2232928;
extern char GameData_2232930;
extern __int64 GameData_2232938;
extern __int64 GameData_2232940;
extern int GameData_2232950;
extern __int64 GameData_2232958;
extern int GameData_2232960;
extern __int64 GameData_2232968;
extern char GameData_2232970;
extern __int64 GameData_2232978;
extern __int64 GameData_2232980;
extern int GameData_2232990;
extern __int64 GameData_2232998;
extern int GameData_22329a0;
extern __int64 GameData_22329a8;
extern char GameData_22329b0;
extern __int64 GameData_22329b8;
extern __int64 GameData_22329c0;
extern __int64 GameData_22329c8;
extern int GameData_22329d0;
extern __int64 GameData_22329d8;
extern int GameData_22329e0;
extern __int64 GameData_22329e8;
extern char GameData_22329f0;
extern __int64 GameData_22329f8;
extern __int64 GameData_2232a00;
extern __int64 GameData_2232a08;
extern int GameData_2232a10;
extern __int64 GameData_2232a18;
extern int GameData_2232a20;
extern __int64 GameData_2232a28;
extern char GameData_2232a30;
extern __int64 GameData_2232a38;
extern __int64 GameData_2232a40;
extern __int64 GameData_2232a48;
extern int GameData_2232a50;
extern __int64 GameData_2232a58;
extern int GameData_2232a60;
extern __int64 GameData_2232a68;
extern char GameData_2232a70;
extern __int64 GameData_2232a78;
extern __int64 GameData_2232a80;
extern int GameData_2232a90;
extern __int64 GameData_2232a98;
extern int GameData_2232aa0;
extern __int64 GameData_2232aa8;
extern char GameData_2232ab0;
extern __int64 GameData_2232ab8;
extern __int64 GameData_2232ac0;
extern __int64 GameData_2232ac8;
extern int GameData_2232ad0;
extern __int64 GameData_2232ad8;
extern int GameData_2232ae0;
extern __int64 GameData_2232ae8;
extern char GameData_2232af0;
extern __int64 GameData_2232af8;
extern __int64 GameData_2232b00;
extern __int64 GameData_2232b08;
extern int GameData_2232b10;
extern __int64 GameData_2232b18;
extern int GameData_2232b20;
extern __int64 GameData_2232b28;
extern char GameData_2232b30;
extern __int64 GameData_2232b38;
extern __int64 GameData_2232b40;
extern __int64 GameData_2232b48;
extern int GameData_2232b50;
extern __int64 GameData_2232b58;
extern int GameData_2232b60;
extern __int64 GameData_2232b68;
extern char GameData_2232b70;
extern __int64 GameData_2232b78;
extern __int64 GameData_2232b80;
extern __int64 GameData_2232b88;
extern int GameData_2232b90;
extern __int64 GameData_2232b98;
extern int GameData_2232ba0;
extern __int64 GameData_2232ba8;
extern char GameData_2232bb0;
extern __int64 GameData_2232bb8;
extern __int64 GameData_2232bc0;
extern __int64 GameData_2232bc8;
extern int GameData_2232bd0;
extern __int64 GameData_2232bd8;
extern int GameData_2232be0;
extern __int64 GameData_2232be8;
extern char GameData_2232bf0;
extern __int64 GameData_2232bf8;
extern __int64 GameData_2232c00;
extern __int64 GameData_2232c08;
extern int GameData_2232c10;
extern __int64 GameData_2232c18;
extern int GameData_2232c20;
extern __int64 GameData_2232c28;
extern char GameData_2232c30;
extern __int64 GameData_2232c38;
extern __int64 GameData_2232c40;
extern __int64 GameData_2232c48;
extern int GameData_2232c50;
extern __int64 GameData_2232c58;
extern int GameData_2232c60;
extern __int64 GameData_2232c68;
extern char GameData_2232c70;
extern __int64 GameData_2232c78;
extern __int64 GameData_2232c80;
extern __int64 GameData_2232c88;
extern int GameData_2232c90;
extern __int64 GameData_2232c98;
extern int GameData_2232ca0;
extern __int64 GameData_2232ca8;
extern char GameData_2232cb0;
extern __int64 GameData_2232cb8;
extern __int64 GameData_2232cc0;
extern __int64 GameData_2232cc8;
extern int GameData_2232cd0;
extern __int64 GameData_2232cd8;
extern int GameData_2232ce0;
extern __int64 GameData_2232ce8;
extern char GameData_2232cf0;
extern __int64 GameData_2232cf8;
extern __int64 GameData_2232d00;
extern __int64 GameData_2232d08;
extern int GameData_2232d10;
extern __int64 GameData_2232d18;
extern int GameData_2232d20;
extern __int64 GameData_2232d28;
extern char GameData_2232d30;
extern __int64 GameData_2232d38;
extern __int64 GameData_2232d40;
extern __int64 GameData_2232d48;
extern int GameData_2232d50;
extern __int64 GameData_2232d58;
extern int GameData_2232d60;
extern __int64 GameData_2232d68;
extern char GameData_2232d70;
extern __int64 GameData_2232d78;
extern __int64 GameData_2232d80;
extern __int64 GameData_2232d88;
extern int GameData_2232d90;
extern __int64 GameData_2232d98;
extern int GameData_2232da0;
extern __int64 GameData_2232da8;
extern char GameData_2232db0;
extern __int64 GameData_2232db8;
extern __int64 GameData_2232dc0;
extern __int64 GameData_2232dc8;
extern int GameData_2232dd0;
extern __int64 GameData_2232dd8;
extern int GameData_2232de0;
extern __int64 GameData_2232de8;
extern char GameData_2232df0;
extern __int64 GameData_2232df8;
extern __int64 GameData_2232e00;
extern __int64 GameData_2232e08;
extern int GameData_2232e10;
extern __int64 GameData_2232e18;
extern int GameData_2232e20;
extern __int64 GameData_2232e28;
extern char GameData_2232e30;
extern __int64 GameData_2232e38;
extern __int64 GameData_2232e40;
extern int GameData_2232e50;
extern __int64 GameData_2232e58;
extern int GameData_2232e60;
extern __int64 GameData_2232e68;
extern char GameData_2232e70;
extern __int64 GameData_2232e78;
extern __int64 GameData_2232e80;
extern int GameData_2232e90;
extern __int64 GameData_2232e98;
extern int GameData_2232ea0;
extern __int64 GameData_2232ea8;
extern char GameData_2232eb0;
extern __int64 GameData_2232eb8;
extern __int64 GameData_2232ec0;
extern __int64 GameData_2232ec8;
extern int GameData_2232ed0;
extern __int64 GameData_2232ed8;
extern int GameData_2232ee0;
extern __int64 GameData_2232ee8;
extern char GameData_2232ef0;
extern __int64 GameData_2232ef8;
extern __int64 GameData_2232f00;
extern __int64 GameData_2232f08;
extern int GameData_2232f10;
extern __int64 GameData_2232f18;
extern int GameData_2232f20;
extern __int64 GameData_2232f28;
extern char GameData_2232f30;
extern __int64 GameData_2232f38;
extern __int64 GameData_2232f40;
extern __int64 GameData_2232f48;
extern int GameData_2232f50;
extern __int64 GameData_2232f58;
extern int GameData_2232f60;
extern __int64 GameData_2232f68;
extern char GameData_2232f70;
extern __int64 GameData_2232f78;
extern __int64 GameData_2232f80;
extern __int64 GameData_2232f88;
extern int GameData_2232f90;
extern __int64 GameData_2232f98;
extern int GameData_2232fa0;
extern __int64 GameData_2232fa8;
extern char GameData_2232fb0;
extern __int64 GameData_2232fb8;
extern __int64 GameData_2232fc0;
extern int GameData_2232fd0;
extern __int64 GameData_2232fd8;
extern int GameData_2232fe0;
extern __int64 GameData_2232fe8;
extern char GameData_2232ff0;
extern __int64 GameData_2232ff8;
extern __int64 GameData_2233000;
extern __int64 GameData_2233008;
extern int GameData_2233010;
extern __int64 GameData_2233018;
extern int GameData_2233020;
extern __int64 GameData_2233028;
extern char GameData_2233030;
extern __int64 GameData_2233038;
extern __int64 GameData_2233040;
extern __int64 GameData_2233048;
extern int GameData_2233050;
extern __int64 GameData_2233058;
extern int GameData_2233060;
extern __int64 GameData_2233068;
extern char GameData_2233070;
extern __int64 GameData_2233078;
extern __int64 GameData_2233080;
extern __int64 GameData_2233088;
extern int GameData_2233090;
extern __int64 GameData_2233098;
extern int GameData_22330a0;
extern __int64 GameData_22330a8;
extern char GameData_22330b0;
extern __int64 GameData_22330b8;
extern __int64 GameData_22330c0;
extern __int64 GameData_22330c8;
extern int GameData_22330d0;
extern __int64 GameData_22330d8;
extern int GameData_22330e0;
extern __int64 GameData_22330e8;
extern _UNKNOWN GameData_22330f0;
extern char GameData_2233100;
extern __int64 GameData_2233108;
extern __int64 GameData_2233110;
extern __int64 GameData_2233118;
extern int GameData_2233120;
extern __int64 GameData_2233128;
extern int GameData_2233130;
extern __int64 GameData_2233138;
extern char GameData_2233140;
extern __int64 GameData_2233148;
extern __int64 GameData_2233150;
extern __int64 GameData_2233158;
extern int GameData_2233160;
extern __int64 GameData_2233168;
extern int GameData_2233170;
extern __int64 GameData_2233178;
extern char GameData_2233180;
extern __int64 GameData_2233188;
extern __int64 GameData_2233190;
extern __int64 GameData_2233198;
extern int GameData_22331a0;
extern __int64 GameData_22331a8;
extern int GameData_22331b0;
extern __int64 GameData_22331b8;
extern char GameData_22331c0;
extern __int64 GameData_22331c8;
extern __int64 GameData_22331d0;
extern __int64 GameData_22331d8;
extern int GameData_22331e0;
extern __int64 GameData_22331e8;
extern int GameData_22331f0;
extern __int64 GameData_22331f8;
extern char GameData_2233200;
extern __int64 GameData_2233208;
extern __int64 GameData_2233210;
extern __int64 GameData_2233218;
extern int GameData_2233220;
extern __int64 GameData_2233228;
extern int GameData_2233230;
extern __int64 GameData_2233238;
extern char GameData_2233240;
extern __int64 GameData_2233248;
extern __int64 GameData_2233250;
extern __int64 GameData_2233258;
extern int GameData_2233260;
extern __int64 GameData_2233268;
extern int GameData_2233270;
extern __int64 GameData_2233278;
extern char GameData_2233280;
extern __int64 GameData_2233288;
extern __int64 GameData_2233290;
extern __int64 GameData_2233298;
extern int GameData_22332a0;
extern __int64 GameData_22332a8;
extern int GameData_22332b0;
extern __int64 GameData_22332b8;
extern char GameData_22332c0;
extern __int64 GameData_22332c8;
extern __int64 GameData_22332d0;
extern __int64 GameData_22332d8;
extern int GameData_22332e0;
extern __int64 GameData_22332e8;
extern int GameData_22332f0;
extern __int64 GameData_22332f8;
extern char GameData_2233300;
extern __int64 GameData_2233308;
extern __int64 GameData_2233310;
extern __int64 GameData_2233318;
extern int GameData_2233320;
extern __int64 GameData_2233328;
extern int GameData_2233330;
extern __int64 GameData_2233338;
extern char GameData_2233340;
extern __int64 GameData_2233348;
extern __int64 GameData_2233350;
extern __int64 GameData_2233358;
extern int GameData_2233360;
extern __int64 GameData_2233368;
extern int GameData_2233370;
extern __int64 GameData_2233378;
extern char GameData_2233380;
extern __int64 GameData_2233388;
extern __int64 GameData_2233390;
extern __int64 GameData_2233398;
extern int GameData_22333a0;
extern __int64 GameData_22333a8;
extern int GameData_22333b0;
extern __int64 GameData_22333b8;
extern char GameData_22333c0;
extern __int64 GameData_22333c8;
extern __int64 GameData_22333d0;
extern __int64 GameData_22333d8;
extern int GameData_22333e0;
extern __int64 GameData_22333e8;
extern int GameData_22333f0;
extern __int64 GameData_22333f8;
extern char GameData_2233400;
extern __int64 GameData_2233408;
extern __int64 GameData_2233410;
extern __int64 GameData_2233418;
extern int GameData_2233420;
extern __int64 GameData_2233428;
extern int GameData_2233430;
extern __int64 GameData_2233438;
extern char GameData_2233440;
extern __int64 GameData_2233448;
extern __int64 GameData_2233450;
extern __int64 GameData_2233458;
extern int GameData_2233460;
extern __int64 GameData_2233468;
extern int GameData_2233470;
extern __int64 GameData_2233478;
extern char GameData_2233480;
extern __int64 GameData_2233488;
extern __int64 GameData_2233490;
extern __int64 GameData_2233498;
extern int GameData_22334a0;
extern __int64 GameData_22334a8;
extern int GameData_22334b0;
extern __int64 GameData_22334b8;
extern char GameData_22334c0;
extern __int64 GameData_22334c8;
extern __int64 GameData_22334d0;
extern __int64 GameData_22334d8;
extern int GameData_22334e0;
extern __int64 GameData_22334e8;
extern int GameData_22334f0;
extern __int64 GameData_22334f8;
extern char GameData_2233500;
extern __int64 GameData_2233508;
extern __int64 GameData_2233510;
extern __int64 GameData_2233518;
extern int GameData_2233520;
extern __int64 GameData_2233528;
extern int GameData_2233530;
extern __int64 GameData_2233538;
extern char GameData_2233540;
extern __int64 GameData_2233548;
extern __int64 GameData_2233550;
extern __int64 GameData_2233558;
extern int GameData_2233560;
extern __int64 GameData_2233568;
extern int GameData_2233570;
extern __int64 GameData_2233578;
extern _UNKNOWN GameData_2233580;
extern __int64 GameData_2233588;
extern char GameData_2233590;
extern __int64 GameData_2233598;
extern __int64 GameData_22335a0;
extern __int64 GameData_22335a8;
extern int GameData_22335b0;
extern __int64 GameData_22335b8;
extern int GameData_22335c0;
extern __int64 GameData_22335c8;
extern char GameData_22335d0;
extern __int64 GameData_22335d8;
extern __int64 GameData_22335e0;
extern __int64 GameData_22335e8;
extern int GameData_22335f0;
extern __int64 GameData_22335f8;
extern int GameData_2233600;
extern __int64 GameData_2233608;
extern char GameData_2233610;
extern __int64 GameData_2233618;
extern __int64 GameData_2233620;
extern __int64 GameData_2233628;
extern int GameData_2233630;
extern __int64 GameData_2233638;
extern int GameData_2233640;
extern __int64 GameData_2233648;
extern char GameData_2233650;
extern __int64 GameData_2233658;
extern __int64 GameData_2233660;
extern __int64 GameData_2233668;
extern int GameData_2233670;
extern __int64 GameData_2233678;
extern int GameData_2233680;
extern __int64 GameData_2233688;
extern char GameData_2233690;
extern __int64 GameData_2233698;
extern __int64 GameData_22336a0;
extern __int64 GameData_22336a8;
extern int GameData_22336b0;
extern __int64 GameData_22336b8;
extern int GameData_22336c0;
extern __int64 GameData_22336c8;
extern _UNKNOWN GameData_22336d0;
extern __int64 GameData_22336d8;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_10001c0();
__int64 GameRoutine_1000470();
__int64 GameRoutine_1000500();
__int64 GameRoutine_10005c0();
__int64 GameRoutine_1000700();
__int64 GameRoutine_1000880();
__int64 GameRoutine_1000940();
__int64 GameRoutine_10009e0();
__int64 GameRoutine_1000ac0();
__int64 GameRoutine_1000bf0();
__int64 GameRoutine_1000c00();
__int64 GameRoutine_1000c20();
__int64 GameRoutine_1000ce0();
__int64 GameRoutine_1000e70();
__int64 GameRoutine_10017b0();
__int64 GameRoutine_1001800();
__int64 GameRoutine_1001960();
__int64 GameRoutine_1001a00();
__int64 GameRoutine_1001b60();
__int64 GameRoutine_1001c70();
__int64 GameRoutine_1001d00();
__int64 GameRoutine_1001d80();
__int64 GameRoutine_1001f20();
__int64 GameRoutine_1001fd0();
__int64 GameRoutine_1002180();
__int64 GameRoutine_1002210();
__int64 GameRoutine_1002260();
__int64 GameRoutine_1002440();
__int64 GameRoutine_1004880(void);
__int64 GameRoutine_1004ca0(_QWORD);
__int64 GameRoutine_1004e00(_QWORD);
__int64 GameRoutine_1005280(_QWORD);
__int64 GameRoutine_1006bf0(_QWORD);
__int64 GameRoutine_10073a0(void);
__int64 GameRoutine_1007960();
__int64 GameRoutine_1007ac0();
__int64 GameRoutine_1007b70();
__int64 GameRoutine_1007bc0();
__int64 GameRoutine_1007c80();
__int64 GameRoutine_10081e0();
__int64 GameRoutine_1008690();
__int64 GameRoutine_1008700();
__int64 GameRoutine_1008980();
__int64 GameRoutine_1008b50();
__int64 GameRoutine_1008ba0();
__int64 GameRoutine_10092c0();
__int64 GameRoutine_10095c0();
__int64 GameRoutine_1009660();
__int64 GameRoutine_1009770();
__int64 GameRoutine_100b790(_QWORD);
__int64 GameRoutine_1011550(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_1018430(void);
float GameRoutine_10197c0(float*, float*, float*, float*);
void __attribute__((noreturn)) GameRoutine_1023920(void);
_QWORD* GameRoutine_1026f20(_QWORD* result, float*, float*, __int64*, __int64*);
__int64 GameRoutine_102dee0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_102e8f0(void);
__int64* GameRoutine_102e920(__int64* result, _QWORD*);
void __attribute__((noreturn)) GameRoutine_102eb10(void);
__int64* GameRoutine_102eb40(__int64* result, _QWORD*);
void __attribute__((noreturn)) GameRoutine_102ed10(void);
__int64 GameRoutine_102ed40(_QWORD);
__int64 GameRoutine_102ee80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1038a60(__int64 result, _QWORD*, unsigned __int64, __int64,
                            signed __int64);
__int64 GameRoutine_1039020(_QWORD, _QWORD);
__int64 GameRoutine_1039180(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1039b40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_103a200(_QWORD, _QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_112d860(PSEUDO_X8, _QWORD);
__int64 GameRoutine_112daa0(_QWORD);
__int64 GameRoutine_112dfe0(_QWORD, _QWORD);
__int64 GameRoutine_125ea20(_QWORD);
__int64 GameRoutine_137ef10(_QWORD, _QWORD);
__int64 GameRoutine_163fd00(void);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_170b1f0(_QWORD, _QWORD);
__int64 GameRoutine_1741620(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1789cf0(_QWORD, _QWORD);
__int64 GameRoutine_178ab20(_QWORD);
__int64 GameRoutine_18704b0(_QWORD, _QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09bf0(_QWORD, const char*, ...);
__int64 GameRoutine_1a09c00(_QWORD);
__int64 GameRoutine_1a09c10(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09ca0(void);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a060(_QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_20();
__int64 GameRoutine_2647c0(_QWORD, _QWORD);
__int64 GameRoutine_2647d0(_QWORD);
__int64 GameRoutine_2647f0(void);
__int64 GameRoutine_264960(_QWORD, _QWORD);
__int64 GameRoutine_267c10(_QWORD);
__int64 GameRoutine_267c60(void);
__int64 GameRoutine_267d70(void);
__int64 GameRoutine_26b1a0(void);
__int64 GameRoutine_26b320(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_26b740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_26bfa0(_QWORD, _QWORD, _QWORD, double);
__int64 GameRoutine_26c3e0(_QWORD);
__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(void);
__int64 GameRoutine_60abc0(_QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD, long double);
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65a7c0(void);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(_QWORD);
__int64 GameRoutine_667ea0(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_688200(void);
__int64 GameRoutine_6ea9d0(_QWORD);
__int64 GameRoutine_6f4cd0(_QWORD);
__int64 GameRoutine_717fc0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(void);
__int64 GameRoutine_7a8520(void);
__int64 GameRoutine_7f3400(_QWORD, _QWORD);
__int64 GameRoutine_7fa250(void);
__int64 GameRoutine_8224a0(_QWORD);
__int64 GameRoutine_82e5c0(_QWORD);
__int64 GameRoutine_867df0(_QWORD);
__int64 GameRoutine_867e90(void);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a7e4a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_b86fb0(_QWORD, _QWORD);
__int64 GameRoutine_c44560(_QWORD, _QWORD);
__int64 GameRoutine_c72b30(void);
void __attribute__((noreturn)) GameRoutine_cdcc10(void);
__int64 GameRoutine_d5e6c0(_QWORD);
__int64 GameRoutine_d5f370(_QWORD, _QWORD);
__int64 GameRoutine_d5fd80(_QWORD);
__int64 GameRoutine_d799f0(_QWORD);
__int64 GameRoutine_d8ce40(_QWORD);
__int64 GameRoutine_d8cf60(_QWORD, long double);
void __attribute__((noreturn)) GameRoutine_da3110(void);
__int64 GameRoutine_e08050(_QWORD, _QWORD);
__int64 GameRoutine_e08150(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e08260(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_eb6820(_QWORD);
__int64 GameRoutine_eb9230(_QWORD);
__int64 GameRoutine_ec1530(_QWORD);
__int64 GameRoutine_efb6f0(_QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_f7db00(_QWORD*, __int64);
void __attribute__((noreturn)) GameRoutine_f85d00(void);
__int64 GameRoutine_fc3040();
__int64 GameRoutine_fc3110();
__int64 GameRoutine_fc3160();
__int64 GameRoutine_fc3230();
__int64 GameRoutine_fc3370();
__int64 GameRoutine_fc33c0();
__int64 GameRoutine_fc34c0();
__int64 GameRoutine_fc3520();
__int64 GameRoutine_fc37f0();
__int64 GameRoutine_fc3b20(void);
__int64 GameRoutine_fc4180();
__int64 GameRoutine_fc4220();
__int64 GameRoutine_fc42a0();
__int64 GameRoutine_fc43e0();
__int64 GameRoutine_fc44c0();
__int64 GameRoutine_fc44e0();
void __attribute__((noreturn)) GameRoutine_fcf840(_QWORD);
__int64 GameRoutine_fcf860(_QWORD, _QWORD);
__int64 GameRoutine_fe1310();
__int64 GameRoutine_fe14a0();
__int64 GameRoutine_fe1600();
__int64 GameRoutine_fe1680();
__int64 GameRoutine_fe16a0();
__int64 GameRoutine_fe1bd0();
__int64 GameRoutine_fe1d50();
__int64 GameRoutine_fe1d60();
__int64 GameRoutine_fe1f80();
__int64 GameRoutine_fe2100();
__int64 GameRoutine_fe2320();
__int64 GameRoutine_fe2530();
__int64 GameRoutine_fe26b0();
__int64 GameRoutine_fe28e0();
__int64 GameRoutine_fe2a60();
__int64 GameRoutine_fe2ba0();
__int64 GameRoutine_fe2c20();
__int64 GameRoutine_fe2dc0();
__int64 GameRoutine_fe3390();
__int64 GameRoutine_fe3510();
__int64 GameRoutine_fe3690();
__int64 GameRoutine_fe38b0();
__int64 GameRoutine_fe3a40();
__int64 GameRoutine_fe3d50();
__int64 GameRoutine_fe3e00();
__int64 GameRoutine_fe3f80();
__int64 GameRoutine_fe4290();
__int64 GameRoutine_fe4340();
__int64 GameRoutine_fe44c0();
__int64 GameRoutine_fe46e0();
__int64 GameRoutine_fe4900();
__int64 GameRoutine_fe4960();
__int64 GameRoutine_fe4ae0();
__int64 GameRoutine_fe4d10();
__int64 GameRoutine_fe4ea0();
__int64 GameRoutine_fe51b0();
__int64 GameRoutine_fe5260();
__int64 GameRoutine_fe53e0();
__int64 GameRoutine_fe55f0();
__int64 GameRoutine_fe5780();
__int64 GameRoutine_fe57e0();
__int64 GameRoutine_fe5960();
__int64 GameRoutine_fe59c0();
__int64 GameRoutine_fe5b40();
__int64 GameRoutine_fe5d70();
long double GameRoutine_fe79c0(_QWORD);
void __attribute__((noreturn)) GameRoutine_ff78c0(_QWORD);
__int64 GameRoutine_ffd760(int, __int64, __int64, char);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameHr_7fa250(__int64, __int64*, __int64);
__int64 GameRoutine_102dee0_alt1(__int64, __int64,
                                 _QWORD*) __asm__("GameRoutine_102dee0");
__int64 GameRoutine_103a200_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_103a200");
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 dtAlloc();
__int64 dtAllocNavMesh();
__int64 dtAllocNavMeshQuery();
__int64 dtAllocTileCache();
__int64 dtFree(__int64 result);
__int64 dtNavMeshQuery_init(_QWORD*, __int64, int);
__int64 dtNavMesh_init(__int64, __int64*);
__int64 dtTileCache_addTile(__int64, _DWORD*, int, unsigned __int8, _DWORD*);
__int64 dtTileCache_buildNavMeshTile(__int64, unsigned int, __int64);
__int64 dtTileCache_init(int*, __int64*, __int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
int memcmp(__int64, __int64, unsigned __int64);
void GameRoutine_102ee80_alt1(__int64*, __int64*,
                              __int64) __asm__("GameRoutine_102ee80");
void GameRoutine_1038a60_alt1(__int64, _QWORD*, unsigned __int64, __int64,
                              signed __int64) __asm__("GameRoutine_1038a60");
void __attribute__((noreturn))
GameRoutine_1018430_alt1() __asm__("GameRoutine_1018430");
void __attribute__((noreturn))
GameRoutine_102ed10_alt1() __asm__("GameRoutine_102ed10");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_688200_alt1() __asm__("GameRoutine_688200");
void __attribute__((noreturn))
GameRoutine_74e1f0_alt1() __asm__("GameRoutine_74e1f0");
void __attribute__((noreturn))
GameRoutine_f85d00_alt1() __asm__("GameRoutine_f85d00");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_f85860(__int64 a1, __int64 a2);
void GameHr_f979a0(_QWORD* a1, __int64 a2);
__int64 GameHr_fe79c0(__int64 result);
void GameHr_ffc180(_QWORD* a1, _QWORD* a2, __int64 a3);
__int64 GameHr_10182e0(__int64* a1, __int64 a2);
bool GameHr_1027180(__int64 a1, __int64 a2);
__int64 GameHr_1029b30(__int64 result);
void GameHr_102c400(_QWORD* a1);
void GameHr_102ed40(__int64* a1);
void GameHr_102f080(__int64* a1, _QWORD* a2);
void GameHr_1039180(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4);
_QWORD* GameRoutine_6680e0_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_6680e0");
__int64* GameRoutine_e08050_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_e08050");
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64* game_fcf860(__int64*, __int64*);
__int64 GameHr_1006bf0(__int64 result);
__int64 GameHr_a7e4a0(__int64, __int64, _QWORD*, __int64, int);
__int64 GameHr_eb6820(_DWORD*);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_867df0_alt1() __asm__("GameRoutine_867df0");
__int64 GameRoutine_ec1530_alt1() __asm__("GameRoutine_ec1530");
__int64 GameRoutine_efb6f0_alt1(__int64, __int64,
                                _QWORD*) __asm__("GameRoutine_efb6f0");
__int64 GameSubquestData_125ea20();
__int64 ProcChallengeBegin_fc3b20(__int64);
__int64 game_10001c0(__int64, __int64);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
__int64 game_telop_1741620(__int64, __int64*, char);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool GameRoutine_1011550_alt1(unsigned __int8*, int,
                              char) __asm__("GameRoutine_1011550");
char* GameRoutine_60a020_alt2(char*, const char*) __asm__("GameRoutine_60a020");
char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_ProcGameSkipView_instance_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
int __cxa_guard_acquire(__int64);
int sprintf(__int64, const char*, ...);
unsigned __int64 strlen(const char*);
void GameHr_e08260(__int64, __int64*, unsigned __int16*);
void GameRoutine_7f3400_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7f3400");
void GameRoutine_867e90_alt1() __asm__("GameRoutine_867e90");
void GameRoutine_98f140_alt1(__int64*, _QWORD*) __asm__("GameRoutine_98f140");
void GameRoutine_a8c0c0_alt1(__int64) __asm__("GameRoutine_a8c0c0");
void QuestIconList_1039b40(__int64, __int64, __int64, __int64, __int64, __int64,
                           __int64);
void __attribute__((noreturn))
GameRoutine_1023920_alt1() __asm__("GameRoutine_1023920");
void __attribute__((noreturn))
GameRoutine_102e8f0_alt1() __asm__("GameRoutine_102e8f0");
void __attribute__((noreturn))
GameRoutine_102eb10_alt1() __asm__("GameRoutine_102eb10");
void __attribute__((noreturn))
GameRoutine_65c760_alt1() __asm__("GameRoutine_65c760");
void __attribute__((noreturn))
GameRoutine_98f290_alt1() __asm__("GameRoutine_98f290");
void __attribute__((noreturn))
GameRoutine_cdcc10_alt1() __asm__("GameRoutine_cdcc10");
void __attribute__((noreturn))
GameRoutine_da3110_alt1() __asm__("GameRoutine_da3110");
void __attribute__((noreturn))
GameRoutine_fcf840_alt1() __asm__("GameRoutine_fcf840");
void __attribute__((noreturn))
GameRoutine_ff78c0_alt1() __asm__("GameRoutine_ff78c0");
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void game_hub_e08150(__int64, __int64, const char**);
__int64 GameHr_f7fd20(__int64 a1, __int64 a2, int* a3);
void GameHr_fc3230(__int64 a1);
__int64 GameHr_fcf140(__int64 a1, __int64* a2);
char* GameHr_ff6d70(__int64* a1, char* a2, char* a3);
void GameHr_ff7060(__int64 a1, __int64 a2);
__int64** GameHr_ff7280(__int64*** a1, unsigned __int8* a2, __int64** a3);
void GameHr_ff7420(unsigned __int8** a1, __int64* a2);
void GameHr_10005c0(__int64 a1, __int64 a2);
__int64 GameHr_1006a90(__int64 a1);
void GameHr_1006d40(__int64 a1);
void GameHr_10073a0(__int64 a1);
void GameHr_1008980(__int64 a1);
void GameHr_100b790(__int64 a1);
void GameHr_100ba20(__int64 a1);
void GameHr_1017900(__int64* a1, __int64* a2);
void GameHr_10215d0(__int64 a1);
__int64 GameHr_1021e80(__int64 a1, unsigned __int8* a2, _DWORD* a3);
_QWORD* GameHr_1025a10(_QWORD* a1, _QWORD* a2);
float GameHr_1025be0(__int64 a1, __int64 a2, char a3);
void GameHr_102e7c0(__int64 a1);
void GameHr_102e920(__int64* a1, _QWORD* a2);
void GameHr_102eb40(__int64* a1, _QWORD* a2);
void GameHr_102ee80(__int64* a1, __int64* a2, __int64 a3);
__int64 GameHr_102f560(__int64* a1, __int64 a2);
__int64 GameHr_102f7e0(__int64* a1, __int64 a2);
void GameHr_1038a60(__int64 a1, _QWORD* a2, unsigned __int64 a3, __int64 a4,
                    signed __int64 a5);
void GameHr_1039020(__int64* a1, __int64* a2);
__int64 GameHr_103a200(__int64 result, __int64 a2);

_QWORD* GameHr_f7e2a0(__int64 a1, __int64* a2)
{
  __int64 v2;
  char v3;
  _QWORD* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  _QWORD* result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  char* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;

  v2 = *a2;
  v3 = *((_BYTE*)a2 + 8);
  *(_BYTE*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 8) = v3;
  *(_QWORD*)a1 = v2;
  *(_BYTE*)(a1 + 16) = 0;
  v6 = (_QWORD*)(a1 + 16);
  if (*((_BYTE*)a2 + 64) == 1) {
    GameRoutine_f7db00(v6, (__int64)(a2 + 2));
    *(_BYTE*)(a1 + 64) = 1;
  }
  v7 = *((_DWORD*)a2 + 18);
  *(_BYTE*)(a1 + 80) = 0;
  *(_BYTE*)(a1 + 112) = 0;
  *(_DWORD*)(a1 + 72) = v7;
  if (*((_BYTE*)a2 + 112) == 1) {
    *(_BYTE*)(a1 + 80) = *((_BYTE*)a2 + 80);
    if ((a2[11] & 1) != 0) {
      GameRoutine_60a270(a1 + 88, a2[13], a2[12]);
    }
    else {
      v8 = a2[11];
      v9 = a2[13];
      *(_QWORD*)(a1 + 96) = a2[12];
      *(_QWORD*)(a1 + 104) = v9;
      *(_QWORD*)(a1 + 88) = v8;
    }
    *(_BYTE*)(a1 + 112) = 1;
  }
  *(_BYTE*)(a1 + 120) = 0;
  result = (_QWORD*)(a1 + 120);
  *(_BYTE*)(a1 + 144) = 0;
  if (*((_BYTE*)a2 + 144) == 1) {
    if ((a2[15] & 1) != 0) {
      result = (_QWORD*)GameRoutine_60a270(result, a2[17], a2[16]);
    }
    else {
      v11 = a2[15];
      v12 = a2[17];
      *(_QWORD*)(a1 + 128) = a2[16];
      *(_QWORD*)(a1 + 136) = v12;
      *result = v11;
    }
    *(_BYTE*)(a1 + 144) = 1;
  }
  *(_QWORD*)(a1 + 152) = a2[19];
  if ((a2[20] & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(a1 + 160, a2[22], a2[21]);
  }
  else {
    v13 = a2[20];
    v14 = a2[22];
    *(_QWORD*)(a1 + 168) = a2[21];
    *(_QWORD*)(a1 + 176) = v14;
    *(_QWORD*)(a1 + 160) = v13;
  }
  v15 = a2[23];
  v16 = a2[24];
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 184) = v15;
  *(_QWORD*)(a1 + 192) = v16;
  v17 = (char*)a2[25];
  v18 = (char*)a2[26];
  v19 = v18 - v17;
  if (v18 != v17) {
    if (0xAAAAAAAAAAAAAAABLL * (v19 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(result);
    }
    result = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v18 - v17,
                                         16, 0);
    v20 = result;
    *(_QWORD*)(a1 + 200) = result;
    *(_QWORD*)(a1 + 208) = result;
    *(_QWORD*)(a1 + 216) = (char*)result + v19;
    do {
      if ((*v17 & 1) != 0) {
        result = (_QWORD*)GameRoutine_60a270(v20, *((_QWORD*)v17 + 2),
                                             *((_QWORD*)v17 + 1));
      }
      else {
        v21 = *(_QWORD*)v17;
        v22 = *((_QWORD*)v17 + 2);
        v20[1] = *((_QWORD*)v17 + 1);
        v20[2] = v22;
        *v20 = v21;
      }
      v17 += 24;
      v20 += 3;
    } while (v17 != v18);
    *(_QWORD*)(a1 + 208) = v20;
  }
  *(_WORD*)(a1 + 224) = *((_WORD*)a2 + 112);
  return result;
}

__int64 GameHr_f7fd20(__int64 a1, __int64 a2, int* a3)
{
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8 explicit;
  int* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  _BYTE* v22;
  bool v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  struct {
    __int64 v53;
    __int64 v54;
  } v53_;

  nn_os_LockMutex((__int64)GameData_212df28);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      208, 16, 0);
  v8 = *a3;
  v9 = v7;
  v10 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               40LL);
  v11 = *(_QWORD*)(v10 + 24);
  v53_.v53 = *(_QWORD*)(v10 + 16);
  v53_.v54 = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    GameHr_a7e4a0(v7, a1, &v53_.v53, a2, v8);
    std___1___shared_weak_count___release_weak(v11);
  }
  else {
    GameHr_a7e4a0(v7, a1, &v53_.v53, a2, v8);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v13 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
    *v13 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release((__int64)GameData_212df10);
  }
  v14 = *v13;
  v15 = *(_QWORD*)(a1 + 504);
  v16 = *(_QWORD*)(a1 + 512);
  v17 = v16;
  LODWORD(v53_.v53) = v14;
  v53_.v54 = v9;
  while (v17 != v15) {
    v18 = *(_DWORD*)(v17 - 16);
    v17 -= 16;
    if (v18 == v14) {
      if ((*(_BYTE*)(v9 + 16) & 1) != 0) {
        goto LABEL_23;
      }
      goto LABEL_17;
    }
  }
  if (v15 == v16 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v15) <= 0x6F) {
    v19 = fw_memory_HeapManager_Allocate(*v6, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v19;
    *(_QWORD*)(a1 + 512) = v19;
    *(_QWORD*)(a1 + 520) = v19 + 112;
    if (v16 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v20, v15);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), &v53_.v53);
  if ((*(_BYTE*)(v9 + 16) & 1) == 0) {
  LABEL_17:
    *(_BYTE*)(v9 + 16) = 1;
    *(_BYTE*)(v9 + 17) &= ~2u;
    *(_BYTE*)(v9 + 18) &= ~2u;
    *(_BYTE*)(v9 + 19) &= ~2u;
    *(_BYTE*)(v9 + 20) &= ~2u;
    v21 = *(_BYTE**)(v9 + 8);
    v21[632] = 0;
    v21[664] = 0;
    v21[696] = 0;
    v21[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
    v22 = *(_BYTE**)(v9 + 8);
    v23 = v22[300] == 3 && v22[301] == 3;
    if (v23 || v22[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 72LL))(v9);
    }
  }
LABEL_23:
  v24 = *(__int64**)(a1 + 536);
  v25 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v24 >= v25) {
    v27 = *(_QWORD*)(a1 + 528);
    v28 = (char*)v24 - v27;
    v29 = ((__int64)v24 - v27) >> 3;
    v30 = v29 + 1;
    if ((unsigned __int64)(v29 + 1) >> 61 != 0) {
      goto LABEL_58;
    }
    v31 = v25 - v27;
    if (v31 >> 2 > v30) {
      v30 = v31 >> 2;
    }
    if ((unsigned __int64)v31 >= 0x7FFFFFFFFFFFFFF8LL) {
      v32 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v32 = v30;
    }
    if (v32 != 0) {
      if (v32 >> 61 != 0) {
        goto LABEL_59;
      }
      v33 = fw_memory_HeapManager_Allocate(*v6, 8 * v32, 16, 0);
    }
    else {
      v33 = 0;
    }
    v34 = v33 + 8 * v32;
    v35 = (unsigned __int64)v24 - v27;
    v36 = (__int64)&v28[v33 + -8 * v29];
    *(_QWORD*)&v28[v33] = v9;
    v26 = (__int64)&v28[v33 + 8];
    memcpy(v36, v27, v35);
    *(_QWORD*)(a1 + 528) = v36;
    *(_QWORD*)(a1 + 536) = v26;
    *(_QWORD*)(a1 + 544) = v34;
    if (v27 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v37, v27);
    }
  }
  else {
    *v24 = v9;
    v26 = (__int64)(v24 + 1);
  }
  *(_QWORD*)(a1 + 536) = v26;
  v38 = *(__int64**)(a1 + 560);
  v39 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v38 < v39) {
    *v38 = v9;
    v40 = (__int64)(v38 + 1);
    goto LABEL_55;
  }
  v41 = *(_QWORD*)(a1 + 552);
  v42 = (char*)v38 - v41;
  v43 = ((__int64)v38 - v41) >> 3;
  v44 = v43 + 1;
  if ((unsigned __int64)(v43 + 1) >> 61 != 0) {
  LABEL_58:
    GameRoutine_98f290_alt1();
  }
  v45 = v39 - v41;
  if (v45 >> 2 > v44) {
    v44 = v45 >> 2;
  }
  if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFF8LL) {
    v46 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v46 = v44;
  }
  if (v46 != 0) {
    if (v46 >> 61 == 0) {
      v47 = fw_memory_HeapManager_Allocate(*v6, 8 * v46, 16, 0);
      goto LABEL_51;
    }
  LABEL_59:
    GameRoutine_60a210_alt1();
  }
  v47 = 0;
LABEL_51:
  v48 = v47 + 8 * v46;
  v49 = (unsigned __int64)v38 - v41;
  v50 = (__int64)&v42[v47 + -8 * v43];
  *(_QWORD*)&v42[v47] = v9;
  v40 = (__int64)&v42[v47 + 8];
  memcpy(v50, v41, v49);
  *(_QWORD*)(a1 + 552) = v50;
  *(_QWORD*)(a1 + 560) = v40;
  *(_QWORD*)(a1 + 568) = v48;
  if (v41 != 0) {
    v51 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v51, v41);
  }
LABEL_55:
  *(_QWORD*)(a1 + 560) = v40;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex((__int64)GameData_212df28);
  return v9;
}

void GameHr_f85860(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  __int64* v3;
  _BYTE* v5;
  _BYTE* v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _BYTE* v20;
  _BYTE* v21;
  bool v22;
  __int64 v23;
  _BYTE* v24;
  char v25;
  unsigned __int64 v26;
  __int64* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v3 = *(__int64**)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  if ((unsigned __int64)v3 < v2) {
    v3[1] = 0;
    v3[2] = 0;
    *v3 = 0;
    v5 = *(_BYTE**)a2;
    v6 = *(_BYTE**)(a2 + 8);
    v7 = (unsigned __int64)&v6[-*(_QWORD*)a2];
    if (v6 == *(_BYTE**)a2) {
    LABEL_7:
      v10 = v3 + 3;
      goto LABEL_38;
    }
    if ((v7 & 0x8000000000000000LL) == 0) {
      v8 =
          fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         (__int64)&v6[-*(_QWORD*)a2], 16, 0);
      *v3 = v8;
      v3[1] = v8;
      v3[2] = v8 + v7;
      do {
        *(_BYTE*)v8 = *v5;
        *(_BYTE*)(v8 + 1) = v5[1];
        *(_BYTE*)(v8 + 2) = v5[2];
        v9 = v5[3];
        v5 += 4;
        *(_BYTE*)(v8 + 3) = v9;
        v8 += 4;
      } while (v5 != v6);
      v3[1] = v8;
      goto LABEL_7;
    }
  LABEL_39:
    GameRoutine_74e1f0_alt1();
  }
  v11 = *(__int64**)a1;
  v12 = (__int64)v3 - *(_QWORD*)a1;
  v13 = 1 - 0x5555555555555555LL * (v12 >> 3);
  if (v13 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_f85d00_alt1();
  }
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  v32 = v12 >> 3;
  v15 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v2 - (_QWORD)v11) >> 3);
  if (2 * v15 > v13) {
    v13 = 2 * v15;
  }
  if (v15 >= 0x555555555555555LL) {
    v16 = 0xAAAAAAAAAAAAAAALL;
  }
  else {
    v16 = v13;
  }
  if (v16 != 0) {
    if (v16 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_60a210_alt1();
    }
    v17 = a2;
    v18 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24 * v16, 16, 0);
    a2 = v17;
  }
  else {
    v18 = 0;
  }
  v33 = v12;
  v19 = (_QWORD*)(v18 + v12);
  v20 = *(_BYTE**)a2;
  v21 = *(_BYTE**)(a2 + 8);
  v23 = (__int64)&v21[-*(_QWORD*)a2];
  v22 = v21 == *(_BYTE**)a2;
  v19[1] = 0;
  v19[2] = 0;
  *v19 = 0;
  if (!v22) {
    if (v23 < 0) {
      goto LABEL_39;
    }
    v24 = (_BYTE*)fw_memory_HeapManager_Allocate(*v14, v23, 16, 0);
    *v19 = v24;
    v19[2] = &v24[v23];
    do {
      *v24 = *v20;
      v24[1] = v20[1];
      v24[2] = v20[2];
      v25 = v20[3];
      v20 += 4;
      v24[3] = v25;
      v24 += 4;
    } while (v20 != v21);
    v19[1] = v24;
  }
  v10 = v19 + 3;
  v26 = v18 + 24 * v16;
  if (v11 != v3) {
    v27 = v11;
    v28 = (_QWORD*)((char*)&v3[-v32] - (char*)v11 + v18 + 8);
    do {
      *v28 = 0;
      v28[1] = 0;
      *(v28 - 1) = *v27;
      *v28 = v27[1];
      v28[1] = v27[2];
      v27[1] = 0;
      v27[2] = 0;
      *v27 = 0;
      v27 += 3;
      v28 += 3;
    } while (v27 != v3);
    do {
      v29 = *v11;
      if (*v11 != 0) {
        v11[1] = v29;
        if (*(_QWORD*)(*v14 + 200) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(*v14 + v30, v29);
      }
      v11 += 3;
    } while (v11 != v3);
    v11 = *(__int64**)a1;
  }
  *(_QWORD*)a1 = (char*)v19 - v33;
  *(_QWORD*)(a1 + 8) = v10;
  *(_QWORD*)(a1 + 16) = v26;
  if (v11 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*v14 + v31, (__int64)v11);
  }
LABEL_38:
  *(_QWORD*)(a1 + 8) = v10;
}

bool GameHr_f875c0(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char v9;
  char v10;
  int v11;
  unsigned __int64 v12;
  bool v13;
  char v14;
  unsigned __int16* v15;
  _QWORD* v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  char v27;
  unsigned __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  char v31;
  char* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64** v38;
  __int64* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64* v43;
  __int64 v44;
  _QWORD* v45;
  _QWORD* v46;
  _QWORD* v47;
  char v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  char v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  char* v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64* v65;
  __int64 v66;
  char v67;
  char v69;
  char* v70;
  char v71;
  __int64 v72;
  unsigned __int64 v73;
  unsigned __int16* v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int16* v77;
  __int64 v78;
  unsigned __int64 v79;
  char* v80;
  __int64 v81;
  _QWORD* v82;
  __int64 v83;
  __int64* v84;
  __int64* v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  char* v89;
  char v90[12];

  v5 = GameData_212bf68;
  do {
    v6 = *(unsigned __int8*)a3;
    v7 = (v6 & 1) != 0 ? a3[1] : v6 >> 1;
    if (v7 == 0) {
      break;
    }
    if ((v6 & 1) != 0) {
      GameRoutine_60a270(&v78, a3[2], a3[1]);
    }
    else {
      v8 = a3[1];
      v78 = *a3;
      v79 = v8;
      v80 = (char*)a3[2];
    }
    GameRoutine_112d860((void*)&v75, &v78);
    v9 = *(_BYTE*)(a1 + 73);
    v10 = v75;
    *(_BYTE*)(a1 + 73) = 0;
    if ((v10 & 1) != 0) {
      GameRoutine_60a270(&v72, v77, v76);
    }
    else {
      v72 = v75;
      v73 = v76;
      v74 = v77;
    }
    *(_WORD*)((char*)&v87 + 1) = 12079;
    v11 = v72 & 1;
    v12 = (unsigned __int64)(unsigned __int8)v72 >> 1;
    if (v11 != 0) {
      v12 = v73;
    }
    if (v12 >= 2) {
      v15 = v74;
      if (v11 == 0) {
        v15 = (unsigned __int16*)((char*)&v72 + 1);
      }
      v13 = *v15 == *(unsigned __int16*)((char*)&v87 + 1);
      v14 = 1;
    }
    else {
      v13 = false;
      v14 = 1;
      if (v12 == 0) {
        goto LABEL_98;
      }
    }
    if (!v13) {
      v71 = v9;
      v16 = (_QWORD*)v5;
      GameRoutine_112daa0(&v72);
      v85 = nullptr;
      v86 = 0;
      v84 = nullptr;
      v17 = GameRoutine_112dfe0(&v72, &v84);
      v18 = v84;
      v19 = v85;
      v82 = nullptr;
      v83 = 0;
      v20 = (char*)v85 - (char*)v84;
      v81 = 0;
      if (v85 == v84) {
        v5 = (__int64)v16;
        v29 = v84;
        if (v84 != nullptr) {
          goto LABEL_85;
        }
        goto LABEL_97;
      }
      if (0xAAAAAAAAAAAAAAABLL * (v20 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
        GameRoutine_64aa00(v17);
      }
      v21 = GameRoutine_651b90(*v16, (char*)v85 - (char*)v84, 16, 0);
      v22 = v21 + v20;
      v23 = v21;
      v81 = v21;
      v24 = (_QWORD*)v21;
      v83 = v22;
      do {
        if ((*(_BYTE*)v18 & 1) != 0) {
          GameRoutine_60a270(v24, v18[2], v18[1]);
        }
        else {
          v25 = *v18;
          v26 = v18[2];
          v24[1] = v18[1];
          v24[2] = v26;
          *v24 = v25;
        }
        v18 += 3;
        v24 += 3;
      } while (v18 != v19);
      v27 = *(_BYTE*)v23;
      v82 = v24;
      if ((v27 & 1) != 0) {
        GameRoutine_60a270(&v87, *(_QWORD*)(v23 + 16), *(_QWORD*)(v23 + 8));
      }
      else {
        v28 = *(_QWORD*)(v23 + 8);
        v87 = *(_QWORD*)v23;
        v88 = v28;
        v89 = *(char**)(v23 + 16);
      }
      v30 = *(_QWORD*)(a1 + 128);
      v31 = v87;
      v14 = 1;
      if (v30 != 0 && *(_QWORD*)(a1 + 144) != 0) {
        if ((v87 & 1) != 0) {
          v32 = v89;
        }
        else {
          v32 = (char*)&v87 + 1;
        }
        if ((v87 & 1) != 0) {
          v33 = v88;
        }
        else {
          v33 = (unsigned __int64)(unsigned __int8)v87 >> 1;
        }
        v70 = v32;
        v34 = GameRoutine_1a09ca0();
        v35 = v30 - 1;
        v36 = v34;
        if ((v30 & (v30 - 1)) != 0) {
          v37 = v34;
          if (v34 >= v30) {
            v37 = v34 % v30;
          }
        }
        else {
          v37 = v34 & v35;
        }
        v38 = *(__int64***)(*(_QWORD*)(a1 + 120) + 8 * v37);
        if (v38 != nullptr) {
          v69 = v31;
          v39 = *v38;
          if (*v38 != nullptr) {
            if ((v30 & v35) != 0) {
              while (1) {
                v40 = v39[1];
                if (v40 == v36) {
                  v41 = *((unsigned __int8*)v39 + 16);
                  v42 = v39[3];
                  if ((v41 & 1) == 0) {
                    v42 = v41 >> 1;
                  }
                  if (v42 == v33) {
                    v43 = (v41 & 1) != 0 ? (__int64*)v39[4]
                                         : (__int64*)((char*)v39 + 17);
                    if ((unsigned int)GameRoutine_1a09cf0(v43, v70) == 0) {
                      v5 = (__int64)v16;
                      goto LABEL_145;
                    }
                  }
                }
                else {
                  if (v40 >= v30) {
                    v40 %= v30;
                  }
                  if (v40 != v37) {
                    goto LABEL_63;
                  }
                }
                v39 = (__int64*)*v39;
                if (v39 == nullptr) {
                  goto LABEL_63;
                }
              }
            }
            v5 = (__int64)v16;
            while (1) {
              v62 = v39[1];
              if (v62 == v36) {
                v63 = *((unsigned __int8*)v39 + 16);
                v64 = v39[3];
                if ((v63 & 1) == 0) {
                  v64 = v63 >> 1;
                }
                if (v64 == v33) {
                  v65 = (v63 & 1) != 0 ? (__int64*)v39[4]
                                       : (__int64*)((char*)v39 + 17);
                  if ((unsigned int)GameRoutine_1a09cf0(v65, v70) == 0) {
                  LABEL_145:
                    v66 = v39[10];
                    v90[0] = v71 ^ 1;
                    if (v66 == 0) {
                      GameRoutine_60a310();
                    }
                    v67 = (*(__int64 (**)(__int64, __int64, __int64*, char*))(
                        *(_QWORD*)v66 + 48LL))(v66, a1, &v81, v90);
                    v31 = v87;
                    v14 = v67;
                  LABEL_66:
                    if ((v31 & 1) != 0 && v89 != nullptr) {
                      v44 = 56;
                      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                        v44 = 128;
                      }
                      GameRoutine_1a0a4e0(*(_QWORD*)v5 + v44, (_QWORD)(v89));
                    }
                    v45 = (_QWORD*)v81;
                    if (v81 != 0) {
                      v46 = v82;
                      if ((_QWORD*)v81 == v82) {
                        goto LABEL_81;
                      }
                      v47 = v82;
                      do {
                        v48 = *((_BYTE*)v47 - 24);
                        v47 -= 3;
                        if ((v48 & 1) != 0 && *(v46 - 1) != 0) {
                          v49 = 56;
                          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                            v49 = 128;
                          }
                          GameRoutine_1a0a4e0(*(_QWORD*)v5 + v49,
                                              (_QWORD)(*(v46 - 1)));
                        }
                        v46 = v47;
                      } while (v47 != v45);
                      v82 = v45;
                      if (v81 != 0) {
                      LABEL_81:
                        v50 = 56;
                        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                          v50 = 128;
                        }
                        GameRoutine_1a0a4e0(*(_QWORD*)v5 + v50, (_QWORD)(v81));
                      }
                      v29 = v84;
                      if (v84 != nullptr) {
                      LABEL_85:
                        v51 = v85;
                        if (v29 == v85) {
                          goto LABEL_94;
                        }
                        v52 = v85;
                        do {
                          v53 = *((_BYTE*)v52 - 24);
                          v52 -= 3;
                          if ((v53 & 1) != 0 && *(v51 - 1) != 0) {
                            v54 = 56;
                            if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                              v54 = 128;
                            }
                            GameRoutine_1a0a4e0(*(_QWORD*)v5 + v54,
                                                (_QWORD)(*(v51 - 1)));
                          }
                          v51 = v52;
                        } while (v52 != v29);
                        v85 = v29;
                        if (v84 != nullptr) {
                        LABEL_94:
                          v55 = 56;
                          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                            v55 = 128;
                          }
                          GameRoutine_1a0a4e0(*(_QWORD*)v5 + v55,
                                              (_QWORD)(v84));
                        }
                      }
                    }
                    else {
                      v29 = v84;
                      if (v84 != nullptr) {
                        goto LABEL_85;
                      }
                    }
                  LABEL_97:
                    v11 = v72 & 1;
                    goto LABEL_98;
                  }
                }
              }
              else if ((v62 & v35) != v37) {
                goto LABEL_144;
              }
              v39 = (__int64*)*v39;
              if (v39 == nullptr) {
              LABEL_144:
                v31 = v69;
                v14 = 1;
                goto LABEL_66;
              }
            }
          }
        LABEL_63:
          v31 = v69;
        }
        v14 = 1;
      }
      v5 = (__int64)v16;
      goto LABEL_66;
    }
  LABEL_98:
    if (v11 != 0 && v74 != nullptr) {
      v56 = 56;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v56 = 128;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v5 + v56, (_QWORD)(v74));
    }
    if ((v14 & 1) == 0) {
      *(_BYTE*)(a1 + 73) = 1;
      if ((v75 & 1) != 0) {
        goto LABEL_119;
      }
      goto LABEL_123;
    }
    if (a3 == &v78) {
      goto LABEL_118;
    }
    if ((*(_BYTE*)a3 & 1) != 0) {
      if ((v78 & 1) != 0) {
        v58 = v80;
      }
      else {
        v58 = (char*)&v78 + 1;
      }
      if ((v78 & 1) != 0) {
        v59 = v79;
      }
      else {
        v59 = (unsigned __int64)(unsigned __int8)v78 >> 1;
      }
      GameRoutine_64dde0(a3, v58, v59);
    LABEL_118:
      if ((v75 & 1) != 0) {
        goto LABEL_119;
      }
      goto LABEL_123;
    }
    if ((v78 & 1) != 0) {
      GameRoutine_64df20(a3, v80, v79);
      if ((v75 & 1) != 0) {
      LABEL_119:
        if (v77 != nullptr) {
          v60 = 56;
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v60 = 128;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v5 + v60, (_QWORD)(v77));
        }
      }
    }
    else {
      v57 = v79;
      *a3 = v78;
      a3[1] = v57;
      a3[2] = (__int64)v80;
      if ((v75 & 1) != 0) {
        goto LABEL_119;
      }
    }
  LABEL_123:
    if ((v78 & 1) != 0 && v80 != nullptr) {
      v61 = 56;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v61 = 128;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v5 + v61, (_QWORD)(v80));
    }
  } while ((v14 & 1) != 0);
  return v7 == 0;
}

void GameHr_f979a0(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  v2 = a1[7];
  v3 = (_QWORD*)a1[8];
  if ((_QWORD*)v2 == v3) {
  LABEL_18:
    v9 = a1[9];
    if ((unsigned __int64)v3 >= v9) {
      v11 = (unsigned __int64)v3 - v2;
      v12 = ((__int64)v3 - v2) >> 3;
      v13 = v12 + 1;
      if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
        GameRoutine_688200_alt1();
      }
      v14 = v9 - v2;
      v15 = fw_memory_g_heap_manager_ptr;
      if (v14 >> 2 > v13) {
        v13 = v14 >> 2;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v13;
      }
      if (v16 != 0) {
        if (v16 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v17 = a2;
        v18 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
        a2 = v17;
      }
      else {
        v18 = 0;
      }
      v19 = v18 + 8 * v16;
      v20 = v18 + v11 - 8 * v12;
      *(_QWORD*)(v18 + v11) = a2;
      v10 = v18 + v11 + 8;
      memcpy(v20, v2, v11);
      a1[7] = v20;
      a1[8] = v10;
      a1[9] = v19;
      if (v2 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v21, v2);
      }
    }
    else {
      *v3 = a2;
      v10 = (__int64)(v3 + 1);
    }
    a1[8] = v10;
    return;
  }
  v5 = (unsigned __int64)v3 - v2 - 8;
  v6 = (_QWORD*)a1[7];
  if ((~(_BYTE)v5 & 0x18) == 0) {
  LABEL_6:
    if (v5 >= 0x18) {
      v6 += 2;
      while (1) {
        if (*(v6 - 2) == a2) {
          if (v3 != v6 - 2) {
            return;
          }
          goto LABEL_18;
        }
        if (*(v6 - 1) == a2) {
          --v6;
          goto LABEL_17;
        }
        if (*v6 == a2) {
          goto LABEL_17;
        }
        if (v6[1] == a2) {
          break;
        }
        v8 = v6 + 2;
        v6 += 4;
        if (v8 == v3) {
          goto LABEL_18;
        }
      }
      if (v3 != v6 + 1) {
        return;
      }
    }
    goto LABEL_18;
  }
  v7 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
  v6 = (_QWORD*)a1[7];
  while (*v6 != a2) {
    ++v6;
    if (--v7 == 0) {
      goto LABEL_6;
    }
  }
LABEL_17:
  if (v3 == v6) {
    goto LABEL_18;
  }
}

void GameHr_fa85f0(__int64 a1, __int64* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  _DWORD* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;

  v2 = *(unsigned __int8*)a2;
  v3 = a2[1];
  v4 = v2 >> 1;
  if ((v2 & 1) != 0) {
    v4 = a2[1];
  }
  if (v4 != 4) {
    goto LABEL_7;
  }
  v5 = (_DWORD*)a2[2];
  if ((v2 & 1) == 0) {
    v5 = (_DWORD*)((char*)a2 + 1);
  }
  if (*v5 != 1819047278) {
  LABEL_7:
    v6 = GameData_21c9608;
    v7 = (__int64*)(GameData_21c9608 + 1072);
    if (*(_BYTE*)(GameData_21c9608 + 1096) == 1) {
      if (v7 != a2) {
        if ((*(_BYTE*)v7 & 1) != 0) {
          if ((v2 & 1) != 0) {
            v12 = (char*)a2[2];
          }
          else {
            v12 = (char*)a2 + 1;
          }
          GameRoutine_64dde0(v7, v12, v4);
        }
        else if ((v2 & 1) != 0) {
          GameRoutine_64df20(v7, a2[2], v3);
        }
        else {
          v8 = *a2;
          v9 = a2[2];
          *(_QWORD*)(GameData_21c9608 + 1080) = a2[1];
          v7[2] = v9;
          *v7 = v8;
        }
      }
    }
    else {
      if ((v2 & 1) != 0) {
        GameRoutine_60a270(v7, a2[2], v3);
      }
      else {
        v10 = *a2;
        v11 = a2[2];
        *(_QWORD*)(GameData_21c9608 + 1080) = a2[1];
        v7[2] = v11;
        *v7 = v10;
      }
      *(_BYTE*)(v6 + 1096) = 1;
    }
  }
}

__int64 GameHr_fc28c0(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_222c228,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_222c228) != 0) {
    GameData_222be30 = 0;
    GameData_222be38 = (__int64)GameRoutine_fc3040;
    GameData_222be28 = 13;
    GameData_222be68 = 13;
    GameData_222bea8 = 13;
    GameData_222bee8 = 13;
    GameData_222bf28 = 13;
    GameData_222bf68 = 13;
    GameData_222bfa8 = 13;
    GameData_222c048 = 1;
    GameData_222c068 = 13;
    GameData_222be70 = 0;
    GameData_222be78 = (__int64)GameRoutine_fc3110;
    GameData_222c128 = 13;
    GameData_222be40 = 0;
    GameData_222be48 = 0;
    GameData_222be50 = 0;
    GameData_222be58 = 0;
    GameData_222be60 = 0;
    GameData_222be80 = 0;
    GameData_222beb0 = 0;
    GameData_222beb8 = (__int64)GameRoutine_fc3160;
    GameData_222be88 = 0;
    GameData_222be90 = 0;
    GameData_222be98 = 0;
    GameData_222bea0 = 0;
    GameData_222bec0 = 0;
    GameData_222bec8 = 0;
    GameData_222bed0 = 0;
    GameData_222bed8 = 0;
    GameData_222bee0 = 0;
    GameData_222bef0 = 0;
    GameData_222bef8 = (__int64)GameRoutine_fc3230;
    GameData_222bf00 = 0;
    GameData_222bf08 = 0;
    GameData_222bf10 = 0;
    GameData_222bf18 = 0;
    GameData_222bf20 = 0;
    GameData_222bf40 = 0;
    GameData_222bf48 = 0;
    GameData_222bf50 = 0;
    GameData_222bf58 = 0;
    GameData_222bf30 = 0;
    GameData_222bf38 = (__int64)GameRoutine_fc3370;
    GameData_222bf60 = 0;
    GameData_222bf80 = 0;
    GameData_222bf88 = 0;
    GameData_222bf90 = 0;
    GameData_222bf98 = 0;
    GameData_222bfa0 = 0;
    GameData_222bfc0 = 0;
    GameData_222bfc8 = 0;
    GameData_222bfd0 = 0;
    GameData_222bf70 = 0;
    GameData_222bf78 = (__int64)GameRoutine_fc33c0;
    GameData_222bfd8 = 0;
    GameData_222bfe0 = 0;
    GameData_222bfe8 = 12;
    GameData_222bff8 = 0;
    GameData_222c000 = 0;
    GameData_222bff0 = 0;
    GameData_222c010 = 0;
    GameData_222c018 = 0;
    GameData_222c020 = 0;
    GameData_222c028 = 2;
    GameData_222bfb0 = 0;
    GameData_222bfb8 = (__int64)GameRoutine_fc34c0;
    GameData_222c030 = 0;
    GameData_222c038 = 0;
    GameData_222c040 = 0;
    GameData_222c050 = 0;
    GameData_222c058 = 0;
    GameData_222c060 = 0;
    GameData_222c070 = 0;
    GameData_222c078 = (__int64)GameRoutine_fc3520;
    GameData_222c080 = 0;
    GameData_222c088 = 0;
    GameData_222c008 = 3;
    GameData_222c090 = 0;
    GameData_222c098 = 0;
    GameData_222c0a0 = 0;
    GameData_222c0a8 = 12;
    GameData_222c0c0 = 0;
    GameData_222c0b8 = 0;
    GameData_222c0b0 = 0;
    GameData_222c0c8 = 3;
    GameData_222c0d0 = 0;
    GameData_222c0d8 = 0;
    GameData_222c0e0 = 0;
    GameData_222c0e8 = 2;
    GameData_222c0f0 = 0;
    GameData_222c0f8 = 0;
    GameData_222c100 = 0;
    GameData_222c108 = 2;
    GameData_222c110 = 0;
    GameData_222c118 = 0;
    GameData_222c120 = 0;
    GameData_222c130 = 0;
    GameData_222c138 = (__int64)GameRoutine_fc37f0;
    GameData_222c140 = 0;
    GameData_222c148 = 0;
    GameData_222c150 = 0;
    GameData_222c158 = 0;
    GameData_222c160 = 0;
    GameData_222c168 = 12;
    GameData_222c180 = 0;
    GameData_222c178 = 0;
    GameData_222c170 = 0;
    GameData_222c188 = 3;
    GameData_222c190 = 0;
    GameData_222c198 = 0;
    GameData_222c1a0 = 0;
    GameData_222c1a8 = 2;
    GameData_222c1c0 = 0;
    GameData_222c1b8 = 0;
    GameData_222c1b0 = 0;
    GameData_222c1c8 = 3;
    GameData_222c1d0 = 0;
    GameData_222c1d8 = 0;
    GameData_222c1e0 = 0;
    GameData_222c1e8 = 0;
    GameData_222c210 = 0;
    GameData_222c218 = 0;
    GameData_222c220 = 0;
    GameData_222c208 = 0;
    GameData_222c200 = 0;
    GameData_222c1f8 = 0;
    GameData_222c1f0 = 0;
    GameRoutine_1a09fe0(&GameData_222c228);
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 184, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0();
  *(_QWORD*)(v4 + 152) = 0;
  v6 = (_QWORD*)(v4 + 152);
  *(_QWORD*)(v4 + 160) = 0;
  *(_QWORD*)(v4 + 168) = 0;
  *(_QWORD*)v4 = GameData_1ffd260;
  if ((_QWORD*)(v4 + 152) != a2) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      GameRoutine_64df20(v6, a2[2], a2[1]);
    }
    else {
      v7 = a2[1];
      *v6 = *a2;
      *(_QWORD*)(v4 + 160) = v7;
      *(_QWORD*)(v4 + 168) = a2[2];
    }
  }
  *(_BYTE*)(v4 + 176) = 0;
  *(_QWORD*)v4 = GameData_1ffd190;
  return GameRoutine_657850(v4, &GameData_222be28, "ProcChallengeBegin", 1, a1);
}

__int64 GameHr_fc2c40(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_222c730,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_222c730) != 0) {
    GameData_222c230 = 13;
    GameData_222c238 = 0;
    GameData_222c240 = (__int64)GameRoutine_fc4180;
    GameData_222c248 = 0;
    GameData_222c250 = 0;
    GameData_222c258 = 0;
    GameData_222c260 = 0;
    GameData_222c268 = 0;
    GameData_222c270 = 3;
    GameData_222c298 = 0;
    GameData_222c2a0 = 0;
    GameData_222c2a8 = 0;
    GameData_222c278 = 0;
    GameData_222c280 = 0;
    GameData_222c288 = 0;
    GameData_222c290 = 0;
    GameData_222c2b0 = 19;
    GameData_222c2d0 = 500;
    GameData_222c2d8 = 0;
    GameData_222c2e0 = 0;
    GameData_222c2e8 = 0;
    GameData_222c2f0 = 10;
    GameData_222c2b8 = 0;
    GameData_222c2c0 = (__int64)GameData_212d060[0];
    GameData_222c3b8 = 0;
    GameData_222c3c0 = (__int64)GameRoutine_fc42a0;
    GameData_222c338 = 0;
    GameData_222c340 = (__int64)GameRoutine_fc4220;
    GameData_222c4f0 = 19;
    GameData_222c510 = 500;
    GameData_222c5a0 = 500;
    GameData_222c310 = 0;
    GameData_222c318 = 0;
    GameData_222c320 = 0;
    GameData_222c328 = 0;
    GameData_222c330 = 13;
    GameData_222c348 = 0;
    GameData_222c350 = 0;
    GameData_222c358 = 0;
    GameData_222c360 = 0;
    GameData_222c368 = 0;
    GameData_222c380 = 0;
    GameData_222c388 = 0;
    GameData_222c378 = 0;
    GameData_222c390 = 1;
    GameData_222c398 = 0;
    GameData_222c3a0 = 0;
    GameData_222c3a8 = 0;
    GameData_222c3b0 = 13;
    GameData_222c3c8 = 0;
    GameData_222c3d0 = 0;
    GameData_222c3d8 = 0;
    GameData_222c3e0 = 0;
    GameData_222c3e8 = 0;
    GameData_222c3f0 = 13;
    GameData_222c408 = 0;
    GameData_222c410 = 0;
    GameData_222c418 = 0;
    GameData_222c420 = 0;
    GameData_222c428 = 0;
    GameData_222c430 = 13;
    GameData_222c438 = 0;
    GameData_222c448 = 0;
    GameData_222c450 = 0;
    GameData_222c458 = 0;
    GameData_222c460 = 0;
    GameData_222c468 = 0;
    GameData_222c470 = 13;
    GameData_222c478 = 0;
    GameData_222c488 = 0;
    GameData_222c490 = 0;
    GameData_222c498 = 0;
    GameData_222c4a0 = 0;
    GameData_222c4a8 = 0;
    GameData_222c4b0 = 3;
    GameData_222c4d8 = 0;
    GameData_222c4e0 = 0;
    GameData_222c3f8 = 0;
    GameData_222c400 = (__int64)GameRoutine_fc43e0;
    GameData_222c370 = 2;
    GameData_222c4e8 = 0;
    GameData_222c4d0 = 0;
    GameData_222c4c8 = 0;
    GameData_222c4c0 = 0;
    GameData_222c4b8 = 0;
    GameData_222c4f8 = 0;
    GameData_222c500 = (__int64)GameData_212d060[0];
    GameData_222c518 = 0;
    GameData_222c440 = (__int64)GameRoutine_fc44c0;
    GameData_222c520 = 0;
    GameData_222c528 = 0;
    GameData_222c530 = 10;
    GameData_222c538 = 0;
    GameData_222c550 = 0;
    GameData_222c558 = 0;
    GameData_222c560 = 0;
    GameData_222c568 = 0;
    GameData_222c570 = 4;
    GameData_222c480 = (__int64)GameRoutine_fc44e0;
    GameData_222c588 = 0;
    GameData_222c580 = 0;
    GameData_222c578 = 0;
    GameData_222c590 = 1;
    GameData_222c598 = 0;
    GameData_222c5a8 = 0;
    GameData_222c5b0 = 12;
    GameData_222c5b8 = 0;
    GameData_222c5c0 = 0;
    GameData_222c5c8 = 0;
    GameData_222c5d0 = 3;
    GameData_222c2f8 = 0;
    GameData_222c300 = (__int64)GameData_212c720;
    GameData_222c540 = (__int64)GameData_212c720;
    GameData_222c5d8 = 0;
    GameData_222c5e0 = 0;
    GameData_222c5e8 = 0;
    GameData_222c5f0 = 2;
    GameData_222c608 = 0;
    GameData_222c600 = 0;
    GameData_222c5f8 = 0;
    GameData_222c610 = 2;
    GameData_222c618 = 0;
    GameData_222c620 = 0;
    GameData_222c628 = 0;
    GameData_222c630 = 13;
    GameData_222c638 = 0;
    GameData_222c640 = (__int64)GameRoutine_fc44e0;
    GameData_222c648 = 0;
    GameData_222c650 = 0;
    GameData_222c658 = 0;
    GameData_222c660 = 0;
    GameData_222c668 = 0;
    GameData_222c670 = 12;
    GameData_222c688 = 0;
    GameData_222c680 = 0;
    GameData_222c678 = 0;
    GameData_222c690 = 3;
    GameData_222c698 = 0;
    GameData_222c6a0 = 0;
    GameData_222c6a8 = 0;
    GameData_222c6b0 = 2;
    GameData_222c6c8 = 0;
    GameData_222c6c0 = 0;
    GameData_222c6b8 = 0;
    GameData_222c6d0 = 3;
    GameData_222c6d8 = 0;
    GameData_222c6e0 = 0;
    GameData_222c6e8 = 0;
    GameData_222c6f0 = 0;
    GameData_222c718 = 0;
    GameData_222c720 = 0;
    GameData_222c728 = 0;
    GameData_222c710 = 0;
    GameData_222c708 = 0;
    GameData_222c700 = 0;
    GameData_222c6f8 = 0;
    GameRoutine_1a09fe0(&GameData_222c730);
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 184, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0();
  *(_QWORD*)(v4 + 152) = 0;
  v6 = (_QWORD*)(v4 + 152);
  *(_QWORD*)(v4 + 160) = 0;
  *(_QWORD*)(v4 + 168) = 0;
  *(_QWORD*)v4 = GameData_1ffd260;
  if ((_QWORD*)(v4 + 152) != a2) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      GameRoutine_64df20(v6, a2[2], a2[1]);
    }
    else {
      v7 = a2[1];
      *v6 = *a2;
      *(_QWORD*)(v4 + 160) = v7;
      *(_QWORD*)(v4 + 168) = a2[2];
    }
  }
  *(_BYTE*)(v4 + 176) = 0;
  *(_QWORD*)v4 = GameData_1ffd190;
  return GameRoutine_657850(v4, &GameData_222c230, "ProcChallengeBegin", 1, a1);
}

void GameHr_fc3230(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[2];
    char* v11;
  } v10_;
  char v12[512];

  v2 = ProcChallengeBegin_fc3b20(a1);
  if (v2 != 0) {
    v3 = *(unsigned __int8*)(v2 + 56);
  }
  else {
    v3 = 0;
  }
  sprintf((__int64)v12, "MID_LGV_SQID_DIT_Challenge%d_m01", v3);
  v4 = *(_QWORD*)GameData_212dbf0[0];
  v5 = strlen(v12);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v10_.v10[1] = v6;
    v10_.v11 = v7;
    v10_.v10[0] = v8 | 1;
  }
  else {
    LOBYTE(v10_.v10[0]) = 2 * v5;
    v7 = (char*)v10_.v10 + 1;
    if (v5 == 0) {
      goto LABEL_13;
    }
  }
  memcpy((__int64)v7, (__int64)v12, v6);
LABEL_13:
  v7[v6] = 0;
  GameRoutine_efb6f0_alt1(v4, a1, v10_.v10);
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v10_.v11);
  }
}

__int64 GameHr_fcf140(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  void (*v18)(__int64*, int*);
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int i;
  __int64* v35;
  __int64 v36;
  _BYTE* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  bool v60;
  char* v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  _BYTE* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v81;
  __int64 v82;
  int v83;
  int v84;
  struct {
    __int64 v85;
    unsigned __int64 v86;
    _BYTE* v87;
  } v85_;
  struct {
    __int64 v88;
    unsigned __int64 v89;
    _BYTE* v90;
    char* v91;
    char* v92;
    unsigned __int64 v93;
  } v88_;
  int v94;

  v2 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(a1 + 16);
  v81 = (__int64*)(a1 + 8);
  while (v5 != v2) {
    v6 = *(_QWORD*)(v5 - 24);
    v7 = v5;
    if (v6 != 0) {
      *(_QWORD*)(v5 - 16) = v6;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8, v6);
    }
    if ((*(_BYTE*)(v5 - 48) & 1) != 0) {
      v9 = *(_QWORD*)(v5 - 32);
      if (v9 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v10, v9);
      }
    }
    v5 -= 72;
    if ((*(_BYTE*)(v7 - 72) & 1) != 0) {
      v11 = *(_QWORD*)(v7 - 56);
      if (v11 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v12, v11);
      }
    }
  }
  *(_QWORD*)(a1 + 16) = v2;
  LODWORD(v85_.v85) = 0;
  (*(void (**)(__int64*, __int64*))(*a2 + 16))(a2, &v85_.v85);
  v13 = *((int*)a2 + 5);
  v14 = a2[1];
  *((_DWORD*)a2 + 5) = v13 + 2;
  v15 = *(unsigned __int8*)(v14 + v13 + 1);
  *((_DWORD*)a2 + 5) = v13 + 3;
  v83 = v15 | (*(unsigned __int8*)(v14 + v13 + 2) << 8);
  if (v83 != 0) {
    v16 = 0;
    v82 = a1;
    while (1) {
      v84 = v16;
      v17 = *a2;
      v88_.v92 = nullptr;
      v88_.v93 = 0;
      v88_.v90 = nullptr;
      v88_.v91 = nullptr;
      v88_.v88 = 0;
      v88_.v89 = 0;
      v85_.v86 = 0;
      v85_.v87 = nullptr;
      v18 = *(void (**)(__int64*, int*))(v17 + 16);
      v85_.v85 = 0;
      v94 = 0;
      v18(a2, &v94);
      v19 = *((int*)a2 + 5);
      v20 = a2[1];
      v21 = v19 + 2;
      v22 = v20 + v19;
      v23 = v19 + 3;
      *((_DWORD*)a2 + 5) = v21;
      LODWORD(v22) = *(unsigned __int8*)(v22 + 1);
      *((_DWORD*)a2 + 5) = v23;
      v24 = v22 | (*(unsigned __int8*)(v20 + v21) << 8);
      if (v24 != 0) {
        *((_DWORD*)a2 + 5) = v23 + v24;
        GameRoutine_60a020_alt1((__int64)&v85_.v85, (const char*)(v20 + v23));
      }
      else if ((v85_.v85 & 1) != 0) {
        *v85_.v87 = 0;
        v85_.v86 = 0;
      }
      else {
        LOWORD(v85_.v85) = 0;
      }
      v25 = *((int*)a2 + 5);
      v26 = a2[1];
      v27 = v25 + 1;
      *((_DWORD*)a2 + 5) = v25 + 1;
      v28 = *(unsigned __int8*)(v26 + v25);
      v29 = v25 + 2;
      *((_DWORD*)a2 + 5) = v29;
      v30 = v28 | (*(unsigned __int8*)(v26 + v27) << 8);
      if (v30 != 0) {
        *((_DWORD*)a2 + 5) = v29 + v30;
        GameRoutine_60a020_alt1((__int64)&v88_.v88, (const char*)(v26 + v29));
      }
      else if ((v88_.v88 & 1) != 0) {
        *v88_.v90 = 0;
        v88_.v89 = 0;
      }
      else {
        LOWORD(v88_.v88) = 0;
      }
      v31 = *((int*)a2 + 5);
      v32 = a2[1];
      *((_DWORD*)a2 + 5) = v31 + 1;
      v33 = *(unsigned __int8*)(v32 + v31);
      *((_DWORD*)a2 + 5) = v31 + 2;
      for (i = v33 | (*(unsigned __int8*)(v32 + v31 + 1) << 8); i != 0;
           v88_.v92 = (char*)v38) {
        v39 = *a2;
        v94 = 0;
        (*(void (**)(__int64*, int*))(v39 + 16))(a2, &v94);
        v40 = *((int*)a2 + 5);
        v42 = *a2;
        v41 = a2[1];
        *((_DWORD*)a2 + 5) = v40 + 2;
        v43 = *(unsigned __int8*)(v41 + v40 + 1);
        *((_DWORD*)a2 + 5) = v40 + 3;
        v44 = v43 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 2) << 8);
        *((_DWORD*)a2 + 5) = v40 + 4;
        v45 =
            v44 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 3) << 16);
        *((_DWORD*)a2 + 5) = v40 + 5;
        v46 =
            v45 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 4) << 24);
        *((_DWORD*)a2 + 5) = v40 + 6;
        v47 =
            v46 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 5) << 32);
        *((_DWORD*)a2 + 5) = v40 + 7;
        v48 =
            v47 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 6) << 40);
        *((_DWORD*)a2 + 5) = v40 + 8;
        v49 =
            v48 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 7) << 48);
        *((_DWORD*)a2 + 5) = v40 + 9;
        v50 =
            v49 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 8) << 56);
        *((_DWORD*)a2 + 5) = v40 + 10;
        v51 = *(unsigned __int8*)(v41 + v40 + 9);
        *((_DWORD*)a2 + 5) = v40 + 11;
        v52 =
            v51 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 10) << 8);
        *((_DWORD*)a2 + 5) = v40 + 12;
        v53 =
            v52 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 11) << 16);
        *((_DWORD*)a2 + 5) = v40 + 13;
        v54 =
            v53 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 12) << 24);
        *((_DWORD*)a2 + 5) = v40 + 14;
        v55 =
            v54 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 13) << 32);
        *((_DWORD*)a2 + 5) = v40 + 15;
        v56 =
            v55 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 14) << 40);
        *((_DWORD*)a2 + 5) = v40 + 16;
        v57 =
            v56 | ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 15) << 48);
        *((_DWORD*)a2 + 5) = v40 + 17;
        v58 = *(unsigned __int8*)(v41 + v40 + 16);
        *((_DWORD*)a2 + 5) = v40 + 18;
        v59 = v57 | (v58 << 56);
        v60 = *(_BYTE*)(v41 + v40 + 17) != 0;
        (*(void (**)(__int64*, _QWORD))(v42 + 24))(a2, 0);
        v61 = v88_.v92;
        if ((unsigned __int64)v88_.v92 < v88_.v93) {
          *(_QWORD*)v88_.v92 = v50;
          *((_QWORD*)v61 + 1) = v59;
          v38 = (__int64)(v61 + 24);
          v61[16] = v60;
        }
        else {
          v62 = (__int64)v88_.v91;
          v63 = v88_.v92 - v88_.v91;
          v64 = 0xAAAAAAAAAAAAAAABLL * ((v88_.v92 - v88_.v91) >> 3) + 1;
          if (v64 > 0xAAAAAAAAAAAAAAALL) {
            goto LABEL_79;
          }
          if (0x5555555555555556LL *
                  ((__int64)(v88_.v93 - (_QWORD)v88_.v91) >> 3) >
              v64) {
            v64 = 0x5555555555555556LL *
                  ((__int64)(v88_.v93 - (_QWORD)v88_.v91) >> 3);
          }
          if (0xAAAAAAAAAAAAAAABLL *
                  ((__int64)(v88_.v93 - (_QWORD)v88_.v91) >> 3) >=
              0x555555555555555LL) {
            v65 = 0xAAAAAAAAAAAAAAALL;
          }
          else {
            v65 = v64;
          }
          if (v65 != 0) {
            if (v65 > 0xAAAAAAAAAAAAAAALL) {
              GameRoutine_60a210_alt1();
            }
            v66 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                 24 * v65, 16, 0);
          }
          else {
            v66 = 0;
          }
          v67 = v66 + v63;
          *(_QWORD*)v67 = v50;
          *(_QWORD*)(v67 + 8) = v59;
          *(_BYTE*)(v67 + 16) = v60;
          v38 = v66 + v63 + 24;
          memcpy(v66, v62, v63);
          v88_.v91 = (char*)v66;
          v88_.v92 = (char*)v38;
          v88_.v93 = v66 + 24 * v65;
          if (v62 != 0) {
            v68 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v68 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v62);
          }
        }
        --i;
      }
      (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
      v35 = *(__int64**)(v82 + 16);
      if ((unsigned __int64)v35 < *(_QWORD*)(v82 + 24)) {
        break;
      }
      v69 = game_fcf860(v81, &v85_.v85);
    LABEL_64:
      v76 = (__int64)v88_.v91;
      *(_QWORD*)(v82 + 16) = v69;
      if (v76 != 0) {
        v88_.v92 = (char*)v76;
        v77 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v77 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v76);
      }
      if ((v88_.v88 & 1) != 0 && v88_.v90 != nullptr) {
        v78 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v78 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, (__int64)v88_.v90);
      }
      if ((v85_.v85 & 1) != 0 && v85_.v87 != nullptr) {
        v79 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v79 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, (__int64)v85_.v87);
      }
      v16 = v84 + 1;
      if (v84 + 1 == v83) {
        return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
      }
    }
    if ((v85_.v85 & 1) != 0) {
      fw_text_String_CopyTerminated(*(__int64**)(v82 + 16), (__int64)v85_.v87,
                                    v85_.v86);
      if ((v88_.v88 & 1) != 0) {
        goto LABEL_38;
      }
    }
    else {
      v36 = v85_.v85;
      v37 = v85_.v87;
      v35[1] = v85_.v86;
      v35[2] = (__int64)v37;
      *v35 = v36;
      if ((v88_.v88 & 1) != 0) {
      LABEL_38:
        fw_text_String_CopyTerminated(v35 + 3, (__int64)v88_.v90, v88_.v89);
      LABEL_60:
        v35[7] = 0;
        v35[8] = 0;
        v35[6] = 0;
        v72 = (__int64)v88_.v91;
        v73 = v88_.v92 - v88_.v91;
        if (v88_.v92 != v88_.v91) {
          if (0xAAAAAAAAAAAAAAABLL * (v73 >> 3) > 0xAAAAAAAAAAAAAAALL) {
          LABEL_79:
            GameRoutine_fcf840_alt1();
          }
          v74 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v88_.v92 - v88_.v91, 16,
              0);
          v75 = v74 + v73;
          v35[6] = v74;
          v35[7] = v74;
          v35[8] = v74 + v73;
          memcpy(v74, v72, v73 - 7);
          v35[7] = v75;
        }
        v69 = v35 + 9;
        goto LABEL_64;
      }
    }
    v70 = v88_.v88;
    v71 = v88_.v90;
    v35[4] = v88_.v89;
    v35[5] = (__int64)v71;
    v35[3] = v70;
    goto LABEL_60;
  }
  return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
}

__int64 GameHr_fdb330(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22304e0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_22304e0) != 0) {
    GameData_22300c0 = 1;
    GameData_222ffe8 = 0;
    GameData_222fff0 = (__int64)GameRoutine_fe1310;
    GameData_222ffe0 = 13;
    GameData_2230020 = 13;
    GameData_22300e0 = 13;
    GameData_2230120 = 13;
    GameData_2230160 = 13;
    GameData_2230220 = 13;
    GameData_22302e0 = 13;
    GameData_22303a0 = 13;
    GameData_22300e8 = 0;
    GameData_22300f0 = (__int64)GameRoutine_fe1600;
    GameData_2230028 = 0;
    GameData_2230030 = (__int64)GameRoutine_fe14a0;
    GameData_222ffa0 = 2;
    GameData_222ffc8 = 0;
    GameData_222ffd0 = 0;
    GameData_222ffd8 = 0;
    GameData_222ffa8 = 0;
    GameData_222ffb0 = 0;
    GameData_2230128 = 0;
    GameData_2230130 = (__int64)GameRoutine_fe1680;
    GameData_222ffb8 = 0;
    GameData_222ffc0 = 0;
    GameData_222fff8 = 0;
    GameData_2230000 = 0;
    GameData_2230008 = 0;
    GameData_2230010 = 0;
    GameData_2230018 = 0;
    GameData_2230038 = 0;
    GameData_2230040 = 0;
    GameData_2230168 = 0;
    GameData_2230170 = (__int64)GameRoutine_fe16a0;
    GameData_2230048 = 0;
    GameData_2230050 = 0;
    GameData_2230058 = 0;
    GameData_2230060 = 12;
    GameData_2230070 = 0;
    GameData_2230078 = 0;
    GameData_2230068 = 0;
    GameData_2230080 = 5;
    GameData_2230088 = 0;
    GameData_2230090 = 0;
    GameData_2230230 = (__int64)GameRoutine_fe1bd0;
    GameData_2230098 = 0;
    GameData_22300a0 = 2;
    GameData_22300a8 = 0;
    GameData_22300b0 = 0;
    GameData_22300b8 = 0;
    GameData_22300c8 = 0;
    GameData_22300d0 = 0;
    GameData_22300d8 = 0;
    GameData_22300f8 = 0;
    GameData_2230100 = 0;
    GameData_2230108 = 0;
    GameData_22302c0 = 3;
    GameData_2230110 = 0;
    GameData_2230118 = 0;
    GameData_2230138 = 0;
    GameData_2230140 = 0;
    GameData_2230148 = 0;
    GameData_2230150 = 0;
    GameData_2230158 = 0;
    GameData_2230178 = 0;
    GameData_2230180 = 0;
    GameData_22302f0 = (__int64)GameRoutine_fe1d50;
    GameData_2230188 = 0;
    GameData_2230190 = 0;
    GameData_2230198 = 0;
    GameData_22301a0 = 12;
    GameData_22301b8 = 0;
    GameData_22301b0 = 0;
    GameData_22301a8 = 0;
    GameData_22301c0 = 5;
    GameData_22301c8 = 0;
    GameData_22301d0 = 0;
    GameData_22301d8 = 0;
    GameData_22301e0 = 2;
    GameData_22301e8 = 0;
    GameData_22301f0 = 0;
    GameData_22301f8 = 0;
    GameData_2230200 = 2;
    GameData_2230208 = 0;
    GameData_2230210 = 0;
    GameData_2230218 = 0;
    GameData_2230228 = 0;
    GameData_2230238 = 0;
    GameData_2230240 = 0;
    GameData_2230248 = 0;
    GameData_2230250 = 0;
    GameData_2230258 = 0;
    GameData_2230260 = 12;
    GameData_2230278 = 0;
    GameData_2230270 = 0;
    GameData_2230268 = 0;
    GameData_2230280 = 5;
    GameData_2230288 = 0;
    GameData_2230290 = 0;
    GameData_2230298 = 0;
    GameData_22302a0 = 2;
    GameData_22302a8 = 0;
    GameData_22302b0 = 0;
    GameData_22302b8 = 0;
    GameData_22302c8 = 0;
    GameData_22302d0 = 0;
    GameData_22302d8 = 0;
    GameData_22302e8 = 0;
    GameData_22302f8 = 0;
    GameData_2230300 = 0;
    GameData_2230308 = 0;
    GameData_2230310 = 0;
    GameData_2230318 = 0;
    GameData_2230320 = 12;
    GameData_2230338 = 0;
    GameData_2230330 = 0;
    GameData_2230328 = 0;
    GameData_2230340 = 5;
    GameData_2230348 = 0;
    GameData_2230350 = 0;
    GameData_2230358 = 0;
    GameData_2230360 = 2;
    GameData_2230378 = 0;
    GameData_2230370 = 0;
    GameData_2230368 = 0;
    GameData_2230380 = 4;
    GameData_2230388 = 0;
    GameData_2230390 = 0;
    GameData_2230398 = 0;
    GameData_22303a8 = 0;
    GameData_22303b0 = (__int64)GameRoutine_fe1d60;
    GameData_22303b8 = 0;
    GameData_22303c0 = 0;
    GameData_22303c8 = 0;
    GameData_22303d0 = 0;
    GameData_22303d8 = 0;
    GameData_22303e0 = 12;
    GameData_22303f8 = 0;
    GameData_22303f0 = 0;
    GameData_22303e8 = 0;
    GameData_2230400 = 5;
    GameData_2230408 = 0;
    GameData_2230410 = 0;
    GameData_2230418 = 0;
    GameData_2230420 = 2;
    GameData_2230438 = 0;
    GameData_2230430 = 0;
    GameData_2230428 = 0;
    GameData_2230440 = 5;
    GameData_2230448 = 0;
    GameData_2230450 = 0;
    GameData_2230458 = 0;
    GameData_2230460 = 2;
    GameData_2230478 = 0;
    GameData_2230470 = 0;
    GameData_2230468 = 0;
    GameData_2230480 = 5;
    GameData_2230488 = 0;
    GameData_2230490 = 0;
    GameData_2230498 = 0;
    GameData_22304a0 = 0;
    GameData_22304c8 = 0;
    GameData_22304d0 = 0;
    GameData_22304d8 = 0;
    GameData_22304c0 = 0;
    GameData_22304b8 = 0;
    GameData_22304b0 = 0;
    GameData_22304a8 = 0;
    GameRoutine_1a09fe0(&GameData_22304e0);
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 176, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0();
  v6 = *a2;
  *(_BYTE*)(v4 + 160) = 0;
  *(_BYTE*)(v4 + 168) = 0;
  *(_BYTE*)(v4 + 172) = 0;
  *(_DWORD*)(v4 + 164) = 1;
  GameData_222e468 = 0;
  *(_QWORD*)(v4 + 152) = v6;
  *(_QWORD*)v4 = GameData_1ffe0d8;
  return GameRoutine_657850(v4, &GameData_222ffa0, "FabSeqProc", 1, a1);
}

__int64 GameHr_fdb730(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22308a8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_22308a8) != 0) {
    GameData_2230608 = 1;
    GameData_2230530 = 0;
    GameData_2230538 = (__int64)GameRoutine_fe1f80;
    GameData_2230528 = 13;
    GameData_2230568 = 13;
    GameData_2230628 = 13;
    GameData_22306e8 = 13;
    GameData_22307a8 = 13;
    GameData_22304e8 = 2;
    GameData_2230630 = 0;
    GameData_2230638 = (__int64)GameRoutine_fe2320;
    GameData_2230570 = 0;
    GameData_2230578 = (__int64)GameRoutine_fe2100;
    GameData_2230510 = 0;
    GameData_2230518 = 0;
    GameData_2230520 = 0;
    GameData_22304f0 = 0;
    GameData_22304f8 = 0;
    GameData_2230500 = 0;
    GameData_2230508 = 0;
    GameData_2230540 = 0;
    GameData_22306f8 = (__int64)GameRoutine_fe2530;
    GameData_2230548 = 0;
    GameData_2230550 = 0;
    GameData_2230558 = 0;
    GameData_2230560 = 0;
    GameData_2230580 = 0;
    GameData_2230588 = 0;
    GameData_2230590 = 0;
    GameData_2230598 = 0;
    GameData_22305a0 = 0;
    GameData_22305a8 = 12;
    GameData_22305b8 = 0;
    GameData_22305c0 = 0;
    GameData_22305b0 = 0;
    GameData_22305c8 = 4;
    GameData_22305d0 = 0;
    GameData_22305d8 = 0;
    GameData_22305e0 = 0;
    GameData_22305e8 = 2;
    GameData_22305f0 = 0;
    GameData_22305f8 = 0;
    GameData_2230600 = 0;
    GameData_2230610 = 0;
    GameData_2230618 = 0;
    GameData_2230620 = 0;
    GameData_2230640 = 0;
    GameData_2230648 = 0;
    GameData_2230650 = 0;
    GameData_2230658 = 0;
    GameData_2230660 = 0;
    GameData_2230668 = 12;
    GameData_2230678 = 0;
    GameData_2230680 = 0;
    GameData_2230670 = 0;
    GameData_2230688 = 4;
    GameData_2230690 = 0;
    GameData_2230698 = 0;
    GameData_22306a0 = 0;
    GameData_22306a8 = 2;
    GameData_22306b0 = 0;
    GameData_22306b8 = 0;
    GameData_22306c0 = 0;
    GameData_22306c8 = 2;
    GameData_22306d0 = 0;
    GameData_22306d8 = 0;
    GameData_22306e0 = 0;
    GameData_22306f0 = 0;
    GameData_2230700 = 0;
    GameData_2230708 = 0;
    GameData_2230710 = 0;
    GameData_2230718 = 0;
    GameData_2230720 = 0;
    GameData_2230728 = 12;
    GameData_2230740 = 0;
    GameData_2230738 = 0;
    GameData_2230730 = 0;
    GameData_2230748 = 4;
    GameData_2230750 = 0;
    GameData_2230758 = 0;
    GameData_2230760 = 0;
    GameData_2230768 = 2;
    GameData_2230780 = 0;
    GameData_2230778 = 0;
    GameData_2230770 = 0;
    GameData_2230788 = 3;
    GameData_2230790 = 0;
    GameData_2230798 = 0;
    GameData_22307a0 = 0;
    GameData_22307b0 = 0;
    GameData_22307b8 = (__int64)GameRoutine_fe26b0;
    GameData_22307c0 = 0;
    GameData_22307c8 = 0;
    GameData_22307d0 = 0;
    GameData_22307d8 = 0;
    GameData_22307e0 = 0;
    GameData_22307e8 = 12;
    GameData_2230800 = 0;
    GameData_22307f8 = 0;
    GameData_22307f0 = 0;
    GameData_2230808 = 4;
    GameData_2230810 = 0;
    GameData_2230818 = 0;
    GameData_2230820 = 0;
    GameData_2230828 = 2;
    GameData_2230840 = 0;
    GameData_2230838 = 0;
    GameData_2230830 = 0;
    GameData_2230848 = 4;
    GameData_2230850 = 0;
    GameData_2230858 = 0;
    GameData_2230860 = 0;
    GameData_2230868 = 0;
    GameData_2230890 = 0;
    GameData_2230898 = 0;
    GameData_22308a0 = 0;
    GameData_2230888 = 0;
    GameData_2230880 = 0;
    GameData_2230878 = 0;
    GameData_2230870 = 0;
    GameRoutine_1a09fe0(&GameData_22308a8);
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 176, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0();
  v6 = *a2;
  *(_BYTE*)(v4 + 160) = 0;
  *(_BYTE*)(v4 + 168) = 0;
  *(_BYTE*)(v4 + 172) = 0;
  *(_DWORD*)(v4 + 164) = 1;
  GameData_222e468 = 0;
  *(_QWORD*)(v4 + 152) = v6;
  *(_QWORD*)v4 = GameData_1ffe190;
  return GameRoutine_657850(v4, &GameData_22304e8, "BonSeqProc", 1, a1);
}

__int64 GameHr_fdba50(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2230db0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_2230db0) != 0) {
    GameData_22309d0 = 1;
    GameData_22308f8 = 0;
    GameData_2230900 = (__int64)GameRoutine_fe28e0;
    GameData_22308f0 = 13;
    GameData_2230930 = 13;
    GameData_22309f0 = 13;
    GameData_2230a30 = 13;
    GameData_2230a70 = 13;
    GameData_2230b30 = 13;
    GameData_2230bf0 = 13;
    GameData_2230cb0 = 13;
    GameData_22309f8 = 0;
    GameData_2230a00 = (__int64)GameRoutine_fe2ba0;
    GameData_2230938 = 0;
    GameData_2230940 = (__int64)GameRoutine_fe2a60;
    GameData_22308b0 = 2;
    GameData_22308d8 = 0;
    GameData_22308e0 = 0;
    GameData_22308e8 = 0;
    GameData_22308b8 = 0;
    GameData_22308c0 = 0;
    GameData_2230a38 = 0;
    GameData_2230a40 = (__int64)GameRoutine_fe2c20;
    GameData_22308c8 = 0;
    GameData_22308d0 = 0;
    GameData_2230908 = 0;
    GameData_2230910 = 0;
    GameData_2230918 = 0;
    GameData_2230920 = 0;
    GameData_2230928 = 0;
    GameData_2230948 = 0;
    GameData_2230950 = 0;
    GameData_2230a78 = 0;
    GameData_2230a80 = (__int64)GameRoutine_fe2dc0;
    GameData_2230958 = 0;
    GameData_2230960 = 0;
    GameData_2230968 = 0;
    GameData_2230970 = 12;
    GameData_2230980 = 0;
    GameData_2230988 = 0;
    GameData_2230978 = 0;
    GameData_2230990 = 5;
    GameData_2230998 = 0;
    GameData_22309a0 = 0;
    GameData_2230b40 = (__int64)GameRoutine_fe3390;
    GameData_22309a8 = 0;
    GameData_22309b0 = 2;
    GameData_22309b8 = 0;
    GameData_22309c0 = 0;
    GameData_22309c8 = 0;
    GameData_22309d8 = 0;
    GameData_22309e0 = 0;
    GameData_22309e8 = 0;
    GameData_2230a08 = 0;
    GameData_2230a10 = 0;
    GameData_2230a18 = 0;
    GameData_2230bd0 = 3;
    GameData_2230a20 = 0;
    GameData_2230a28 = 0;
    GameData_2230a48 = 0;
    GameData_2230a50 = 0;
    GameData_2230a58 = 0;
    GameData_2230a60 = 0;
    GameData_2230a68 = 0;
    GameData_2230a88 = 0;
    GameData_2230a90 = 0;
    GameData_2230c00 = (__int64)GameRoutine_fe3510;
    GameData_2230a98 = 0;
    GameData_2230aa0 = 0;
    GameData_2230aa8 = 0;
    GameData_2230ab0 = 12;
    GameData_2230ac8 = 0;
    GameData_2230ac0 = 0;
    GameData_2230ab8 = 0;
    GameData_2230ad0 = 5;
    GameData_2230ad8 = 0;
    GameData_2230ae0 = 0;
    GameData_2230ae8 = 0;
    GameData_2230af0 = 2;
    GameData_2230af8 = 0;
    GameData_2230b00 = 0;
    GameData_2230b08 = 0;
    GameData_2230b10 = 2;
    GameData_2230b18 = 0;
    GameData_2230b20 = 0;
    GameData_2230b28 = 0;
    GameData_2230b38 = 0;
    GameData_2230b48 = 0;
    GameData_2230b50 = 0;
    GameData_2230b58 = 0;
    GameData_2230b60 = 0;
    GameData_2230b68 = 0;
    GameData_2230b70 = 12;
    GameData_2230b88 = 0;
    GameData_2230b80 = 0;
    GameData_2230b78 = 0;
    GameData_2230b90 = 5;
    GameData_2230b98 = 0;
    GameData_2230ba0 = 0;
    GameData_2230ba8 = 0;
    GameData_2230bb0 = 2;
    GameData_2230bb8 = 0;
    GameData_2230bc0 = 0;
    GameData_2230bc8 = 0;
    GameData_2230bd8 = 0;
    GameData_2230be0 = 0;
    GameData_2230be8 = 0;
    GameData_2230bf8 = 0;
    GameData_2230c08 = 0;
    GameData_2230c10 = 0;
    GameData_2230c18 = 0;
    GameData_2230c20 = 0;
    GameData_2230c28 = 0;
    GameData_2230c30 = 12;
    GameData_2230c48 = 0;
    GameData_2230c40 = 0;
    GameData_2230c38 = 0;
    GameData_2230c50 = 5;
    GameData_2230c58 = 0;
    GameData_2230c60 = 0;
    GameData_2230c68 = 0;
    GameData_2230c70 = 2;
    GameData_2230c88 = 0;
    GameData_2230c80 = 0;
    GameData_2230c78 = 0;
    GameData_2230c90 = 4;
    GameData_2230c98 = 0;
    GameData_2230ca0 = 0;
    GameData_2230ca8 = 0;
    GameData_2230cb8 = 0;
    GameData_2230cc0 = (__int64)GameRoutine_fe3690;
    GameData_2230cc8 = 0;
    GameData_2230cd0 = 0;
    GameData_2230cd8 = 0;
    GameData_2230ce0 = 0;
    GameData_2230ce8 = 0;
    GameData_2230cf0 = 12;
    GameData_2230d08 = 0;
    GameData_2230d00 = 0;
    GameData_2230cf8 = 0;
    GameData_2230d10 = 5;
    GameData_2230d18 = 0;
    GameData_2230d20 = 0;
    GameData_2230d28 = 0;
    GameData_2230d30 = 2;
    GameData_2230d48 = 0;
    GameData_2230d40 = 0;
    GameData_2230d38 = 0;
    GameData_2230d50 = 5;
    GameData_2230d58 = 0;
    GameData_2230d60 = 0;
    GameData_2230d68 = 0;
    GameData_2230d70 = 0;
    GameData_2230d98 = 0;
    GameData_2230da0 = 0;
    GameData_2230da8 = 0;
    GameData_2230d90 = 0;
    GameData_2230d88 = 0;
    GameData_2230d80 = 0;
    GameData_2230d78 = 0;
    GameRoutine_1a09fe0(&GameData_2230db0);
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 176, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0();
  v6 = *a2;
  *(_BYTE*)(v4 + 160) = 0;
  *(_BYTE*)(v4 + 168) = 0;
  *(_BYTE*)(v4 + 172) = 0;
  *(_DWORD*)(v4 + 164) = 1;
  GameData_222e468 = 0;
  *(_QWORD*)(v4 + 152) = v6;
  *(_QWORD*)v4 = GameData_1ffe248;
  return GameRoutine_657850(v4, &GameData_22308b0, "TobSeqProc", 1, a1);
}

__int64 GameHr_fdbe30(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2230ff8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_2230ff8) != 0) {
    GameData_2230e00 = 0;
    GameData_2230e08 = (__int64)GameRoutine_fe38b0;
    GameData_2230df8 = 13;
    GameData_2230e38 = 13;
    GameData_2230ef8 = 13;
    GameData_2230db8 = 2;
    GameData_2230de0 = 0;
    GameData_2230de8 = 0;
    GameData_2230df0 = 0;
    GameData_2230dc0 = 0;
    GameData_2230dc8 = 0;
    GameData_2230dd0 = 0;
    GameData_2230dd8 = 0;
    GameData_2230e40 = 0;
    GameData_2230e48 = (__int64)GameRoutine_fe3a40;
    GameData_2230e10 = 0;
    GameData_2230e18 = 0;
    GameData_2230e20 = 0;
    GameData_2230e28 = 0;
    GameData_2230e30 = 0;
    GameData_2230e50 = 0;
    GameData_2230e58 = 0;
    GameData_2230e60 = 0;
    GameData_2230e68 = 0;
    GameData_2230e70 = 0;
    GameData_2230e78 = 12;
    GameData_2230e88 = 0;
    GameData_2230e90 = 0;
    GameData_2230e80 = 0;
    GameData_2230e98 = 2;
    GameData_2230ea0 = 0;
    GameData_2230ea8 = 0;
    GameData_2230eb0 = 0;
    GameData_2230eb8 = 2;
    GameData_2230ec0 = 0;
    GameData_2230ec8 = 0;
    GameData_2230ed0 = 0;
    GameData_2230ed8 = 1;
    GameData_2230ee0 = 0;
    GameData_2230ee8 = 0;
    GameData_2230ef0 = 0;
    GameData_2230f00 = 0;
    GameData_2230f08 = (__int64)GameRoutine_fe3d50;
    GameData_2230f10 = 0;
    GameData_2230f18 = 0;
    GameData_2230f20 = 0;
    GameData_2230f28 = 0;
    GameData_2230f30 = 0;
    GameData_2230f38 = 12;
    GameData_2230f48 = 0;
    GameData_2230f50 = 0;
    GameData_2230f40 = 0;
    GameData_2230f58 = 2;
    GameData_2230f60 = 0;
    GameData_2230f68 = 0;
    GameData_2230f70 = 0;
    GameData_2230f78 = 2;
    GameData_2230f80 = 0;
    GameData_2230f88 = 0;
    GameData_2230f90 = 0;
    GameData_2230f98 = 2;
    GameData_2230fa0 = 0;
    GameData_2230fa8 = 0;
    GameData_2230fb0 = 0;
    GameData_2230fb8 = 0;
    GameData_2230fe0 = 0;
    GameData_2230fe8 = 0;
    GameData_2230ff0 = 0;
    GameData_2230fd8 = 0;
    GameData_2230fd0 = 0;
    GameData_2230fc8 = 0;
    GameData_2230fc0 = 0;
    GameRoutine_1a09fe0(&GameData_2230ff8);
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 176, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0();
  v6 = *a2;
  *(_BYTE*)(v4 + 160) = 0;
  *(_BYTE*)(v4 + 168) = 0;
  *(_BYTE*)(v4 + 172) = 0;
  *(_DWORD*)(v4 + 164) = 1;
  GameData_222e468 = 0;
  *(_QWORD*)(v4 + 152) = v6;
  *(_QWORD*)v4 = GameData_1ffe300;
  return GameRoutine_657850(v4, &GameData_2230db8, "BucSeqProc", 1, a1);
}

__int64 GameHr_fdc080(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2231240,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_2231240) != 0) {
    GameData_2231048 = 0;
    GameData_2231050 = (__int64)GameRoutine_fe3e00;
    GameData_2231040 = 13;
    GameData_2231080 = 13;
    GameData_2231140 = 13;
    GameData_2231000 = 2;
    GameData_2231028 = 0;
    GameData_2231030 = 0;
    GameData_2231038 = 0;
    GameData_2231008 = 0;
    GameData_2231010 = 0;
    GameData_2231018 = 0;
    GameData_2231020 = 0;
    GameData_2231088 = 0;
    GameData_2231090 = (__int64)GameRoutine_fe3f80;
    GameData_2231058 = 0;
    GameData_2231060 = 0;
    GameData_2231068 = 0;
    GameData_2231070 = 0;
    GameData_2231078 = 0;
    GameData_2231098 = 0;
    GameData_22310a0 = 0;
    GameData_22310a8 = 0;
    GameData_22310b0 = 0;
    GameData_22310b8 = 0;
    GameData_22310c0 = 12;
    GameData_22310d0 = 0;
    GameData_22310d8 = 0;
    GameData_22310c8 = 0;
    GameData_22310e0 = 2;
    GameData_22310e8 = 0;
    GameData_22310f0 = 0;
    GameData_22310f8 = 0;
    GameData_2231100 = 2;
    GameData_2231108 = 0;
    GameData_2231110 = 0;
    GameData_2231118 = 0;
    GameData_2231120 = 1;
    GameData_2231128 = 0;
    GameData_2231130 = 0;
    GameData_2231138 = 0;
    GameData_2231148 = 0;
    GameData_2231150 = (__int64)GameRoutine_fe4290;
    GameData_2231158 = 0;
    GameData_2231160 = 0;
    GameData_2231168 = 0;
    GameData_2231170 = 0;
    GameData_2231178 = 0;
    GameData_2231180 = 12;
    GameData_2231190 = 0;
    GameData_2231198 = 0;
    GameData_2231188 = 0;
    GameData_22311a0 = 2;
    GameData_22311a8 = 0;
    GameData_22311b0 = 0;
    GameData_22311b8 = 0;
    GameData_22311c0 = 2;
    GameData_22311c8 = 0;
    GameData_22311d0 = 0;
    GameData_22311d8 = 0;
    GameData_22311e0 = 2;
    GameData_22311e8 = 0;
    GameData_22311f0 = 0;
    GameData_22311f8 = 0;
    GameData_2231200 = 0;
    GameData_2231228 = 0;
    GameData_2231230 = 0;
    GameData_2231238 = 0;
    GameData_2231220 = 0;
    GameData_2231218 = 0;
    GameData_2231210 = 0;
    GameData_2231208 = 0;
    GameRoutine_1a09fe0(&GameData_2231240);
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 176, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0();
  v6 = *a2;
  *(_BYTE*)(v4 + 160) = 0;
  *(_BYTE*)(v4 + 168) = 0;
  *(_BYTE*)(v4 + 172) = 0;
  *(_DWORD*)(v4 + 164) = 1;
  GameData_222e468 = 0;
  *(_QWORD*)(v4 + 152) = v6;
  *(_QWORD*)v4 = GameData_1ffe3b8;
  return GameRoutine_657850(v4, &GameData_2231000, "GatSeqProc", 1, a1);
}

__int64 GameHr_fdc2d0(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22316c8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_22316c8) != 0) {
    GameData_2231368 = 1;
    GameData_2231290 = 0;
    GameData_2231298 = (__int64)GameRoutine_fe4340;
    GameData_2231288 = 13;
    GameData_22312c8 = 13;
    GameData_2231388 = 13;
    GameData_2231448 = 13;
    GameData_2231508 = 13;
    GameData_22315c8 = 13;
    GameData_2231390 = 0;
    GameData_2231398 = (__int64)GameRoutine_fe46e0;
    GameData_22312d0 = 0;
    GameData_22312d8 = (__int64)GameRoutine_fe44c0;
    GameData_2231248 = 2;
    GameData_2231270 = 0;
    GameData_2231278 = 0;
    GameData_2231280 = 0;
    GameData_2231250 = 0;
    GameData_2231258 = 0;
    GameData_2231260 = 0;
    GameData_2231268 = 0;
    GameData_2231458 = (__int64)GameRoutine_fe4900;
    GameData_22312a0 = 0;
    GameData_22312a8 = 0;
    GameData_22312b0 = 0;
    GameData_22312b8 = 0;
    GameData_22312c0 = 0;
    GameData_22312e0 = 0;
    GameData_22312e8 = 0;
    GameData_22312f0 = 0;
    GameData_22312f8 = 0;
    GameData_2231300 = 0;
    GameData_22314e8 = 3;
    GameData_2231308 = 12;
    GameData_2231318 = 0;
    GameData_2231320 = 0;
    GameData_2231310 = 0;
    GameData_2231328 = 5;
    GameData_2231330 = 0;
    GameData_2231338 = 0;
    GameData_2231340 = 0;
    GameData_2231348 = 2;
    GameData_2231350 = 0;
    GameData_2231358 = 0;
    GameData_2231518 = (__int64)GameRoutine_fe4960;
    GameData_2231360 = 0;
    GameData_2231370 = 0;
    GameData_2231378 = 0;
    GameData_2231380 = 0;
    GameData_22313a0 = 0;
    GameData_22313a8 = 0;
    GameData_22313b0 = 0;
    GameData_22313b8 = 0;
    GameData_22313c0 = 0;
    GameData_22313c8 = 12;
    GameData_22313d8 = 0;
    GameData_22313e0 = 0;
    GameData_22313d0 = 0;
    GameData_22313e8 = 5;
    GameData_22313f0 = 0;
    GameData_22313f8 = 0;
    GameData_2231400 = 0;
    GameData_2231408 = 2;
    GameData_2231410 = 0;
    GameData_2231418 = 0;
    GameData_2231420 = 0;
    GameData_2231428 = 2;
    GameData_2231430 = 0;
    GameData_2231438 = 0;
    GameData_2231440 = 0;
    GameData_2231450 = 0;
    GameData_2231460 = 0;
    GameData_2231468 = 0;
    GameData_2231470 = 0;
    GameData_2231478 = 0;
    GameData_2231480 = 0;
    GameData_2231488 = 12;
    GameData_22314a0 = 0;
    GameData_2231498 = 0;
    GameData_2231490 = 0;
    GameData_22314a8 = 5;
    GameData_22314b0 = 0;
    GameData_22314b8 = 0;
    GameData_22314c0 = 0;
    GameData_22314c8 = 2;
    GameData_22314e0 = 0;
    GameData_22314d8 = 0;
    GameData_22314d0 = 0;
    GameData_22314f0 = 0;
    GameData_22314f8 = 0;
    GameData_2231500 = 0;
    GameData_2231510 = 0;
    GameData_2231520 = 0;
    GameData_2231528 = 0;
    GameData_2231530 = 0;
    GameData_2231538 = 0;
    GameData_2231540 = 0;
    GameData_2231548 = 12;
    GameData_2231560 = 0;
    GameData_2231558 = 0;
    GameData_2231550 = 0;
    GameData_2231568 = 5;
    GameData_2231570 = 0;
    GameData_2231578 = 0;
    GameData_2231580 = 0;
    GameData_2231588 = 2;
    GameData_22315a0 = 0;
    GameData_2231598 = 0;
    GameData_2231590 = 0;
    GameData_22315a8 = 4;
    GameData_22315b0 = 0;
    GameData_22315b8 = 0;
    GameData_22315c0 = 0;
    GameData_22315d0 = 0;
    GameData_22315d8 = (__int64)GameRoutine_fe4ae0;
    GameData_22315e0 = 0;
    GameData_22315e8 = 0;
    GameData_22315f0 = 0;
    GameData_22315f8 = 0;
    GameData_2231600 = 0;
    GameData_2231608 = 12;
    GameData_2231620 = 0;
    GameData_2231618 = 0;
    GameData_2231610 = 0;
    GameData_2231628 = 5;
    GameData_2231630 = 0;
    GameData_2231638 = 0;
    GameData_2231640 = 0;
    GameData_2231648 = 2;
    GameData_2231660 = 0;
    GameData_2231658 = 0;
    GameData_2231650 = 0;
    GameData_2231668 = 5;
    GameData_2231670 = 0;
    GameData_2231678 = 0;
    GameData_2231680 = 0;
    GameData_2231688 = 0;
    GameData_22316b0 = 0;
    GameData_22316b8 = 0;
    GameData_22316c0 = 0;
    GameData_22316a8 = 0;
    GameData_22316a0 = 0;
    GameData_2231698 = 0;
    GameData_2231690 = 0;
    GameRoutine_1a09fe0(&GameData_22316c8);
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 176, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0();
  v6 = *a2;
  *(_BYTE*)(v4 + 160) = 0;
  *(_BYTE*)(v4 + 168) = 0;
  *(_BYTE*)(v4 + 172) = 0;
  *(_DWORD*)(v4 + 164) = 1;
  GameData_222e468 = 0;
  *(_QWORD*)(v4 + 152) = v6;
  *(_QWORD*)v4 = GameData_1ffe470;
  return GameRoutine_657850(v4, &GameData_2231248, "UrsSeqProc", 1, a1);
}

__int64 GameHr_fdc660(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2231910,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_2231910) != 0) {
    GameData_2231718 = 0;
    GameData_2231720 = (__int64)GameRoutine_fe4d10;
    GameData_2231710 = 13;
    GameData_2231750 = 13;
    GameData_2231810 = 13;
    GameData_22316d0 = 2;
    GameData_22316f8 = 0;
    GameData_2231700 = 0;
    GameData_2231708 = 0;
    GameData_22316d8 = 0;
    GameData_22316e0 = 0;
    GameData_22316e8 = 0;
    GameData_22316f0 = 0;
    GameData_2231758 = 0;
    GameData_2231760 = (__int64)GameRoutine_fe4ea0;
    GameData_2231728 = 0;
    GameData_2231730 = 0;
    GameData_2231738 = 0;
    GameData_2231740 = 0;
    GameData_2231748 = 0;
    GameData_2231768 = 0;
    GameData_2231770 = 0;
    GameData_2231778 = 0;
    GameData_2231780 = 0;
    GameData_2231788 = 0;
    GameData_2231790 = 12;
    GameData_22317a0 = 0;
    GameData_22317a8 = 0;
    GameData_2231798 = 0;
    GameData_22317b0 = 2;
    GameData_22317b8 = 0;
    GameData_22317c0 = 0;
    GameData_22317c8 = 0;
    GameData_22317d0 = 2;
    GameData_22317d8 = 0;
    GameData_22317e0 = 0;
    GameData_22317e8 = 0;
    GameData_22317f0 = 1;
    GameData_22317f8 = 0;
    GameData_2231800 = 0;
    GameData_2231808 = 0;
    GameData_2231818 = 0;
    GameData_2231820 = (__int64)GameRoutine_fe51b0;
    GameData_2231828 = 0;
    GameData_2231830 = 0;
    GameData_2231838 = 0;
    GameData_2231840 = 0;
    GameData_2231848 = 0;
    GameData_2231850 = 12;
    GameData_2231860 = 0;
    GameData_2231868 = 0;
    GameData_2231858 = 0;
    GameData_2231870 = 2;
    GameData_2231878 = 0;
    GameData_2231880 = 0;
    GameData_2231888 = 0;
    GameData_2231890 = 2;
    GameData_2231898 = 0;
    GameData_22318a0 = 0;
    GameData_22318a8 = 0;
    GameData_22318b0 = 2;
    GameData_22318b8 = 0;
    GameData_22318c0 = 0;
    GameData_22318c8 = 0;
    GameData_22318d0 = 0;
    GameData_22318f8 = 0;
    GameData_2231900 = 0;
    GameData_2231908 = 0;
    GameData_22318f0 = 0;
    GameData_22318e8 = 0;
    GameData_22318e0 = 0;
    GameData_22318d8 = 0;
    GameRoutine_1a09fe0(&GameData_2231910);
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 176, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0();
  v6 = *a2;
  *(_BYTE*)(v4 + 160) = 0;
  *(_BYTE*)(v4 + 168) = 0;
  *(_BYTE*)(v4 + 172) = 0;
  *(_DWORD*)(v4 + 164) = 1;
  GameData_222e468 = 0;
  *(_QWORD*)(v4 + 152) = v6;
  *(_QWORD*)v4 = GameData_1ffe528;
  return GameRoutine_657850(v4, &GameData_22316d0, "DieSeqProc", 1, a1);
}

__int64 GameHr_fdc8b0(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2231e58,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_2231e58) != 0) {
    GameData_2231a38 = 1;
    GameData_2231960 = 0;
    GameData_2231968 = (__int64)GameRoutine_fe5260;
    GameData_2231958 = 13;
    GameData_2231998 = 13;
    GameData_2231a58 = 13;
    GameData_2231a98 = 13;
    GameData_2231b58 = 13;
    GameData_2231b98 = 13;
    GameData_2231c58 = 13;
    GameData_2231c98 = 13;
    GameData_2231a60 = 0;
    GameData_2231a68 = (__int64)GameRoutine_fe55f0;
    GameData_22319a0 = 0;
    GameData_22319a8 = (__int64)GameRoutine_fe53e0;
    GameData_2231d58 = 13;
    GameData_2231918 = 2;
    GameData_2231940 = 0;
    GameData_2231948 = 0;
    GameData_2231950 = 0;
    GameData_2231aa0 = 0;
    GameData_2231aa8 = (__int64)GameRoutine_fe5780;
    GameData_2231920 = 0;
    GameData_2231928 = 0;
    GameData_2231930 = 0;
    GameData_2231938 = 0;
    GameData_2231970 = 0;
    GameData_2231978 = 0;
    GameData_2231980 = 0;
    GameData_2231988 = 0;
    GameData_2231990 = 0;
    GameData_22319b0 = 0;
    GameData_2231b68 = (__int64)GameRoutine_fe57e0;
    GameData_22319b8 = 0;
    GameData_22319c0 = 0;
    GameData_22319c8 = 0;
    GameData_22319d0 = 0;
    GameData_22319d8 = 12;
    GameData_22319e8 = 0;
    GameData_22319f0 = 0;
    GameData_22319e0 = 0;
    GameData_22319f8 = 5;
    GameData_2231a00 = 0;
    GameData_2231ba8 = (__int64)GameRoutine_fe5960;
    GameData_2231a08 = 0;
    GameData_2231a10 = 0;
    GameData_2231a18 = 2;
    GameData_2231a20 = 0;
    GameData_2231a28 = 0;
    GameData_2231a30 = 0;
    GameData_2231a40 = 0;
    GameData_2231a48 = 0;
    GameData_2231a50 = 0;
    GameData_2231a70 = 0;
    GameData_2231a78 = 0;
    GameData_2231c38 = 3;
    GameData_2231a80 = 0;
    GameData_2231a88 = 0;
    GameData_2231a90 = 0;
    GameData_2231ab0 = 0;
    GameData_2231ab8 = 0;
    GameData_2231ac0 = 0;
    GameData_2231ac8 = 0;
    GameData_2231ad0 = 0;
    GameData_2231ad8 = 12;
    GameData_2231c68 = (__int64)GameRoutine_fe59c0;
    GameData_2231ae8 = 0;
    GameData_2231af0 = 0;
    GameData_2231ae0 = 0;
    GameData_2231af8 = 5;
    GameData_2231b00 = 0;
    GameData_2231b08 = 0;
    GameData_2231b10 = 0;
    GameData_2231b18 = 2;
    GameData_2231b20 = 0;
    GameData_2231b28 = 0;
    GameData_2231ca8 = (__int64)GameRoutine_fe5b40;
    GameData_2231b30 = 0;
    GameData_2231b38 = 2;
    GameData_2231b40 = 0;
    GameData_2231b48 = 0;
    GameData_2231b50 = 0;
    GameData_2231b60 = 0;
    GameData_2231b70 = 0;
    GameData_2231b78 = 0;
    GameData_2231b80 = 0;
    GameData_2231b88 = 0;
    GameData_2231b90 = 0;
    GameData_2231ba0 = 0;
    GameData_2231bb0 = 0;
    GameData_2231bb8 = 0;
    GameData_2231bc0 = 0;
    GameData_2231bc8 = 0;
    GameData_2231bd0 = 0;
    GameData_2231bd8 = 12;
    GameData_2231bf0 = 0;
    GameData_2231be8 = 0;
    GameData_2231be0 = 0;
    GameData_2231bf8 = 5;
    GameData_2231c00 = 0;
    GameData_2231c08 = 0;
    GameData_2231c10 = 0;
    GameData_2231c18 = 2;
    GameData_2231c20 = 0;
    GameData_2231c28 = 0;
    GameData_2231c30 = 0;
    GameData_2231c40 = 0;
    GameData_2231c48 = 0;
    GameData_2231c50 = 0;
    GameData_2231c60 = 0;
    GameData_2231c70 = 0;
    GameData_2231c78 = 0;
    GameData_2231c80 = 0;
    GameData_2231c88 = 0;
    GameData_2231c90 = 0;
    GameData_2231ca0 = 0;
    GameData_2231cb0 = 0;
    GameData_2231cb8 = 0;
    GameData_2231cc0 = 0;
    GameData_2231cc8 = 0;
    GameData_2231cd0 = 0;
    GameData_2231cd8 = 12;
    GameData_2231cf0 = 0;
    GameData_2231ce8 = 0;
    GameData_2231ce0 = 0;
    GameData_2231cf8 = 5;
    GameData_2231d00 = 0;
    GameData_2231d08 = 0;
    GameData_2231d10 = 0;
    GameData_2231d18 = 2;
    GameData_2231d20 = 0;
    GameData_2231d28 = 0;
    GameData_2231d30 = 0;
    GameData_2231d38 = 4;
    GameData_2231d40 = 0;
    GameData_2231d48 = 0;
    GameData_2231d50 = 0;
    GameData_2231d60 = 0;
    GameData_2231d68 = (__int64)GameRoutine_fe5d70;
    GameData_2231d70 = 0;
    GameData_2231d78 = 0;
    GameData_2231d80 = 0;
    GameData_2231d88 = 0;
    GameData_2231d90 = 0;
    GameData_2231d98 = 12;
    GameData_2231db0 = 0;
    GameData_2231da8 = 0;
    GameData_2231da0 = 0;
    GameData_2231db8 = 5;
    GameData_2231dc0 = 0;
    GameData_2231dc8 = 0;
    GameData_2231dd0 = 0;
    GameData_2231dd8 = 2;
    GameData_2231de0 = 0;
    GameData_2231de8 = 0;
    GameData_2231df0 = 0;
    GameData_2231df8 = 5;
    GameData_2231e00 = 0;
    GameData_2231e08 = 0;
    GameData_2231e10 = 0;
    GameData_2231e18 = 0;
    GameData_2231e40 = 0;
    GameData_2231e48 = 0;
    GameData_2231e50 = 0;
    GameData_2231e38 = 0;
    GameData_2231e30 = 0;
    GameData_2231e28 = 0;
    GameData_2231e20 = 0;
    GameRoutine_1a09fe0(&GameData_2231e58);
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 176, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0();
  v6 = *a2;
  *(_BYTE*)(v4 + 160) = 0;
  *(_BYTE*)(v4 + 168) = 0;
  *(_BYTE*)(v4 + 172) = 0;
  *(_DWORD*)(v4 + 164) = 1;
  GameData_222e468 = 0;
  *(_QWORD*)(v4 + 152) = v6;
  *(_QWORD*)v4 = GameData_1ffe5e0;
  return GameRoutine_657850(v4, &GameData_2231918, "SarSeqProc", 1, a1);
}

__int64 GameHr_fe7660(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 result;

  v2 = (_QWORD*)GameData_212bf68;
  v3 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 40, 16, 0);
  v3[3] = 0;
  v3[4] = 0;
  *v3 = GameData_1ffe798;
  v4 = GameRoutine_2647c0(32000, 0);
  *(_QWORD*)a1 = v3;
  v3[1] = v4;
  v3[2] = 32000;
  v5 = (_QWORD*)GameRoutine_651b90(*v2, 8, 16, 0);
  *(_QWORD*)(a1 + 8) = v5;
  *v5 = GameData_1ffe7e8;
  v6 = (_QWORD*)GameRoutine_651b90(*v2, 8, 16, 0);
  *(_QWORD*)(a1 + 16) = v6;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *v6 = GameData_1ffe838;
  GameRoutine_267c10(a1 + 48);
  *(_QWORD*)(a1 + 312) = 0;
  *(_WORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_DWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 324) = 0;
  result = GameRoutine_1a0a040(a1 + 320, 0, 0);
  *(_DWORD*)(a1 + 304) = 0xFFFF;
  return result;
}

__int64 GameHr_fe7900(__int64 result, float a2)
{
  __int64 v2;
  _QWORD* v4;
  int v5;
  long double v6;
  double v7;

  v2 = *(_QWORD*)(result + 312);
  v4 = (_QWORD*)result;
  if (v2 != 0) {
    GameRoutine_1a09c00(v2 + 696);
    v5 = *(_DWORD*)(v2 + 656);
    result = GameRoutine_1a09c10(v2 + 696);
    if ((v5 & 8) != 0) {
      v6 = GameRoutine_fe79c0(v4);
      result = GameRoutine_634d80(*(_QWORD*)(v4[39] + 8LL), v6);
      v4[39] = 0;
    }
  }
  if (v4[4] != 0 && v4[3] != 0) {
    GameRoutine_1a09b70(v4 + 40);
    *(float*)&v7 = a2;
    GameRoutine_26bfa0(v4[3], v4[4], 0, v7);
    return GameRoutine_1a09b80(v4 + 40);
  }
  return result;
}

__int64 GameHr_fe79c0(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int* v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  unsigned __int64 v20;
  __int64 v21;
  _DWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27[4];
  struct {
    __int64 v28[6];
    int v29;
  } v28_;
  unsigned int v30;

  v1 = *(__int64**)(*(_QWORD*)(result + 312) + 592LL);
  v2 = *v1;
  v3 = v1[1];
  v4 = v1[3];
  v27[1] = v1[2];
  v27[2] = v4;
  v26 = v2;
  v27[0] = v3;
  v5 = v1[4];
  v6 = v1[5];
  v7 = v1[7];
  v28_.v28[1] = v1[6];
  v28_.v28[2] = v7;
  v27[3] = v5;
  v28_.v28[0] = v6;
  v8 = v1[9];
  v9 = v1[10];
  LODWORD(v7) = *((_DWORD*)v1 + 22);
  v28_.v28[3] = v1[8];
  v28_.v28[4] = v8;
  v28_.v28[5] = v9;
  v28_.v29 = v7;
  if (v26 == 0x154534554LL) {
    v10 = (__int64*)result;
    result = dtAllocNavMesh();
    v10[4] = result;
    if (result != 0) {
      result = dtNavMesh_init(result, (__int64*)((char*)v27 + 4));
      if ((result & 0x80000000) == 0) {
        result = dtAllocTileCache();
        v10[3] = result;
        if (result != 0) {
          v11 = *v10;
          v12 = v10[1];
          v13 = v10[2];
          v28_.v29 = 4096;
          result = dtTileCache_init((int*)result, v28_.v28, v11, v12, v13);
          if ((result & 0x80000000) == 0) {
            if (SLODWORD(v27[0]) >= 1) {
              v14 = (int*)v1 + 23;
              v15 = 0;
              do {
                v17 = *v14;
                v16 = v14[1];
                v18 = (__int64)(v14 + 2);
                if (v17 == 0 || v16 == 0) {
                  break;
                }
                v20 = v16;
                v21 = dtAlloc();
                if (v21 == 0) {
                  break;
                }
                v22 = (_DWORD*)v21;
                memcpy(v21, v18, v20);
                v23 = v10[3];
                v30 = 0;
                if ((dtTileCache_addTile(v23, v22, v20, 1u, &v30) &
                     0x80000000) != 0) {
                  dtFree((__int64)v22);
                }
                if (v30 != 0) {
                  dtTileCache_buildNavMeshTile(v10[3], v30, v10[4]);
                }
                v14 = (int*)(v18 + v20);
                ++v15;
              } while (v15 < SLODWORD(v27[0]));
            }
            v24 = (_QWORD*)dtAllocNavMeshQuery();
            v25 = v10[4];
            v10[5] = (__int64)v24;
            return dtNavMeshQuery_init(v24, v25, 2048);
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_fe9550(__int64 a1)
{
  __int64 v2;
  __int64 result;

  if (*(_QWORD*)GameData_212d038[0] == 0) {
    *(_QWORD*)GameData_212d038[0] = a1;
    GameData_2231ff4 = 1;
  }
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 78) = 0;
  *(_QWORD*)a1 = GameData_1ffeb38;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0x100000001LL;
  *(_QWORD*)(a1 + 148) = -1;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 160) = GameData_1ffcba8;
  *(_DWORD*)(a1 + 144) = 0;
  *(_BYTE*)(a1 + 156) = 0;
  v2 = GameRoutine_651b90(GameData_2265ee0, 296, 16, 0);
  *(_DWORD*)(v2 + 48) = 0x2000;
  *(_WORD*)(v2 + 108) = 256;
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_DWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_DWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_WORD*)(v2 + 80) = 0;
  *(_DWORD*)(v2 + 112) = -1082130432;
  *(_WORD*)(v2 + 116) = 0;
  *(_WORD*)(v2 + 136) = 0;
  *(_BYTE*)(v2 + 160) = 0;
  *(_BYTE*)(v2 + 288) = 0;
  *(_QWORD*)(v2 + 272) = 0;
  *(_QWORD*)(v2 + 280) = 0;
  *(_QWORD*)(v2 + 256) = 0;
  *(_QWORD*)(v2 + 264) = 0;
  *(_QWORD*)(v2 + 240) = 0;
  *(_QWORD*)(v2 + 248) = 0;
  *(_QWORD*)(v2 + 224) = 0;
  *(_QWORD*)(v2 + 232) = 0;
  *(_QWORD*)(v2 + 208) = 0;
  *(_QWORD*)(v2 + 216) = 0;
  *(_QWORD*)(v2 + 192) = 0;
  *(_QWORD*)(v2 + 200) = 0;
  *(_QWORD*)(v2 + 176) = 0;
  *(_QWORD*)(v2 + 184) = 0;
  *(_QWORD*)(v2 + 168) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_DWORD*)(v2 + 127) = 0;
  *(_QWORD*)(a1 + 176) = v2;
  *(_BYTE*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 188) = 0;
  *(_DWORD*)(a1 + 192) = 0;
  *(_BYTE*)(a1 + 196) = 0;
  *(_BYTE*)(a1 + 200) = 0;
  *(_QWORD*)v2 = GameData_2044668;
  *(_DWORD*)(v2 + 292) = 2;
  *(_QWORD*)(v2 + 24) = 0;
  result = v2 + 24;
  *(_QWORD*)(a1 + 160) = GameData_212faf8[0] + 2;
  *(_QWORD*)(a1 + 168) = result;
  return result;
}

__int64 GameHr_feb9e0(__int64 result, __int64 a2, int a3)
{
  _QWORD* v3;
  unsigned __int8 explicit;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned __int8 v11;
  int* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;

  *(_BYTE*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  v3 = (_QWORD*)(result + 24);
  *(_QWORD*)(result + 32) = 0;
  *(_DWORD*)(result + 40) = a3;
  *(_DWORD*)(result + 17) = 33686018;
  *(_QWORD*)result = GameData_1ffeec0;
  *(_QWORD*)(result + 8) = a2;
  *(_QWORD*)(result + 44) = 1065353216;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d498,
                                  memory_order_acquire);
  v5 = GameData_212d490;
  if ((explicit & 1) == 0) {
    v18 = result;
    v21 = a2;
    v19 = (_QWORD*)(result + 24);
    v17 = GameRoutine_1a09fd0(GameData_212d498);
    v5 = GameData_212d490;
    a2 = v21;
    result = v18;
    v3 = v19;
    if (v17 != 0) {
      *GameData_212d490 = GameRoutine_540(0, "MapObjectModule", 15);
      GameRoutine_1a09fe0(GameData_212d498);
      v5 = GameData_212d490;
      result = v18;
      v3 = v19;
      a2 = v21;
    }
  }
  v6 = *v5;
  v7 = *(_QWORD*)(a2 + 512);
  v8 = v7;
  while (v8 != *(_QWORD*)(a2 + 504)) {
    v9 = *(_DWORD*)(v8 - 16);
    v8 -= 16;
    v7 -= 16;
    if (v9 == v6) {
      if (*(_QWORD*)(a2 + 512) != v7) {
        v10 = *(_QWORD*)(v7 + 8);
        goto LABEL_8;
      }
      break;
    }
  }
  v10 = 0;
LABEL_8:
  *(_QWORD*)(result + 32) = v10;
  v11 = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                             memory_order_acquire);
  v12 = GameData_212df08;
  if ((v11 & 1) == 0) {
    v22 = a2;
    v20 = v3;
    result = GameRoutine_1a09fd0(GameData_212df10);
    v12 = GameData_212df08;
    v3 = v20;
    a2 = v22;
    if ((_DWORD)result != 0) {
      *GameData_212df08 = GameRoutine_540(0, "ModelModule", 11);
      result = GameRoutine_1a09fe0(GameData_212df10);
      v12 = GameData_212df08;
      v3 = v20;
      a2 = v22;
    }
  }
  v13 = *(_QWORD*)(a2 + 512);
  v14 = v13;
  while (v14 != *(_QWORD*)(a2 + 504)) {
    v15 = *(_DWORD*)(v14 - 16);
    v14 -= 16;
    v13 -= 16;
    if (v15 == *v12) {
      if (*(_QWORD*)(a2 + 512) != v13) {
        v16 = *(_QWORD*)(v13 + 8);
        goto LABEL_15;
      }
      break;
    }
  }
  v16 = 0;
LABEL_15:
  *v3 = v16;
  return result;
}

__int64 GameHr_fefea0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;

  v2 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1072, 16, 0);
  GameRoutine_170b1f0(v2, "GiftTransportMenu");
  *v2 = GameData_1fff150;
  v2[132] = GameData_1fff6a8;
  v2[22] = GameData_1fff5d8;
  GameData_2232000 = 0;
  GameRoutine_657850(v2, GameData_212c730, "GiftTransportMenu", 1, a1);
  v4 = (_QWORD*)v2[32];
  v3 = (_QWORD*)v2[33];
  v2[42] = 0;
  while (v4 != v3) {
    if (*v4 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 8LL))(*v4);
      v3 = (_QWORD*)v2[33];
    }
    ++v4;
  }
  v5 = v2[43];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    v2[43] = 0;
  }
  v2[33] = v2[32];
  v2[30] = v2[29];
  (*(void (**)(_QWORD*))(*v2 + 1024LL))(v2);
  return (*(__int64 (**)(_QWORD*))(*v2 + 1032LL))(v2);
}

__int64 GameHr_ff32a0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = a1[16];
  v3 = GameData_212bf68;
  if (v1 != 0) {
    v4 = *(_QWORD*)GameData_212bf68;
    a1[17] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    GameRoutine_1a0a4e0(v4 + v5, (_QWORD)(v1));
  }
  v6 = a1[13];
  if (v6 != 0) {
    v7 = a1[14];
    if (v6 == v7) {
      goto LABEL_9;
    }
    do {
      v7 -= 152;
      GameRoutine_d5fd80(v7);
    } while (v7 != v6);
    v8 = a1[13];
    a1[14] = v6;
    if (v8 != 0) {
    LABEL_9:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v9 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v3 + v9, (_QWORD)(v6));
    }
  }
  v10 = a1[10];
  if (v10 != 0) {
    v11 = a1[11];
    if (v10 == v11) {
      goto LABEL_16;
    }
    do {
      v11 -= 80;
      GameRoutine_d5e6c0(v11);
    } while (v11 != v10);
    v12 = a1[10];
    a1[11] = v10;
    if (v12 != 0) {
    LABEL_16:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v3 + v13, (_QWORD)(v10));
    }
  }
  GameRoutine_d5f370(a1 + 6, a1[7]);
  GameRoutine_d5f370(a1 + 3, a1[4]);
  return GameRoutine_d5f370(a1, a1[1]);
}

char* GameHr_ff6d70(__int64* a1, char* a2, char* a3)
{
  unsigned __int64 v3;
  char* v4;
  char* v6;
  char* v8;
  unsigned __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  signed __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v4 = (char*)a1[1];
  v3 = a1[2];
  v6 = a2;
  if ((unsigned __int64)v4 >= v3) {
    v10 = (char*)*a1;
    v11 = ((__int64)&v4[-*a1] >> 3) + 1;
    if (v11 >> 61 != 0) {
      GameRoutine_65c760_alt1();
    }
    v12 = v3 - (_QWORD)v10;
    v13 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v12 >> 2 > v11) {
      v11 = v12 >> 2;
    }
    v20 = (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL;
    v14 = 0x1FFFFFFFFFFFFFFFLL;
    if (!v20) {
      v14 = v11;
    }
    if (v14 != 0) {
      if (v14 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v15 = 8 * v14;
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
    }
    else {
      v15 = 0;
      v16 = 0;
    }
    v17 = v16 + v15;
    v18 = (char*)(v16 + v6 - v10);
    if (v6 - v10 == v15) {
      if (v6 == v10) {
        v21 = fw_memory_HeapManager_Allocate(*v13, 8, 16, 0);
        v17 = v21 + 8;
        v18 = (char*)v21;
        if (v16 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*v13 + 200) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(*v13 + v22, v16);
          v4 = (char*)a1[1];
        }
      }
      else {
        v18 -= 8 * ((((v6 - v10) >> 3) + 1 +
                     ((unsigned __int64)(((v6 - v10) >> 3) + 1) >> 63)) >>
                    1);
      }
    }
    v23 = v4 - v6;
    *(_QWORD*)v18 = *(_QWORD*)a3;
    memcpy((__int64)(v18 + 8), (__int64)v6, v4 - v6);
    v24 = *a1;
    a1[1] = (__int64)v6;
    v25 = (unsigned __int64)&v6[-v24];
    v26 = v18 - &v6[-v24];
    memcpy(v26, v24, v25);
    v27 = *a1;
    *a1 = v26;
    a1[1] = (__int64)&v18[v23 + 8];
    a1[2] = v17;
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v28, v27);
    }
    return v18;
  }
  else if (a2 == v4) {
    *(_QWORD*)v4 = *(_QWORD*)a3;
    a1[1] = (__int64)(v4 + 8);
  }
  else {
    v8 = a2 + 8;
    if ((unsigned __int64)v4 < 8) {
      v9 = a1[1];
    }
    else {
      *(_QWORD*)v4 = *((_QWORD*)v4 - 1);
      v9 = (unsigned __int64)(v4 + 8);
    }
    a1[1] = v9;
    if (v4 != v8) {
      memmove((__int64)(a2 + 8), (__int64)a2, v4 - v8);
      v9 = a1[1];
    }
    v19 = 8;
    v20 = (unsigned __int64)a3 < v9 && a3 >= v6;
    if (!v20) {
      v19 = 0;
    }
    *(_QWORD*)v6 = *(_QWORD*)&a3[v19];
  }
  return v6;
}

void GameHr_ff7060(__int64 a1, __int64 a2)
{
  int v4;
  int v5;

  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 664) = 0;
  *(_BYTE*)(a1 + 672) = 0;
  *(_BYTE*)(a1 + 736) = 0;
  *(_BYTE*)(a1 + 744) = 0;
  *(_BYTE*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  memset(a1 + 56, 0, 0x1ECu);
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_BYTE*)(a1 + 600) = 0;
  *(_DWORD*)(a1 + 816) = 0;
  GameRoutine_e08050_alt1((__int64*)a1, a2);
  game_hub_e08150(a1, a1 + 88, (const char**)(a2 + 32));
  game_hub_e08150(a1, a1 + 112, (const char**)(a2 + 40));
  GameHr_e08260(a1, (__int64*)(a1 + 136), (unsigned __int16*)(a2 + 48));
  GameHr_e08260(a1, (__int64*)(a1 + 160), (unsigned __int16*)(a2 + 64));
  *(_DWORD*)(a1 + 184) = *(_DWORD*)(a2 + 80);
  *(_DWORD*)(a1 + 188) = *(_DWORD*)(a2 + 84);
  *(_DWORD*)(a1 + 192) = *(_DWORD*)(a2 + 88);
  *(_DWORD*)(a1 + 196) = *(_DWORD*)(a2 + 92);
  game_hub_e08150(a1, a1 + 200, (const char**)(a2 + 96));
  GameHr_e08260(a1, (__int64*)(a1 + 224), (unsigned __int16*)(a2 + 104));
  game_hub_e08150(a1, a1 + 248, (const char**)(a2 + 120));
  GameHr_e08260(a1, (__int64*)(a1 + 272), (unsigned __int16*)(a2 + 128));
  game_hub_e08150(a1, a1 + 296, (const char**)(a2 + 144));
  GameHr_e08260(a1, (__int64*)(a1 + 320), (unsigned __int16*)(a2 + 152));
  game_hub_e08150(a1, a1 + 344, (const char**)(a2 + 168));
  GameHr_e08260(a1, (__int64*)(a1 + 368), (unsigned __int16*)(a2 + 176));
  game_hub_e08150(a1, a1 + 392, (const char**)(a2 + 192));
  GameHr_e08260(a1, (__int64*)(a1 + 416), (unsigned __int16*)(a2 + 200));
  game_hub_e08150(a1, a1 + 440, (const char**)(a2 + 216));
  GameHr_e08260(a1, (__int64*)(a1 + 464), (unsigned __int16*)(a2 + 224));
  game_hub_e08150(a1, a1 + 488, (const char**)(a2 + 240));
  game_hub_e08150(a1, a1 + 568, (const char**)(a2 + 248));
  GameHr_e08260(a1, (__int64*)(a1 + 512), (unsigned __int16*)(a2 + 256));
  *(_DWORD*)(a1 + 536) = *(unsigned __int8*)(a2 + 272) == 1;
  if (*(_BYTE*)(a2 + 273) == 1) {
    v4 = 1;
  }
  else {
    v4 = 2;
  }
  if (*(_BYTE*)(a2 + 273) != 0) {
    v5 = v4;
  }
  else {
    v5 = 0;
  }
  *(_DWORD*)(a1 + 540) = v5;
  *(_DWORD*)(a1 + 544) = *(unsigned __int8*)(a2 + 274) == 1;
}

__int64** GameHr_ff7280(__int64*** a1, unsigned __int8* a2, __int64** a3)
{
  __int64* v3;
  __int64** v4;
  unsigned __int64 v7;
  bool v8;
  __int64* v9;
  unsigned __int8* v10;
  __int64* v11;
  __int64** v12;
  unsigned __int64 v13;
  bool v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  int v20;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;

  v4 = (__int64**)(a1 + 1);
  v3 = (__int64*)a1[1];
  if (v3 != nullptr) {
    v7 = *a2;
    v8 = (v7 & 1) == 0;
    v9 = (__int64*)(v7 >> 1);
    if (v8) {
      v10 = a2 + 1;
    }
    else {
      v10 = *((unsigned __int8**)a2 + 2);
    }
    if (v8) {
      v11 = v9;
    }
    else {
      v11 = *((__int64**)a2 + 1);
    }
    while (1) {
      while (1) {
        v12 = (__int64**)v3;
        v13 = *((unsigned __int8*)v3 + 32);
        v14 = (v13 & 1) == 0;
        v15 = (__int64*)(v13 >> 1);
        v16 = v14 ? v15 : v12[5];
        v17 = v14 ? (__int64)v12 + 33 : (__int64)v12[6];
        v18 = (unsigned __int64)(v16 >= v11 ? v11 : v16);
        v19 = memcmp((__int64)v10, v17, v18);
        if (v19 != 0) {
          break;
        }
        if (v11 >= v16) {
          goto LABEL_22;
        }
      LABEL_8:
        v3 = *v12;
        v4 = v12;
        if (*v12 == nullptr) {
          goto LABEL_29;
        }
      }
      if (v19 < 0) {
        goto LABEL_8;
      }
    LABEL_22:
      v20 = memcmp(v17, (__int64)v10, v18);
      if (v20 != 0) {
        if ((v20 & 0x80000000) == 0) {
          return v12;
        }
      }
      else if (v16 >= v11) {
        return v12;
      }
      v3 = v12[1];
      if (v3 == nullptr) {
        v4 = v12 + 1;
        goto LABEL_29;
      }
    }
  }
  v12 = (__int64**)(a1 + 1);
LABEL_29:
  v21 = (__int64*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v22 = *a3;
  v23 = v21;
  if ((*(_BYTE*)*a3 & 1) != 0) {
    fw_text_String_CopyTerminated(v21 + 4, v22[2], v22[1]);
  }
  else {
    v24 = *v22;
    v25 = v22[1];
    v26 = v22[2];
    v21[5] = v25;
    v21[6] = v26;
    v21[4] = v24;
  }
  v23[8] = 0;
  v23[9] = 0;
  v23[7] = 0;
  v27 = v23;
  *v23 = 0;
  v23[1] = 0;
  v23[2] = (__int64)v12;
  *v4 = v23;
  v28 = **a1;
  if (v28 != nullptr) {
    *a1 = (__int64**)v28;
    v27 = *v4;
  }
  fw_containers_BalanceAfterInsert((__int64*)a1[1], v27);
  a1[2] = (__int64**)((char*)a1[2] + 1);
  return (__int64**)v23;
}

void GameHr_ff7420(unsigned __int8** a1, __int64* a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int8* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int8* v27;
  __int64 v28;
  unsigned __int8* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    __int64 v39;
    int v40;
  } v37_;

  v2 = *a1;
  v3 = a1[1];
  if (*a1 != v3) {
    v7 = *a2;
    v6 = a2[1];
    while (1) {
      v8 = *v2;
      v9 = *((_QWORD*)v2 + 1);
      if ((v8 & 1) == 0) {
        v9 = v8 >> 1;
      }
      if (v6 == v9) {
        v10 = (v8 & 1) != 0 ? *((_QWORD*)v2 + 2) : (__int64)(v2 + 1);
        if (memcmp(v7, v10, v6) == 0) {
          break;
        }
      }
      v2 += 32;
      if (v2 == v3) {
        goto LABEL_14;
      }
    }
  }
  if (v2 == v3) {
    v7 = *a2;
    v6 = a2[1];
  LABEL_14:
    v37_.v40 = 0;
    v37_.v38 = 0;
    v37_.v39 = 0;
    v37_.v37 = 0;
    GameRoutine_60a060_alt1((char*)&v37_.v37, v7, v6);
    v37_.v40 = 1;
    v12 = a1[1];
    v11 = a1[2];
    if (v12 >= v11) {
      v15 = (__int64)*a1;
      v16 = v12 - *a1;
      v17 = v16 >> 5;
      v18 = (v16 >> 5) + 1;
      if (v18 >> 59 != 0) {
        GameRoutine_ff78c0_alt1();
      }
      v19 = (__int64)&v11[-v15];
      v20 = fw_memory_g_heap_manager_ptr;
      if (v19 >> 4 > v18) {
        v18 = v19 >> 4;
      }
      if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFE0LL) {
        v21 = 0x7FFFFFFFFFFFFFFLL;
      }
      else {
        v21 = v18;
      }
      if (v21 != 0) {
        if (v21 >> 59 != 0) {
          GameRoutine_60a210_alt1();
        }
        v22 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v21, 16, 0);
      }
      else {
        v22 = 0;
      }
      v24 = v22 + v16;
      if ((v37_.v37 & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)v24, v37_.v39, v37_.v38);
        v15 = (__int64)*a1;
        v12 = a1[1];
        v17 = (v12 - *a1) >> 5;
      }
      else {
        v25 = v37_.v38;
        *(_QWORD*)v24 = v37_.v37;
        *(_QWORD*)(v24 + 8) = v25;
        *(_QWORD*)(v24 + 16) = v37_.v39;
      }
      v26 = v22 + 32 * v21;
      v23 = (unsigned __int8*)(v24 + 32);
      *(_DWORD*)(v24 + 24) = v37_.v40;
      v27 = (unsigned __int8*)(v24 - 32 * v17);
      if ((unsigned __int8*)v15 != v12) {
        v28 = v15;
        v29 = v27;
        do {
          v30 = *(_QWORD*)v28;
          v31 = *(_QWORD*)(v28 + 16);
          *((_QWORD*)v29 + 1) = *(_QWORD*)(v28 + 8);
          *((_QWORD*)v29 + 2) = v31;
          *(_QWORD*)v29 = v30;
          *(_QWORD*)(v28 + 8) = 0;
          *(_QWORD*)(v28 + 16) = 0;
          *(_QWORD*)v28 = 0;
          LODWORD(v30) = *(_DWORD*)(v28 + 24);
          v28 += 32;
          *((_DWORD*)v29 + 6) = v30;
          v29 += 32;
        } while ((unsigned __int8*)v28 != v12);
        do {
          if ((*(_BYTE*)v15 & 1) != 0) {
            v32 = *(_QWORD*)(v15 + 16);
            if (v32 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
                v33 = 128;
              }
              else {
                v33 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v33, v32);
            }
          }
          v15 += 32;
        } while ((unsigned __int8*)v15 != v12);
        v15 = (__int64)*a1;
      }
      *a1 = v27;
      a1[1] = v23;
      a1[2] = (unsigned __int8*)v26;
      if (v15 != 0) {
        v34 = 128;
        if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v34, v15);
      }
    }
    else {
      if ((v37_.v37 & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)a1[1], v37_.v39, v37_.v38);
      }
      else {
        v13 = v37_.v37;
        v14 = v37_.v39;
        *((_QWORD*)v12 + 1) = v37_.v38;
        *((_QWORD*)v12 + 2) = v14;
        *(_QWORD*)v12 = v13;
      }
      v23 = v12 + 32;
      *((_DWORD*)v12 + 6) = v37_.v40;
    }
    v35 = v37_.v37;
    a1[1] = v23;
    if ((v35 & 1) != 0 && v37_.v39 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v37_.v39);
    }
  }
  else {
    ++*((_DWORD*)v2 + 6);
  }
}

__int64 GameHr_ff9f20(_QWORD* a1)
{
  __int64* v1;
  __int64* v2;
  __int64 result;
  _QWORD* v5;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  int v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  char* v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  char* v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  unsigned int v24;
  int v25;
  unsigned int v26;

  v1 = (__int64*)a1[3];
  v2 = (__int64*)a1[4];
  if (v1 != v2) {
    LODWORD(result) = 0;
    v5 = *(_QWORD**)GameData_212c6a0[0];
    v6 = *(char**)(*(_QWORD*)GameData_212c6a0[0] + 736LL);
    v7 = *(char**)(*(_QWORD*)GameData_212c6a0[0] + 728LL);
    v8 = v6 - v7 - 8;
    while (1) {
      v10 = *v1;
      if (v7 == v6) {
        goto LABEL_22;
      }
      v11 = *(char**)(*(_QWORD*)GameData_212c6a0[0] + 728LL);
      if ((v8 & 0x18) == 0x18) {
      LABEL_10:
        if (v8 < 0x18) {
          goto LABEL_22;
        }
        v11 += 16;
        while (1) {
          if (*((_QWORD*)v11 - 2) == v10) {
            v11 -= 16;
            goto LABEL_21;
          }
          if (*((_QWORD*)v11 - 1) == v10) {
            v11 -= 8;
            goto LABEL_21;
          }
          if (*(_QWORD*)v11 == v10) {
            goto LABEL_21;
          }
          if (*((_QWORD*)v11 + 1) == v10) {
            break;
          }
          v13 = v11 + 16;
          v11 += 32;
          if (v13 == v6) {
            goto LABEL_22;
          }
        }
        v11 += 8;
      }
      else {
        v12 = ((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 3;
        v11 = *(char**)(*(_QWORD*)GameData_212c6a0[0] + 728LL);
        while (*(_QWORD*)v11 != v10) {
          v11 += 8;
          if (--v12 == 0) {
            goto LABEL_10;
          }
        }
      }
    LABEL_21:
      if (v6 != v11) {
        goto LABEL_56;
      }
    LABEL_22:
      v14 = (char*)v5[95];
      v15 = (char*)v5[94];
      if (v15 == v14) {
        goto LABEL_39;
      }
      v16 = v14 - v15 - 8;
      if ((~(_BYTE)v16 & 0x18) != 0) {
        v17 = ((unsigned __int8)((unsigned int)v16 >> 3) + 1) & 3;
        while (*(_QWORD*)v15 != v10) {
          v15 += 8;
          if (--v17 == 0) {
            goto LABEL_27;
          }
        }
      }
      else {
      LABEL_27:
        if (v16 < 0x18) {
          goto LABEL_39;
        }
        v15 += 16;
        while (1) {
          if (*((_QWORD*)v15 - 2) == v10) {
            v15 -= 16;
            goto LABEL_38;
          }
          if (*((_QWORD*)v15 - 1) == v10) {
            v15 -= 8;
            goto LABEL_38;
          }
          if (*(_QWORD*)v15 == v10) {
            goto LABEL_38;
          }
          if (*((_QWORD*)v15 + 1) == v10) {
            break;
          }
          v18 = v15 + 16;
          v15 += 32;
          if (v18 == v14) {
            goto LABEL_39;
          }
        }
        v15 += 8;
      }
    LABEL_38:
      if (v14 != v15) {
        goto LABEL_56;
      }
    LABEL_39:
      v19 = (char*)v5[98];
      v20 = (char*)v5[97];
      if (v20 != v19) {
        v21 = v19 - v20 - 8;
        if ((~(_BYTE)v21 & 0x18) != 0) {
          v22 = ((unsigned __int8)((unsigned int)v21 >> 3) + 1) & 3;
          while (*(_QWORD*)v20 != v10) {
            v20 += 8;
            if (--v22 == 0) {
              goto LABEL_44;
            }
          }
        LABEL_55:
          if (v19 != v20) {
          LABEL_56:
            v9 = 0;
            goto LABEL_4;
          }
        }
        else {
        LABEL_44:
          if (v21 >= 0x18) {
            v20 += 16;
            while (1) {
              if (*((_QWORD*)v20 - 2) == v10) {
                if (v19 != v20 - 16) {
                  goto LABEL_56;
                }
                goto LABEL_3;
              }
              if (*((_QWORD*)v20 - 1) == v10) {
                v20 -= 8;
                goto LABEL_55;
              }
              if (*(_QWORD*)v20 == v10) {
                goto LABEL_55;
              }
              if (*((_QWORD*)v20 + 1) == v10) {
                break;
              }
              v23 = v20 + 16;
              v20 += 32;
              if (v23 == v19) {
                goto LABEL_3;
              }
            }
            if (v19 != v20 + 8) {
              goto LABEL_56;
            }
          }
        }
      }
    LABEL_3:
      v9 = 1;
    LABEL_4:
      result = (unsigned int)(v9 + result);
      if (++v1 == v2) {
        goto LABEL_60;
      }
    }
  }
  result = 0;
LABEL_60:
  if (GameData_21caab0 != 0 && *(_DWORD*)(GameData_21caab0 + 60) == 3) {
    v24 = result;
    v25 = GameRoutine_1a09d30(a1[1], &GameData_1aee5d5);
    if (v24 <= 1) {
      v26 = 1;
    }
    else {
      v26 = v24;
    }
    if (v25 != 0) {
      return v24;
    }
    else {
      return v26;
    }
  }
  return result;
}

void GameHr_ffc180(_QWORD* a1, _QWORD* a2, __int64 a3)
{
  _QWORD* v4;
  _QWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a1 != a2) {
    v4 = a1;
    v5 = a1;
    do {
      *(_QWORD*)a3 = *v5;
      *(_QWORD*)(a3 + 8) = v5[1];
      *(_DWORD*)(a3 + 16) = *((_DWORD*)v5 + 4);
      v6 = *((_DWORD*)v5 + 5);
      *(_QWORD*)(a3 + 24) = 0;
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_DWORD*)(a3 + 20) = v6;
      *(_QWORD*)(a3 + 24) = v5[3];
      *(_QWORD*)(a3 + 32) = v5[4];
      *(_QWORD*)(a3 + 40) = v5[5];
      v5[4] = 0;
      v5[5] = 0;
      v5[3] = 0;
      *(_QWORD*)(a3 + 56) = 0;
      *(_QWORD*)(a3 + 64) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_QWORD*)(a3 + 48) = v5[6];
      *(_QWORD*)(a3 + 56) = v5[7];
      *(_QWORD*)(a3 + 64) = v5[8];
      v5[7] = 0;
      v5[8] = 0;
      v5[6] = 0;
      v5 += 9;
      a3 += 72;
    } while (v5 != a2);
    v7 = fw_memory_g_heap_manager_ptr;
    do {
      v8 = v4[6];
      if (v8 != 0) {
        v4[7] = v8;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9, v8);
      }
      v10 = v4[3];
      if (v10 != 0) {
        v4[4] = v10;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v11, v10);
      }
      v4 += 9;
    } while (v4 != a2);
  }
}

_QWORD* GameHr_ffc2b0(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v3 = (_QWORD*)a1;
  *(_QWORD*)a1 = *(_QWORD*)a2;
  *(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 16);
  v4 = *(_DWORD*)(a2 + 20);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_DWORD*)(a1 + 20) = v4;
  v6 = *(_QWORD*)(a2 + 24);
  v5 = *(_QWORD*)(a2 + 32);
  v7 = (_QWORD*)GameData_212bf68;
  v8 = v5 - v6;
  if (v5 != v6) {
    if (v8 < 0) {
      goto LABEL_8;
    }
    v9 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v5 - v6, 16, 0);
    v10 = v9 + v8;
    v3[3] = v9;
    v3[4] = v9;
    v3[5] = v9 + v8;
    a1 = GameRoutine_1a0b950(v9, v6, v8);
    v3[4] = v10;
  }
  v3[7] = 0;
  v3[8] = 0;
  v3[6] = 0;
  v12 = *(_QWORD*)(a2 + 48);
  v11 = *(_QWORD*)(a2 + 56);
  v13 = v11 - v12;
  if (v11 != v12) {
    if ((v13 & 0x8000000000000000LL) == 0) {
      v14 = GameRoutine_651b90(*v7, v11 - v12, 16, 0);
      v15 = v14 + v13;
      v3[6] = v14;
      v3[7] = v14;
      v3[8] = v14 + v13;
      GameRoutine_1a0b950(v14, v12, v13);
      v3[7] = v15;
      return v3;
    }
  LABEL_8:
    GameRoutine_65c760(a1);
  }
  return v3;
}

__int64 GameHr_ffc5d0()
{
  _QWORD* v0;
  __int64 v1;
  __int64 result;
  _QWORD v3[2];

  if (GameData_21caab0 == 0) {
    return 0;
  }
  if (*(_DWORD*)(GameData_21caab0 + 60) != 3) {
    return 0;
  }
  v0 = (_QWORD*)GameRoutine_82e5c0(4);
  v1 = v0[1];
  v3[0] = *v0;
  v3[1] = v1;
  if (v3[0] == 0 || GameData_21caab0 == 0) {
    return 0;
  }
  result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v3);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 GameHr_ffd6f0(__int64 a1)
{
  if (GameRoutine_1a0a060(a1, &GameData_1ac0b57) != 0) {
    return 3;
  }
  if (GameRoutine_1a0a060(a1, &GameData_1aee641) != 0) {
    return 2;
  }
  return GameRoutine_1a0a060(a1, &GameData_1ae6bf6) != 0;
}

__int64 GameHr_ffe000(unsigned __int64* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 result;
  __int64 v10;

  v1 = *a1;
  if (*a1 != 0) {
    v2 = *(_QWORD*)(GameData_21ca080 + 96);
    if (v2 != 0 && *(_QWORD*)(GameData_21ca080 + 112) != 0) {
      v4 = v2 - 1;
      if ((v2 & (v2 - 1)) != 0) {
        v5 = *a1;
        if (v1 >= v2) {
          v5 = v1 % v2;
        }
      }
      else {
        v5 = v4 & v1;
      }
      v6 = *(_QWORD**)(*(_QWORD*)(GameData_21ca080 + 88) + 8 * v5);
      if (v6 != nullptr) {
        v7 = (_QWORD*)*v6;
        if (v7 != nullptr) {
          if ((v2 & v4) == 0) {
            while (1) {
              v10 = v7[1];
              if (v10 == v1) {
                if (v7[2] == v1) {
                  return v7[3];
                }
              }
              else if ((v10 & v4) != v5) {
                return 0;
              }
              v7 = (_QWORD*)*v7;
              result = 0;
              if (v7 == nullptr) {
                return result;
              }
            }
          }
          do {
            v8 = v7[1];
            if (v8 == v1) {
              if (v7[2] == v1) {
                return v7[3];
              }
            }
            else {
              if (v8 >= v2) {
                v8 %= v2;
              }
              if (v8 != v5) {
                return 0;
              }
            }
            v7 = (_QWORD*)*v7;
          } while (v7 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 GameHr_ffe100(int a1, __int64 a2)
{
  __int64 v4;

  v4 = GameRoutine_1a09c70(a2);
  return GameRoutine_ffd760(a1, a2, v4, 1);
}

__int64 GameHr_fffcb0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2232920,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_2232920) != 0) {
    GameData_2232280 = 1;
    GameData_22323c0 = 3;
    GameData_2232238 = 0;
    GameData_2232240 = 0;
    GameData_2232248 = 0;
    GameData_22324b0 = (__int64)GameRoutine_1000940;
    GameData_2232228 = 0;
    GameData_2232230 = (__int64)GameRoutine_1000470;
    GameData_2232220 = 13;
    GameData_22322a8 = 0;
    GameData_22322b0 = (__int64)GameRoutine_1000500;
    GameData_22323e8 = 0;
    GameData_22323f0 = (__int64)GameRoutine_1000700;
    GameData_22324f0 = (__int64)GameRoutine_10009e0;
    GameData_2232250 = 0;
    GameData_2232328 = 0;
    GameData_2232330 = (__int64)GameRoutine_10005c0;
    GameData_2232430 = (__int64)GameRoutine_1000880;
    GameData_2232258 = 0;
    GameData_2232260 = 2;
    GameData_2232268 = 0;
    GameData_2232270 = 0;
    GameData_2232278 = 0;
    GameData_2232288 = 0;
    GameData_2232290 = 0;
    GameData_2232298 = 0;
    GameData_22322a0 = 13;
    GameData_22322b8 = 0;
    GameData_22322c0 = 0;
    GameData_22322c8 = 0;
    GameData_22322d0 = 0;
    GameData_22322d8 = 0;
    GameData_22322e0 = 2;
    GameData_22322f0 = 0;
    GameData_22322f8 = 0;
    GameData_22322e8 = 0;
    GameData_2232300 = 2;
    GameData_2232308 = 0;
    GameData_2232310 = 0;
    GameData_2232318 = 0;
    GameData_2232320 = 13;
    GameData_2232338 = 0;
    GameData_2232340 = 0;
    GameData_2232348 = 0;
    GameData_2232350 = 0;
    GameData_2232358 = 0;
    GameData_2232360 = 12;
    GameData_2232368 = 0;
    GameData_2232370 = 0;
    GameData_2232378 = 0;
    GameData_2232380 = 6;
    GameData_2232388 = 0;
    GameData_2232390 = 0;
    GameData_2232398 = 0;
    GameData_22323a0 = 2;
    GameData_22323a8 = 0;
    GameData_22323b0 = 0;
    GameData_22323b8 = 0;
    GameData_22323c8 = 0;
    GameData_22323d0 = 0;
    GameData_22323d8 = 0;
    GameData_22323e0 = 13;
    GameData_22323f8 = 0;
    GameData_2232400 = 0;
    GameData_2232408 = 0;
    GameData_2232410 = 0;
    GameData_2232418 = 0;
    GameData_2232420 = 13;
    GameData_2232428 = 0;
    GameData_2232438 = 0;
    GameData_2232440 = 0;
    GameData_2232448 = 0;
    GameData_2232450 = 0;
    GameData_2232458 = 0;
    GameData_2232460 = 2;
    GameData_2232478 = 0;
    GameData_2232470 = 0;
    GameData_2232468 = 0;
    GameData_2232480 = 4;
    GameData_2232488 = 0;
    GameData_2232490 = 0;
    GameData_2232498 = 0;
    GameData_22324a0 = 13;
    GameData_22324a8 = 0;
    GameData_22324b8 = 0;
    GameData_22324c0 = 0;
    GameData_22324c8 = 0;
    GameData_22324d0 = 0;
    GameData_22324d8 = 0;
    GameData_22324e0 = 13;
    GameData_22324e8 = 0;
    GameData_22324f8 = 0;
    GameData_2232500 = 0;
    GameData_2232508 = 0;
    GameData_2232510 = 0;
    GameData_2232518 = 0;
    GameData_2232520 = 19;
    GameData_2232530 = (__int64)GameData_212c6d0[0];
    GameData_2232540 = 1500;
    GameData_2232528 = 0;
    GameData_2232548 = 0;
    GameData_2232550 = 0;
    GameData_2232558 = 0;
    GameData_2232568 = 0;
    GameData_2232560 = 10;
    GameData_22325e0 = 4;
    GameData_2232580 = 0;
    GameData_2232588 = 0;
    GameData_2232590 = 0;
    GameData_2232598 = 0;
    GameData_22325a0 = 13;
    GameData_22325a8 = 0;
    GameData_22325b0 = (__int64)GameRoutine_1000ac0;
    GameData_22325b8 = 0;
    GameData_22325c0 = 0;
    GameData_22325c8 = 0;
    GameData_22325d0 = 0;
    GameData_22325d8 = 0;
    GameData_2232608 = 0;
    GameData_2232600 = 0;
    GameData_22325f8 = 0;
    GameData_22325f0 = 0;
    GameData_22325e8 = 0;
    GameData_2232618 = 0;
    GameData_2232620 = 13;
    GameData_2232628 = 0;
    GameData_2232638 = 0;
    GameData_2232640 = 0;
    GameData_2232648 = 0;
    GameData_2232610 = 1300;
    GameData_2232650 = 0;
    GameData_2232658 = 0;
    GameData_2232660 = 19;
    GameData_2232668 = 0;
    GameData_2232630 = (__int64)GameRoutine_1000bf0;
    GameData_2232570 = (__int64)GameData_212c720;
    GameData_2232760 = 13;
    GameData_22327a0 = 13;
    GameData_22327e0 = 13;
    GameData_22328a0 = 13;
    GameData_2232688 = 0;
    GameData_2232690 = 0;
    GameData_2232698 = 0;
    GameData_22326a0 = 10;
    GameData_22326a8 = 0;
    GameData_22326b0 = (__int64)GameData_212c720;
    GameData_22326c0 = 0;
    GameData_22326c8 = 0;
    GameData_22326d0 = 0;
    GameData_22326d8 = 0;
    GameData_22326e0 = 12;
    GameData_22326f8 = 0;
    GameData_22326f0 = 0;
    GameData_22326e8 = 0;
    GameData_2232708 = 0;
    GameData_2232710 = 0;
    GameData_2232718 = 0;
    GameData_2232720 = 2;
    GameData_2232728 = 0;
    GameData_2232730 = 0;
    GameData_2232738 = 0;
    GameData_2232748 = 0;
    GameData_2232750 = 0;
    GameData_2232758 = 0;
    GameData_2232768 = 0;
    GameData_2232778 = 0;
    GameData_2232780 = 0;
    GameData_2232788 = 0;
    GameData_2232790 = 0;
    GameData_2232798 = 0;
    GameData_22327a8 = 0;
    GameData_22327b8 = 0;
    GameData_22327c0 = 0;
    GameData_22327c8 = 0;
    GameData_22327d0 = 0;
    GameData_22327d8 = 0;
    GameData_22327e8 = 0;
    GameData_22327f8 = 0;
    GameData_2232800 = 0;
    GameData_2232808 = 0;
    GameData_2232810 = 0;
    GameData_2232818 = 0;
    GameData_2232820 = 12;
    GameData_2232838 = 0;
    GameData_2232830 = 0;
    GameData_2232828 = 0;
    GameData_2232840 = 6;
    GameData_2232848 = 0;
    GameData_2232850 = 0;
    GameData_2232858 = 0;
    GameData_2232860 = 2;
    GameData_2232868 = 0;
    GameData_2232870 = 0;
    GameData_2232878 = 0;
    GameData_2232880 = 6;
    GameData_2232888 = 0;
    GameData_2232890 = 0;
    GameData_2232898 = 0;
    GameData_22328a8 = 0;
    GameData_22328b0 = (__int64)GameRoutine_1000e70;
    GameData_22328b8 = 0;
    GameData_22328c0 = 0;
    GameData_22328c8 = 0;
    GameData_22328d0 = 0;
    GameData_22328d8 = 0;
    GameData_22328e0 = 0;
    GameData_2232908 = 0;
    GameData_2232910 = 0;
    GameData_2232918 = 0;
    GameData_2232900 = 0;
    GameData_22328f8 = 0;
    GameData_22328f0 = 0;
    GameData_22328e8 = 0;
    GameData_2232670 = (__int64)GameData_212d060[0];
    GameData_2232680 = 250;
    GameData_2232700 = 5;
    GameData_2232740 = 5;
    GameData_2232770 = (__int64)GameRoutine_1000c00;
    GameData_22327b0 = (__int64)GameRoutine_1000c20;
    GameData_22327f0 = (__int64)GameRoutine_1000ce0;
    GameRoutine_1a09fe0(&GameData_2232920);
  }
  v2 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 240, 16, 0);
  v3 = GameData_212c608[0];
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_WORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = "NULL";
  *(_QWORD*)(v2 + 138) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)v2 = v3 + 16;
  *(_QWORD*)(v2 + 8) = 0;
  GameRoutine_65a7c0();
  *(_QWORD*)(v2 + 152) = 0;
  *(_QWORD*)(v2 + 192) = 0;
  *(_BYTE*)(v2 + 208) = 0;
  *(_QWORD*)(v2 + 216) = 0;
  GameData_2232928 = v2;
  *(_QWORD*)v2 = GameData_20002b8;
  *(_DWORD*)(v2 + 224) = 0x2000;
  return GameRoutine_657850(v2, &GameData_2232220, "ProcHubSeqDngBunquet", 1,
                            a1);
}

__int64 GameHr_1000470(__int64 result)
{
  int v1;

  if ((*(_BYTE*)(result + 208) & 1) == 0) {
    *(_BYTE*)(result + 208) = 1;
    if (GameData_21f3cb8 != 0) {
      GameRoutine_d8ce40(GameData_21f3cb8);
    }
    result = GameData_21f3d10;
    if (GameData_21f3d10 != 0 && (*(_BYTE*)(GameData_21f3d10 + 769) & 1) == 0) {
      *(_BYTE*)(GameData_21f3d10 + 769) = 1;
      v1 = *(_DWORD*)(result + 168);
      *(_DWORD*)(result + 168) = v1 + 1;
      if (v1 == 0) {
        return (**(__int64 (***)(__int64))(result + 160))(result + 160);
      }
    }
  }
  return result;
}

void GameHr_10005c0(__int64 a1, __int64 a2)
{
  unsigned int v3;
  const char* v4;
  int v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    unsigned __int64 v12;
    char* v13;
  } v11_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  char* v16;

  v11_.v12 = 0;
  v11_.v13 = nullptr;
  v11_.v11 = 0;
  v3 = (unsigned __int16)game_10001c0(a1, a2);
  if (v3 >= 0x10) {
    LOWORD(v11_.v11) = 0;
  }
  else {
    if (v3 >= 8) {
      v4 = "MID_Dungeon_Banquet_FindEnemy";
    }
    else if (v3 >= 4) {
      v4 = "MID_Dungeon_Banquet_Complete";
    }
    else {
      if (v3 < 2) {
        goto LABEL_10;
      }
      v4 = "MID_Dungeon_Banquet_NotMaterial";
    }
    GameRoutine_60a020_alt2((char*)&v11_.v11, v4);
  }
LABEL_10:
  v5 = v11_.v11 & 1;
  v6 = (unsigned __int64)(unsigned __int8)v11_.v11 >> 1;
  if (v5 != 0) {
    v6 = v11_.v12;
  }
  if (v6 != 0) {
    if (v5 != 0) {
      v7 = v11_.v13;
    }
    else {
      v7 = (char*)&v11_.v11 + 1;
    }
    v16 = v7;
    v8 = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, (__int64)&v16);
    if (v8 == 0) {
      goto LABEL_22;
    }
    v14_.v15 = nullptr;
    GameRoutine_6680e0_alt1(v14_.v14, (_QWORD*)(v8 + 1248));
    if (v14_.v15 == v14_.v14) {
      v9 = 32;
    }
    else {
      if (v14_.v15 == nullptr) {
      LABEL_22:
        v5 = v11_.v11 & 1;
        goto LABEL_23;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v14_.v15 + v9))((__int64)v14_.v15);
    goto LABEL_22;
  }
LABEL_23:
  if (v5 != 0 && v11_.v13 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  (__int64)v11_.v13);
  }
}

__int64 GameHr_1000700(__int64 a1)
{
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  _BYTE* v8;
  char v9;

  v2 = *GameData_212ebc0[0];
  if (*GameData_212ebc0[0] != 0) {
    if ((*(_BYTE*)(v2 + 161) & 1) == 0) {
      *(_BYTE*)(v2 + 161) = 1;
      v3 = *(_DWORD*)(v2 + 176);
      *(_DWORD*)(v2 + 176) = v3 + 1;
      if (v3 == 0) {
        (**(void (***)(__int64))(v2 + 168))(v2 + 168);
      }
      GameRoutine_d799f0(v2);
    }
    if ((*(_BYTE*)(v2 + 162) & 1) == 0) {
      *(_BYTE*)(v2 + 162) = 1;
      v4 = *(_DWORD*)(v2 + 192);
      *(_DWORD*)(v2 + 192) = v4 + 1;
      if (v4 == 0) {
        (**(void (***)(__int64))(v2 + 184))(v2 + 184);
      }
      GameRoutine_d799f0(v2);
    }
  }
  v5 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 448, 16, 0);
  GameRoutine_163fd00();
  v6 = *(_QWORD*)(a1 + 40);
  if (v6 != 0) {
    *(_QWORD*)(v6 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "GmapBanquetMenu";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) = GameRoutine_7a8520();
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  *(_QWORD*)(v5 + 8) = &GameData_2175550;
  *(_QWORD*)(v5 + 16) = &GameData_2175550;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5);
  if ((result & 1) != 0 && (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v8 = *(_BYTE**)(v5 + 32);
  v9 = v8[138];
  if (v9 == 0) {
    result =
        (*(__int64 (**)(_QWORD))(*(_QWORD*)v8 + 64LL))(*(_QWORD*)(v5 + 32));
    v9 = v8[138];
  }
  v8[138] = v9 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  return result;
}

__int64 GameHr_1000e70(__int64 result, long double a2)
{
  if (*(_BYTE*)(result + 208) != 0) {
    *(_BYTE*)(result + 208) = 0;
    result = GameData_21f3cb8;
    if (GameData_21f3cb8 != 0) {
      return GameRoutine_d8cf60(GameData_21f3cb8, a2);
    }
  }
  return result;
}

__int64 GameHr_1001190(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22330f0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_22330f0) != 0) {
    GameData_2232930 = 19;
    GameData_2232950 = 500;
    GameData_2232958 = 0;
    GameData_22329b8 = 0;
    GameData_22329c0 = (__int64)GameRoutine_10017b0;
    GameData_2232960 = 0;
    GameData_2232968 = 0;
    GameData_2232970 = 10;
    GameData_2232990 = 0;
    GameData_2232998 = 0;
    GameData_22329a0 = 0;
    GameData_22329a8 = 0;
    GameData_22329b0 = 13;
    GameData_22329c8 = 0;
    GameData_22329d0 = 0;
    GameData_22329d8 = 0;
    GameData_22329e0 = 0;
    GameData_22329e8 = 0;
    GameData_22329f0 = 13;
    GameData_2232a08 = 0;
    GameData_2232a10 = 0;
    GameData_2232a18 = 0;
    GameData_2232a20 = 0;
    GameData_2232a28 = 0;
    GameData_2232a30 = 13;
    GameData_2232a48 = 0;
    GameData_2232a50 = 0;
    GameData_2232a58 = 0;
    GameData_22329f8 = 0;
    GameData_2232a00 = (__int64)GameRoutine_1001800;
    GameData_2232a60 = 0;
    GameData_2232a68 = 0;
    GameData_2232a70 = 19;
    GameData_2232a38 = 0;
    GameData_2232a40 = (__int64)GameRoutine_1001960;
    GameData_2232938 = 0;
    GameData_2232940 = (__int64)GameData_212c6d0[0];
    GameData_2232978 = 0;
    GameData_2232980 = (__int64)GameData_212c720;
    GameData_2232b40 = (__int64)GameRoutine_1001a00;
    GameData_2232e70 = 10;
    GameData_2232a90 = 500;
    GameData_2232b20 = 500;
    GameData_2232fd0 = 500;
    GameData_2233020 = 500;
    GameData_2232e40 = (__int64)GameData_212c6d0[0];
    GameData_2232a98 = 0;
    GameData_2232aa0 = 0;
    GameData_2232aa8 = 0;
    GameData_2232ab0 = 2;
    GameData_2232ac0 = 0;
    GameData_2232ac8 = 0;
    GameData_2232ab8 = 0;
    GameData_2232ad0 = 1;
    GameData_2232ad8 = 0;
    GameData_2232ae0 = 0;
    GameData_2232ae8 = 0;
    GameData_2232af0 = 4;
    GameData_2232af8 = 0;
    GameData_2232b00 = 0;
    GameData_2232b08 = 0;
    GameData_2232b10 = 1;
    GameData_2232b18 = 0;
    GameData_2232b28 = 0;
    GameData_2232b30 = 13;
    GameData_2232b38 = 0;
    GameData_2232b48 = 0;
    GameData_2232b50 = 0;
    GameData_2232b58 = 0;
    GameData_2232b60 = 0;
    GameData_2232b68 = 0;
    GameData_2232b70 = 4;
    GameData_2232b88 = 0;
    GameData_2232b80 = 0;
    GameData_2232b78 = 0;
    GameData_2232b90 = 1;
    GameData_2232b98 = 0;
    GameData_2232ba8 = 0;
    GameData_2232bb0 = 13;
    GameData_2232bb8 = 0;
    GameData_2232bc8 = 0;
    GameData_2232bd0 = 0;
    GameData_2232bd8 = 0;
    GameData_2232be0 = 0;
    GameData_2232ba0 = 100;
    GameData_2232ec0 = (__int64)GameRoutine_1001fd0;
    GameData_2233040 = (__int64)GameRoutine_1002260;
    GameData_2232be8 = 0;
    GameData_2232bf0 = 4;
    GameData_2232bf8 = 0;
    GameData_2232bc0 = (__int64)GameRoutine_1001b60;
    GameData_2232f00 = (__int64)GameRoutine_1002180;
    GameData_2232c00 = 0;
    GameData_2232c08 = 0;
    GameData_2232c10 = 1;
    GameData_2232c18 = 0;
    GameData_2232c28 = 0;
    GameData_2232c30 = 13;
    GameData_2232c38 = 0;
    GameData_2232c20 = 1100;
    GameData_2232f40 = (__int64)GameRoutine_1002210;
    GameData_2232c48 = 0;
    GameData_2232c50 = 0;
    GameData_2232c58 = 0;
    GameData_2232c60 = 0;
    GameData_2232c68 = 0;
    GameData_2232c70 = 13;
    GameData_2232c78 = 0;
    GameData_2232c40 = (__int64)GameRoutine_1001c70;
    GameData_2232cc0 = (__int64)GameRoutine_1001c70;
    GameData_2232a78 = 0;
    GameData_2232a80 = (__int64)GameData_212d060[0];
    GameData_2232c80 = (__int64)GameRoutine_1001d00;
    GameData_2232c88 = 0;
    GameData_2232c90 = 0;
    GameData_2232c98 = 0;
    GameData_2232ca0 = 0;
    GameData_2232ca8 = 0;
    GameData_2232cb0 = 13;
    GameData_2232cb8 = 0;
    GameData_2232d20 = 4300;
    GameData_2232cc8 = 0;
    GameData_2232cd0 = 0;
    GameData_2232cd8 = 0;
    GameData_2232ce0 = 0;
    GameData_2232ce8 = 0;
    GameData_2232cf0 = 4;
    GameData_2232d08 = 0;
    GameData_2232d00 = 0;
    GameData_2232cf8 = 0;
    GameData_2232d40 = (__int64)GameRoutine_1001d80;
    GameData_2232d10 = 1;
    GameData_2232d18 = 0;
    GameData_2232d28 = 0;
    GameData_2232d30 = 13;
    GameData_2232d38 = 0;
    GameData_2232d48 = 0;
    GameData_2232d50 = 0;
    GameData_2232d58 = 0;
    GameData_2232d60 = 0;
    GameData_2232d68 = 0;
    GameData_2232d70 = 15;
    GameData_2232d78 = 0;
    GameData_2232d88 = 0;
    GameData_2232d90 = 0;
    GameData_2232d98 = 0;
    GameData_2232da0 = 0;
    GameData_2232da8 = 0;
    GameData_2232db0 = 4;
    GameData_2232dc8 = 0;
    GameData_2232dc0 = 0;
    GameData_2232d80 = (__int64)GameRoutine_1001f20;
    GameData_2232db8 = 0;
    GameData_2232dd0 = 1;
    GameData_2232dd8 = 0;
    GameData_2232de8 = 0;
    GameData_2232df0 = 2;
    GameData_2232df8 = 0;
    GameData_2232e00 = 0;
    GameData_2232e08 = 0;
    GameData_2232e10 = 2;
    GameData_2232e18 = 0;
    GameData_2232de0 = 200;
    GameData_2232e20 = 0;
    GameData_2232e28 = 0;
    GameData_2232e30 = 19;
    GameData_2232e38 = 0;
    GameData_2232e50 = 1000;
    GameData_2232e58 = 0;
    GameData_2232e60 = 0;
    GameData_2232e68 = 0;
    GameData_2232e78 = 0;
    GameData_2232e80 = (__int64)GameData_212c720;
    GameData_2232e90 = 0;
    GameData_2232e98 = 0;
    GameData_2232ea0 = 0;
    GameData_2232ea8 = 0;
    GameData_2232eb0 = 13;
    GameData_2232eb8 = 0;
    GameData_2232ec8 = 0;
    GameData_2232ed0 = 0;
    GameData_2232ed8 = 0;
    GameData_2232ee0 = 0;
    GameData_2232ee8 = 0;
    GameData_2232ef0 = 13;
    GameData_2232ef8 = 0;
    GameData_2232f08 = 0;
    GameData_2232f10 = 0;
    GameData_2232f18 = 0;
    GameData_2232f20 = 0;
    GameData_2232f28 = 0;
    GameData_2232f30 = 13;
    GameData_2232f38 = 0;
    GameData_2232f48 = 0;
    GameData_2232f50 = 0;
    GameData_2232f58 = 0;
    GameData_2232f60 = 0;
    GameData_2232f68 = 0;
    GameData_2232f70 = 4;
    GameData_2232f88 = 0;
    GameData_2232f80 = 0;
    GameData_2232f78 = 0;
    GameData_2232f90 = 1;
    GameData_2232f98 = 0;
    GameData_2232fa0 = 300;
    GameData_2232fa8 = 0;
    GameData_2232fb0 = 19;
    GameData_2232fb8 = 0;
    GameData_2232fc0 = (__int64)GameData_212d060[0];
    GameData_2232fd8 = 0;
    GameData_2232fe0 = 0;
    GameData_2232fe8 = 0;
    GameData_2232ff0 = 4;
    GameData_2232ff8 = 0;
    GameData_2233000 = 0;
    GameData_2233008 = 0;
    GameData_2233010 = 1;
    GameData_2233018 = 0;
    GameData_2233028 = 0;
    GameData_2233030 = 13;
    GameData_2233038 = 0;
    GameData_2233048 = 0;
    GameData_2233050 = 0;
    GameData_2233058 = 0;
    GameData_2233060 = 0;
    GameData_2233068 = 0;
    GameData_2233070 = 13;
    GameData_2233078 = 0;
    GameData_2233080 = (__int64)GameRoutine_1002440;
    GameData_2233088 = 0;
    GameData_2233090 = 0;
    GameData_2233098 = 0;
    GameData_22330a0 = 0;
    GameData_22330a8 = 0;
    GameData_22330b0 = 0;
    GameData_22330d8 = 0;
    GameData_22330e0 = 0;
    GameData_22330e8 = 0;
    GameData_22330d0 = 0;
    GameData_22330c8 = 0;
    GameData_22330c0 = 0;
    GameData_22330b8 = 0;
    GameRoutine_1a09fe0(&GameData_22330f0);
  }
  v2 = (__int64*)GameData_212bf68;
  v3 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 304, 16, 0);
  v4 = GameData_212c608[0];
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = "NULL";
  *(_QWORD*)(v3 + 138) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)v3 = v4 + 16;
  *(_QWORD*)(v3 + 8) = 0;
  GameRoutine_65a7c0();
  v5 = *v2;
  *(_QWORD*)(v3 + 160) = 0;
  *(_QWORD*)(v3 + 176) = 0;
  *(_QWORD*)(v3 + 184) = 0;
  *(_QWORD*)v3 = GameData_2000440;
  *(_DWORD*)(v3 + 152) = 1091567616;
  v6 = GameRoutine_651b90(v5, 296, 16, 0);
  *(_QWORD*)(v6 + 16) = 0;
  v7 = GameData_2131678;
  *(_WORD*)(v6 + 108) = 256;
  *(_DWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_DWORD*)(v6 + 48) = 0x2000;
  *(_DWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_WORD*)(v6 + 80) = 0;
  *(_DWORD*)(v6 + 112) = -1082130432;
  *(_WORD*)(v6 + 116) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_BYTE*)(v6 + 160) = 0;
  *(_BYTE*)(v6 + 288) = 0;
  *(_QWORD*)(v6 + 272) = 0;
  *(_QWORD*)(v6 + 280) = 0;
  *(_QWORD*)(v6 + 256) = 0;
  *(_QWORD*)(v6 + 264) = 0;
  *(_QWORD*)(v6 + 240) = 0;
  *(_QWORD*)(v6 + 248) = 0;
  *(_QWORD*)(v6 + 224) = 0;
  *(_QWORD*)(v6 + 232) = 0;
  *(_QWORD*)(v6 + 208) = 0;
  *(_QWORD*)(v6 + 216) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  *(_QWORD*)(v6 + 200) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_DWORD*)(v6 + 127) = 0;
  *(_QWORD*)(v3 + 264) = v6;
  *(_BYTE*)(v3 + 272) = 0;
  *(_DWORD*)(v3 + 276) = 0;
  *(_QWORD*)(v3 + 280) = 0;
  *(_DWORD*)(v3 + 288) = 0x2000;
  *(_QWORD*)v6 = v7 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  *(_DWORD*)(v6 + 292) = 2;
  *(_QWORD*)(v6 + 24) = 0;
  *(_QWORD*)(v3 + 256) = v6 + 24;
  return GameRoutine_657850(v3, &GameData_2232930, "ProcSeqObeliskOpenPart2", 1,
                            a1);
}

__int64 GameHr_10047e0(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;

  GameRoutine_1004880();
  GameRoutine_1004ca0(a1);
  GameRoutine_1004e00(a1);
  result = GameRoutine_1005280(a1);
  v3 = *(__int64**)(a1 + 32);
  v4 = *(__int64**)(a1 + 40);
  if (v3 != v4) {
    do {
      result = GameRoutine_9db9e0(1, *(unsigned int*)(*v3 + 12));
      v5 = *v3;
      v3 += 2;
      *(_DWORD*)(v5 + 12) = result & ~((int)result >> 31);
    } while (v3 != v4);
    v3 = *(__int64**)(a1 + 32);
    v4 = *(__int64**)(a1 + 40);
  }
  while (v3 != v4) {
    v6 = *v3;
    v3 += 2;
    result = GameRoutine_eb9230(v6);
  }
  return result;
}

__int64 GameHr_1006a90(__int64 a1)
{
  __int64 v2;
  const char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 v10;
    char gap16_[8];
    char* v11;
  } v10_;

  *(_BYTE*)(a1 + 8) = 1;
  if (*(_BYTE*)(GameData_21f4cc0 + 12) == 1) {
    v2 = 2;
  }
  else {
    if ((GameRoutine_ec1530_alt1() & 1) != 0) {
      v2 = 0;
      *(_DWORD*)(a1 + 28) = 0;
      goto LABEL_7;
    }
    v2 = 1;
  }
  *(_DWORD*)(a1 + 28) = v2;
LABEL_7:
  v3 = (&GameData_2000878)[2 * v2];
  v4 = strlen(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v10_.v11 = v6;
    v10_.v10 = v7 | 1;
  }
  else {
    LOBYTE(v10_.v10) = 2 * v4;
    v6 = (char*)&v10_.v10 + 1;
    if (v4 == 0) {
      goto LABEL_16;
    }
  }
  memmove((__int64)v6, (__int64)v3, v5);
LABEL_16:
  v6[v5] = 0;
  if ((v10_.v10 & 1) != 0 && v10_.v11 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  (__int64)v10_.v11);
  }
  return GameHr_1006bf0(a1);
}

void GameHr_1006d40(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64* v3;
  char* v4;
  __int64 v5;
  __int64 v6;

  if ((*(_BYTE*)(a1 + 10) & 1) == 0) {
    *(_BYTE*)(a1 + 10) = 1;
    v1 = GameData_2219098;
    if ((*(_BYTE*)(GameData_2219098 + 10) & 1) == 0 &&
        (GameRoutine_ec1530_alt1() & 1) == 0) {
      v2 = *(_DWORD*)(v1 + 24);
      *(_DWORD*)(v1 + 24) = v2 + 1;
      if (v2 == 0) {
        (**(void (***)(__int64))(v1 + 16))(v1 + 16);
      }
      GameRoutine_867df0_alt1();
    }
    v3 = (__int64*)fw_memory_g_heap_manager_ptr;
    v4 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v5 = *v3;
    strcpy(v4, "Skip = PushEventSkipEnable");
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6, (__int64)v4);
  }
}

__int64 GameHr_1007270(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  float v5;
  int v6;
  int v7;
  __int64 v8;

  v1 = GameData_212f518[0];
  v2 = GameData_21ee240;
  v3 = *(_QWORD*)GameData_212f518[0];
  if (*(_BYTE*)(*(_QWORD*)GameData_212f518[0] + 10LL) != 1) {
    if (GameData_21ee240 != 0) {
      goto LABEL_10;
    }
  LABEL_15:
    if (*(_BYTE*)(result + 12) != 0) {
      *(_BYTE*)(result + 12) = 0;
      v8 = result;
      result = GameRoutine_100b790(v3);
      if ((*(_BYTE*)(v8 + 11) & 1) == 0 &&
          (*(_BYTE*)(*(_QWORD*)v1 + 10LL) & 1) == 0) {
        result = GameRoutine_ec1530(*GameData_212dec0[0]);
        if ((result & 1) == 0 && GameData_21ee240 != 0 &&
            *(_BYTE*)(GameData_21ee240 + 152) != 0) {
          *(_DWORD*)(GameData_21ee240 + 156) |= 2u;
        }
      }
    }
    return result;
  }
  if (GameData_21ee240 == 0) {
    goto LABEL_15;
  }
  v4 = *(_DWORD*)(GameData_21ee240 + 156);
  if ((v4 & 1) == 0) {
    if (*(_BYTE*)(GameData_21ee240 + 152) != 0) {
      v4 |= 2u;
      *(_DWORD*)(GameData_21ee240 + 156) = v4;
    }
    if ((v4 & 0x10) == 0) {
      v5 = *(float*)(v2 + 224);
      *(_DWORD*)(v2 + 156) = v4 & 0xFFFFFFE2 | 1;
      if (v5 > 0.0) {
        *(_DWORD*)(v2 + 224) = 0;
      }
    }
  }
LABEL_10:
  if ((unsigned int)*(unsigned __int8*)(v2 + 152) - 1 > 2) {
    goto LABEL_15;
  }
  v6 = *(_DWORD*)(v2 + 156);
  v7 = (v6 & 8) != 0 ? 2 : 3;
  if ((v7 & v6) != 0) {
    goto LABEL_15;
  }
  if ((*(_BYTE*)(result + 11) & 1) == 0) {
    return GameRoutine_10073a0();
  }
  return result;
}

void GameHr_10073a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  int v6;

  if ((*(_BYTE*)(a1 + 11) & 1) == 0) {
    v6 = 0;
    if ((GameHr_eb6820(&v6) & 1) != 0) {
      *(_DWORD*)(a1 + 16) = v6;
      *(_BYTE*)(a1 + 20) = 1;
    }
    else if (*(_BYTE*)(a1 + 20) == 1) {
      *(_BYTE*)(a1 + 20) = 0;
    }
    *(_DWORD*)(a1 + 24) = 0;
    *(_BYTE*)(a1 + 11) = 1;
    if ((*(_BYTE*)(GameData_2219098 + 10) & 1) == 0 &&
        (GameRoutine_ec1530_alt1() & 1) == 0) {
      v2 = game_ProcGameSkipView_instance_;
      if (game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 0) {
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) = 1;
        *(_DWORD*)(v2 + 156) &= ~2u;
      }
    }
    v3 = fw_memory_g_heap_manager_ptr;
    v4 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    strcpy(v4, "Skip = OnRunningAutoPlaySkipAll");
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, (__int64)v4);
  }
}

__int64 GameHr_1007580(__int64 a1, __int64 a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2233580,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_2233580) != 0) {
    GameData_2233248 = 0;
    GameData_2233250 = (__int64)GameRoutine_1007b70;
    GameData_2233148 = 0;
    GameData_2233150 = (__int64)GameRoutine_1007960;
    GameData_2233108 = 0;
    GameData_2233110 = 0;
    GameData_2233118 = 0;
    GameData_2233128 = 0;
    GameData_2233120 = 1;
    GameData_2233100 = 2;
    GameData_2233130 = 0;
    GameData_2233288 = 0;
    GameData_2233290 = (__int64)GameRoutine_1007bc0;
    GameData_2233188 = 0;
    GameData_2233190 = (__int64)GameRoutine_1007ac0;
    GameData_2233138 = 0;
    GameData_2233140 = 13;
    GameData_2233158 = 0;
    GameData_2233160 = 0;
    GameData_2233168 = 0;
    GameData_2233170 = 0;
    GameData_2233178 = 0;
    GameData_22332c8 = 0;
    GameData_22332d0 = (__int64)GameRoutine_1007c80;
    GameData_2233180 = 13;
    GameData_2233198 = 0;
    GameData_22331a0 = 0;
    GameData_22331a8 = 0;
    GameData_22331b0 = 0;
    GameData_22331b8 = 0;
    GameData_22331c0 = 12;
    GameData_22331d0 = 0;
    GameData_22331d8 = 0;
    GameData_22331c8 = 0;
    GameData_2233310 = (__int64)GameRoutine_10081e0;
    GameData_22331e0 = 3;
    GameData_22331e8 = 0;
    GameData_22331f0 = 0;
    GameData_22331f8 = 0;
    GameData_2233200 = 2;
    GameData_2233208 = 0;
    GameData_2233210 = 0;
    GameData_2233218 = 0;
    GameData_2233220 = 2;
    GameData_2233228 = 0;
    GameData_2233350 = (__int64)GameRoutine_1008690;
    GameData_2233230 = 0;
    GameData_2233238 = 0;
    GameData_2233240 = 13;
    GameData_2233258 = 0;
    GameData_2233260 = 0;
    GameData_2233268 = 0;
    GameData_2233270 = 0;
    GameData_2233278 = 0;
    GameData_2233280 = 13;
    GameData_2233390 = (__int64)GameRoutine_1008700;
    GameData_2233298 = 0;
    GameData_22332a0 = 0;
    GameData_22332a8 = 0;
    GameData_22332b0 = 0;
    GameData_22332b8 = 0;
    GameData_22332c0 = 13;
    GameData_22332d8 = 0;
    GameData_22332e0 = 0;
    GameData_22332e8 = 0;
    GameData_22332f0 = 0;
    GameData_22332f8 = 0;
    GameData_2233300 = 13;
    GameData_2233308 = 0;
    GameData_2233318 = 0;
    GameData_2233320 = 0;
    GameData_2233328 = 0;
    GameData_2233330 = 0;
    GameData_2233338 = 0;
    GameData_2233340 = 13;
    GameData_2233348 = 0;
    GameData_2233358 = 0;
    GameData_2233360 = 0;
    GameData_2233368 = 0;
    GameData_2233370 = 0;
    GameData_2233378 = 0;
    GameData_2233380 = 13;
    GameData_2233388 = 0;
    GameData_2233398 = 0;
    GameData_22333a0 = 0;
    GameData_22333a8 = 0;
    GameData_22333b0 = 0;
    GameData_22333b8 = 0;
    GameData_22333c0 = 8;
    GameData_2233400 = 13;
    GameData_2233440 = 13;
    GameData_2233480 = 13;
    GameData_22333e8 = 0;
    GameData_22333f0 = 0;
    GameData_22333f8 = 0;
    GameData_22333e0 = 0;
    GameData_22333d8 = 0;
    GameData_22333d0 = 0;
    GameData_2233408 = 0;
    GameData_2233418 = 0;
    GameData_2233420 = 0;
    GameData_2233428 = 0;
    GameData_2233430 = 0;
    GameData_2233438 = 0;
    GameData_2233448 = 0;
    GameData_2233458 = 0;
    GameData_2233460 = 0;
    GameData_2233468 = 0;
    GameData_2233470 = 0;
    GameData_2233478 = 0;
    GameData_2233488 = 0;
    GameData_2233490 = (__int64)GameRoutine_1008ba0;
    GameData_2233498 = 0;
    GameData_22334a0 = 0;
    GameData_22334a8 = 0;
    GameData_22334b0 = 0;
    GameData_22334b8 = 0;
    GameData_22334c0 = 12;
    GameData_22334d8 = 0;
    GameData_22334d0 = 0;
    GameData_22334c8 = 0;
    GameData_22334e0 = 3;
    GameData_22333c8 = (__int64)GameData_212dd40[0];
    GameData_22334e8 = 0;
    GameData_22334f0 = 0;
    GameData_22334f8 = 0;
    GameData_2233500 = 2;
    GameData_2233508 = 0;
    GameData_2233510 = 0;
    GameData_2233518 = 0;
    GameData_2233520 = 3;
    GameData_2233528 = 0;
    GameData_2233410 = (__int64)GameRoutine_1008980;
    GameData_2233530 = 0;
    GameData_2233538 = 0;
    GameData_2233540 = 0;
    GameData_2233568 = 0;
    GameData_2233570 = 0;
    GameData_2233578 = 0;
    GameData_2233560 = 0;
    GameData_2233558 = 0;
    GameData_2233550 = 0;
    GameData_2233450 = (__int64)GameRoutine_1008b50;
    GameData_2233548 = 0;
    GameRoutine_1a09fe0(&GameData_2233580);
  }
  v6 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 224, 16, 0);
  v7 = GameData_212c608[0];
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = "NULL";
  *(_QWORD*)(v6 + 138) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)v6 = v7 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  GameRoutine_65a7c0();
  *(_QWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  *(_QWORD*)(v6 + 208) = a2;
  *(_BYTE*)(v6 + 216) = a3 & 1;
  *(_BYTE*)(v6 + 217) = 0;
  GameData_2233588 = v6;
  *(_QWORD*)v6 = GameData_20008e8;
  if ((a3 & 1) != 0) {
    v8 = *(_QWORD*)GameData_212dbf0[0];
    if (*(_QWORD*)GameData_212dbf0[0] != 0) {
      *(_BYTE*)(v6 + 217) = 1;
      *(_BYTE*)(v8 + 146) = 1;
    }
  }
  return GameRoutine_657850(v6, &GameData_2233100, "TalkSelectGiftSeqProc", 1,
                            a1);
}

__int64 GameHr_1007960(__int64 a1)
{
  char v1;
  __int64 v3;
  __int64 v4;
  __int64 result;
  _BYTE* v6;
  char v7;

  v1 = *(_BYTE*)(a1 + 216);
  v3 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1104, 16, 0);
  GameRoutine_18704b0(v3, 1);
  *(_QWORD*)(v3 + 1072) = 0;
  *(_QWORD*)(v3 + 1080) = 0;
  *(_QWORD*)v3 = GameData_1fe8e20;
  *(_QWORD*)(v3 + 1088) = 0;
  *(_BYTE*)(v3 + 1096) = v1;
  *(_QWORD*)(v3 + 176) = GameData_1fe92b8;
  *(_QWORD*)(v3 + 1056) = GameData_1fe9388;
  GameData_2167728 = -1;
  GameRoutine_6f4cd0(v3 + 1072);
  v4 = *(_QWORD*)(a1 + 40);
  if (v4 != 0) {
    *(_QWORD*)(v4 + 48) = v3;
    *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v3;
  *(_QWORD*)(v3 + 24) = "ProcTalkSelectGiftMenu";
  *(_QWORD*)(v3 + 32) = a1;
  *(_DWORD*)(v3 + 140) = GameRoutine_7a8520();
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 24;
  *(_QWORD*)(v3 + 80) = 1;
  *(_QWORD*)(v3 + 8) = &GameData_2174f00;
  *(_QWORD*)(v3 + 16) = &GameData_2174f00;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3);
  if ((result & 1) != 0 && (*(_WORD*)(v3 + 136) & 0x100) == 0) {
    *(_WORD*)(v3 + 136) |= 0x100u;
  }
  v6 = *(_BYTE**)(v3 + 32);
  v7 = v6[138];
  if (v7 == 0) {
    result =
        (*(__int64 (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v3 + 32));
    v7 = v6[138];
  }
  v6[138] = v7 + 1;
  *(_WORD*)(v3 + 136) |= 2u;
  return result;
}

__int64 GameHr_1008690(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 208);
  if (v1 != 0) {
    v2 = result;
    result = GameRoutine_717fc0(*(_QWORD*)(v1 + 24) + 1152LL, 1);
    v3 = *(_QWORD*)(v2 + 208);
    if (v3 != 0) {
      result = GameRoutine_717fc0(*(_QWORD*)(v3 + 24) + 992LL, 1);
      if ((result & 1) != 0) {
        return GameRoutine_137ef10(v2, *(_QWORD*)(v2 + 208));
      }
    }
  }
  return result;
}

void GameHr_1008980(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  char v12;
  unsigned __int8 v13;
  int v14;
  __int64* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v20_;

  v1 = *(_QWORD*)(a1 + 208);
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21ca310 + 56);
    if (v2 != 0) {
      v3 = 250;
      while (1) {
        v4 = *(_QWORD*)(v2 + 440);
        if (v4 != 0 && *(_BYTE*)(v4 + 16) != 9 && *(_QWORD*)(v2 + 392) == v1) {
          break;
        }
        v5 = *(_QWORD*)(v2 + 2664);
        if (v5 != 0 && *(_BYTE*)(v5 + 16) != 9 && *(_QWORD*)(v2 + 2616) == v1) {
          v2 += 2224;
          break;
        }
        v6 = *(_QWORD*)(v2 + 4888);
        if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && *(_QWORD*)(v2 + 4840) == v1) {
          v9 = 4448;
          goto LABEL_24;
        }
        v7 = *(_QWORD*)(v2 + 7112);
        if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && *(_QWORD*)(v2 + 7064) == v1) {
          v9 = 6672;
          goto LABEL_24;
        }
        v8 = *(_QWORD*)(v2 + 9336);
        if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && *(_QWORD*)(v2 + 9288) == v1) {
          v9 = 8896;
        LABEL_24:
          v2 += v9;
          break;
        }
        v2 += 11120;
        v3 -= 5;
        if (v3 == 0) {
          return;
        }
      }
      v10 = *(char*)(v2 + 2090);
      if (v10 <= 2) {
        if (v10 <= -1) {
          v12 = -1;
        }
        else {
          v12 = *(_BYTE*)(v2 + 2090);
        }
        v13 = v12 + 1;
        *(_BYTE*)(v2 + 2090) = v13;
        v14 = v13;
        v15 = (__int64*)fw_memory_g_heap_manager_ptr;
        v16 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
        v17 = v14 - v10;
        *(_QWORD*)v16 = v2;
        *(_DWORD*)(v16 + 8) = v10;
        *(_DWORD*)(v16 + 12) = v14;
        if (v14 - v10 < 0) {
          v17 = v10 - v14;
        }
        v20_.v21 = v16 + 24;
        v20_.v22 = v16 + 24;
        v20_.v20 = v16;
        *(_DWORD*)(v16 + 16) = v17;
        game_telop_1741620(a1, &v20_.v20, 0);
        if (v20_.v20 != 0) {
          v18 = *v15;
          v20_.v21 = v20_.v20;
          v19 = 128;
          if (*(_QWORD*)(v18 + 200) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free(v18 + v19, v20_.v20);
        }
      }
    }
  }
}

__int64 GameHr_10090d0(__int64 a1, unsigned __int8 a2)
{
  __int64 v4;
  __int64 v5;
  int v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22336d0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_22336d0) != 0) {
    GameData_2233598 = 0;
    GameData_22335a0 = (__int64)GameRoutine_10092c0;
    GameData_2233590 = 13;
    GameData_2233650 = 13;
    GameData_22335a8 = 0;
    GameData_22335b0 = 0;
    GameData_22335b8 = 0;
    GameData_22335c0 = 0;
    GameData_22335c8 = 0;
    GameData_22335d8 = 0;
    GameData_22335e0 = (__int64)GameRoutine_10095c0;
    GameData_22335e8 = 0;
    GameData_22335f0 = 0;
    GameData_22335f8 = 0;
    GameData_22335d0 = 14;
    GameData_2233610 = 14;
    GameData_2233600 = 0;
    GameData_2233608 = 0;
    GameData_2233628 = 0;
    GameData_2233630 = 0;
    GameData_2233638 = 0;
    GameData_2233640 = 0;
    GameData_2233648 = 0;
    GameData_2233658 = 0;
    GameData_2233660 = (__int64)GameRoutine_1009770;
    GameData_2233618 = 0;
    GameData_2233620 = (__int64)GameRoutine_1009660;
    GameData_2233668 = 0;
    GameData_2233670 = 0;
    GameData_2233678 = 0;
    GameData_2233680 = 0;
    GameData_2233688 = 0;
    GameData_2233690 = 0;
    GameData_22336b8 = 0;
    GameData_22336c0 = 0;
    GameData_22336c8 = 0;
    GameData_22336b0 = 0;
    GameData_22336a0 = 0;
    GameData_22336a8 = 0;
    GameData_2233698 = 0;
    GameRoutine_1a09fe0(&GameData_22336d0);
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 168, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0();
  *(_DWORD*)(v4 + 160) = 0;
  *(_BYTE*)(v4 + 156) = a2;
  GameData_22336d8 = v4;
  *(_QWORD*)v4 = GameData_2000a70;
  if (a2 > 3u) {
    v6 = 3;
  }
  else {
    v6 = GameData_1a83140[a2];
  }
  *(_DWORD*)(v4 + 152) = v6;
  return GameRoutine_657850(v4, &GameData_2233590, "ProcSeqHpRecoverSeq", 1,
                            a1);
}

__int64 GameHr_10098a0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v15;
  int v16;

  v2 = (_QWORD*)GameData_212bf68;
  v3 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1200, 16, 0);
  GameRoutine_1789cf0(v3, "ObeliskClearStatusMenu");
  *(_BYTE*)(v3 + 1184) = 0;
  *(_QWORD*)v3 = GameData_2000b40;
  *(_QWORD*)(v3 + 176) = GameData_2001010;
  *(_QWORD*)(v3 + 1056) = GameData_20010e0;
  GameRoutine_657850(v3, GameData_212c730, "ProcObeliskClearStatusMenu", 1, a1);
  v16 = 17;
  v4 = GameRoutine_6ea9d0(&v16);
  if (v4 != 0) {
    v5 = *(_QWORD*)(v4 + 432);
    v6 = v4;
    if (v5 == 0) {
      v5 = *(_QWORD*)(v4 + 440);
      if (v5 != 0) {
        v7 = *(unsigned __int8*)(v5 + 16);
        if (v7 < 9) {
          v15 = v7 - 3;
          while (1) {
            if (v15 == 0) {
              v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v5 != 0) {
                break;
              }
            }
            if (++v15 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v5 = 0;
        }
      }
    }
    v8 = GameData_21319b0[0] + 2;
  LABEL_8:
    while (1) {
      v9 = v6;
      v6 = v5;
      v10 = GameRoutine_651b90(*v2, 96, 16, 0);
      *(_WORD*)(v10 + 16) = 0;
      *(_DWORD*)(v10 + 40) = 0;
      *(_QWORD*)(v10 + 48) = 0;
      *(_QWORD*)(v10 + 56) = 0;
      *(_QWORD*)(v10 + 64) = 0;
      *(_QWORD*)(v10 + 72) = 0;
      *(_WORD*)(v10 + 80) = 257;
      *(_BYTE*)(v10 + 82) = 1;
      *(_QWORD*)v10 = v8;
      *(_QWORD*)(v10 + 8) = 0;
      *(_QWORD*)(v10 + 88) = v9;
      GameRoutine_16e0c00(v3, v10);
      if (v6 == 0) {
        break;
      }
      v5 = *(_QWORD*)(v6 + 432);
      if (v5 == 0) {
        v11 = *(_QWORD*)(v6 + 440);
        if (v11 != 0) {
          v12 = *(unsigned __int8*)(v11 + 16);
          v5 = 0;
          if (v12 <= 8) {
            v13 = v12 - 3;
            while (1) {
              if (v13 == 0) {
                v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v5 != 0) {
                  break;
                }
              }
              if (++v13 == 6) {
                v5 = 0;
                goto LABEL_8;
              }
            }
          }
        }
      }
    }
  }
  return GameRoutine_178ab20(v3);
}

__int64 GameHr_100b200(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  float v8;

  if (*(unsigned __int8*)(result + 9) != *(unsigned __int8*)(result + 8)) {
    v1 = result;
    if ((*(_BYTE*)(result + 10) & 1) == 0) {
      result = GameRoutine_ec1530(GameData_21f4cc0);
      if ((result & 1) == 0 && *(int*)(v1 + 24) <= 0) {
        result = GameRoutine_1011550(*(_QWORD*)GameData_212f510[0], 0, 1);
        if ((result & 1) != 0) {
          v2 = *(unsigned __int8*)(v1 + 8);
          *(_BYTE*)(v1 + 9) = v2;
          v3 = GameData_21ee240;
          if (v2 == 1) {
            if (GameData_21ee240 != 0) {
              v4 = *(_DWORD*)(GameData_21ee240 + 156);
              if ((v4 & 0x10) == 0) {
                *(_DWORD*)(GameData_21ee240 + 156) = v4 & 0xFFFFFFEE;
                result = GameRoutine_8224a0(25);
                if (GameData_21caab0 != 0 &&
                    (result = GameRoutine_65c580(
                         *(_QWORD*)(GameData_21caab0 + 48), result)) != 0) {
                  v5 = *(_DWORD*)(v3 + 156);
                  if (*(_DWORD*)(result + 32) == 1) {
                    if ((v5 & 4) != 0) {
                      return result;
                    }
                    v6 = v5 | 4;
                    goto LABEL_22;
                  }
                }
                else {
                  v5 = *(_DWORD*)(v3 + 156);
                }
                if ((v5 & 4) == 0) {
                  return result;
                }
                v6 = v5 & 0xFFFFFFFB;
                goto LABEL_22;
              }
            }
          }
          else if (GameData_21ee240 != 0) {
            v7 = *(_DWORD*)(GameData_21ee240 + 156);
            if (*(_BYTE*)(GameData_21ee240 + 152) != 0) {
              v7 |= 2u;
              *(_DWORD*)(GameData_21ee240 + 156) = v7;
            }
            if ((v7 & 0x10) == 0) {
              v6 = v7 & 0xFFFFFFE2 | 1;
            LABEL_22:
              v8 = *(float*)(v3 + 224);
              *(_DWORD*)(v3 + 156) = v6;
              if (v8 > 0.0) {
                *(_DWORD*)(v3 + 224) = 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_100b530(__int64 result)
{
  int v1;
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  float v9;

  v1 = *(unsigned __int8*)(result + 9);
  *(_BYTE*)(result + 8) = 0;
  if (v1 != 0) {
    v2 = result;
    if ((*(_BYTE*)(result + 10) & 1) == 0) {
      result = GameRoutine_ec1530(GameData_21f4cc0);
      if ((result & 1) == 0 && *(int*)(v2 + 24) <= 0) {
        result = GameRoutine_1011550(*(_QWORD*)GameData_212f510[0], 0, 1);
        if ((result & 1) != 0) {
          v3 = *(unsigned __int8*)(v2 + 8);
          *(_BYTE*)(v2 + 9) = v3;
          v4 = GameData_21ee240;
          if (v3 == 1) {
            if (GameData_21ee240 != 0) {
              v5 = *(_DWORD*)(GameData_21ee240 + 156);
              if ((v5 & 0x10) == 0) {
                *(_DWORD*)(GameData_21ee240 + 156) = v5 & 0xFFFFFFEE;
                result = GameRoutine_8224a0(25);
                if (GameData_21caab0 != 0 &&
                    (result = GameRoutine_65c580(
                         *(_QWORD*)(GameData_21caab0 + 48), result)) != 0) {
                  v6 = *(_DWORD*)(v4 + 156);
                  if (*(_DWORD*)(result + 32) == 1) {
                    if ((v6 & 4) != 0) {
                      return result;
                    }
                    v7 = v6 | 4;
                    goto LABEL_22;
                  }
                }
                else {
                  v6 = *(_DWORD*)(v4 + 156);
                }
                if ((v6 & 4) == 0) {
                  return result;
                }
                v7 = v6 & 0xFFFFFFFB;
                goto LABEL_22;
              }
            }
          }
          else if (GameData_21ee240 != 0) {
            v8 = *(_DWORD*)(GameData_21ee240 + 156);
            if (*(_BYTE*)(GameData_21ee240 + 152) != 0) {
              v8 |= 2u;
              *(_DWORD*)(GameData_21ee240 + 156) = v8;
            }
            if ((v8 & 0x10) == 0) {
              v7 = v8 & 0xFFFFFFE2 | 1;
            LABEL_22:
              v9 = *(float*)(v4 + 224);
              *(_DWORD*)(v4 + 156) = v7;
              if (v9 > 0.0) {
                *(_DWORD*)(v4 + 224) = 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

void GameHr_100b790(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  float v21;

  if ((*(_BYTE*)(a1 + 10) & 1) == 0 && (GameRoutine_ec1530_alt1() & 1) == 0) {
    v2 = *(_DWORD*)(a1 + 24) - 1;
    *(_DWORD*)(a1 + 24) = v2;
    if (v2 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 16) + 8LL))(a1 + 16);
    }
    v3 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v8 = v6 == v7;
      v9 = v4 - 1 + v5;
      v10 = v9 >> 7;
      v11 = v9 & 0x7F;
      v12 = 16 * (v6 - v7) - 1;
      v13 = *(_QWORD*)(v7 + 8 * v10);
      if (v8) {
        v12 = 0;
      }
      v14 = v13 + 32 * v11;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v14 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v3[21] = *(_QWORD*)(v14 + 24);
      v15 = *(_QWORD*)(v14 + 16);
      v3[27] = v4 - 1;
      v3[20] = v15;
      if ((unsigned __int64)(v12 - (v4 + v5) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        v16 = *(_QWORD*)(v6 - 8);
        if (v16 != 0) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
          v6 = v3[24];
        }
        v3[24] = v6 - 8;
      }
    }
    if (*(unsigned __int8*)(a1 + 9) != *(unsigned __int8*)(a1 + 8) &&
        (*(_BYTE*)(a1 + 10) & 1) == 0 && (GameRoutine_ec1530_alt1() & 1) == 0 &&
        *(int*)(a1 + 24) <= 0 &&
        GameRoutine_1011550_alt1(*(unsigned __int8**)GameData_212f510[0], 0,
                                 1)) {
      v18 = *(unsigned __int8*)(a1 + 8);
      *(_BYTE*)(a1 + 9) = v18;
      if (v18 == 1) {
        GameRoutine_867e90_alt1();
      }
      else {
        v19 = game_ProcGameSkipView_instance_;
        if (game_ProcGameSkipView_instance_ != 0) {
          v20 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
          if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
            v20 |= 2u;
            *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v20;
          }
          if ((v20 & 0x10) == 0) {
            v21 = *(float*)(v19 + 224);
            *(_DWORD*)(v19 + 156) = v20 & 0xFFFFFFE2 | 1;
            if (v21 > 0x0.0p+0f) {
              *(_DWORD*)(v19 + 224) = 0;
            }
          }
        }
      }
    }
  }
}

void GameHr_100ba20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 64);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 40);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 16);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
}

bool GameHr_1011550(unsigned __int8* a1, int a2, char a3)
{
  _BOOL8 result;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  bool v8;

  result = false;
  if (GameData_21ec7b8 == 0 &&
      (GameData_22054a8 == 0 || (v4 = *(_QWORD*)(GameData_22054a8 + 80)) == 0 ||
       (v5 =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_22054a8 + 48) +
                                  8 * ((v4 + *(_QWORD*)(GameData_22054a8 + 72) -
                                        1) /
                                       0x33uLL)) +
                       80 * ((v4 + *(_QWORD*)(GameData_22054a8 + 72) - 1) %
                             0x33uLL) +
                       72)) == 0 ||
       *(_BYTE*)(v5 + 138) == 0) &&
      (a1[11] & 1) == 0 && (a1[13] & 1) == 0 &&
      (a2 != 1 || (a1[14] & 1) == 0)) {
    if ((a3 & 1) == 0) {
      return true;
    }
    if (GameData_21ee240 != 0 &&
        (unsigned int)*(unsigned __int8*)(GameData_21ee240 + 152) - 1 <= 2) {
      v6 = *(_DWORD*)(GameData_21ee240 + 156);
      v7 = (v6 & 8) != 0 ? 2 : 3;
      v8 = (v7 & v6) == 0;
    }
    else {
      v8 = false;
    }
    if (!v8 && a1[15] != 0 && (a1[12] & 1) == 0 && (a1[9] | a1[8]) == 0 &&
        (a1[10] & 1) == 0) {
      return true;
    }
  }
  return result;
}

__int64 GameHr_1013de0(unsigned int a1, float a2)
{
  __int64 v2;
  __int64 v4;
  float v5;
  __int64 result;
  __int64 v7;
  __int64 v8;

  v2 = GameData_212c638;
  if (a2 <= 0.0) {
    a1 = 0;
  }
  v4 = *(_QWORD*)GameData_212c638;
  v5 = *(
      float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                              GameData_212c638 +
                                                          32LL) -
                                               8LL) +
                                    40LL) +
                         360LL) +
              76LL);
  GameRoutine_b86fb0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                            8LL) +
                 40LL),
      a1);
  result = GameRoutine_c44560(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 32) - 8LL) + 56LL), a1);
  v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 32) - 8LL) + 64LL);
  if (v7 != 0) {
    result = *(_QWORD*)(*(_QWORD*)(v7 + 96) + 296LL);
    if (result != 0) {
      result = GameRoutine_c72b30();
    }
  }
  v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 32LL) - 8LL) + 40LL);
  if (v5 != *(float*)(*(_QWORD*)(v8 + 360) + 76LL)) {
    *(_BYTE*)(v8 + 225) = 1;
  }
  return result;
}

bool GameHr_1013eb0(__int64 a1, __int64 a2, int a3)
{
  __int16* v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;

  if (a2 == 0) {
    return false;
  }
  v4 = (__int16*)(GameData_21ee260 != 0 ? GameData_21ee260 + 8
                                        : GameData_212cf60);
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = v6 * v5 * v7 != 0 ? GameData_1b39518[v4[3] % 24] : -1;
  v9 = *(_DWORD*)(a2 + 96);
  GameRoutine_1a09b70(&GameData_2166898);
  GameRoutine_1a09b80(&GameData_2166898);
  if (a3 < 1) {
    return false;
  }
  v10 = v9 + 40000 * v5 + 400 * v6 + 4 * v7 + v8;
  v11 = v10 ^ (v10 >> 30);
  v12 = 1812433253 * v11;
  v13 = 1812433253 * ((1812433253 * (v12 ^ (v12 >> 30)) + 1) ^
                      ((1812433253 * (v12 ^ (v12 >> 30)) + 1) >> 30)) +
        2;
  v14 = 1812433253 * (v13 ^ (v13 >> 30)) + 3;
  GameRoutine_1a09b70(&GameData_2166898);
  GameRoutine_1a09b80(&GameData_2166898);
  return (float)((float)(unsigned int)a3 * 10000.0) >
         (float)((((((1011558400 * v11) ^ v12) >> 8) ^ (v14 >> 19) ^
                   (1011558400 * v11) ^ v12 ^ v14) &
                  0x7FFFFFFF) %
                 0xF4240);
}

void GameHr_1017900(__int64* a1, __int64* a2)
{
  unsigned __int64 v2;
  __int64* v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;

  v3 = (__int64*)a1[1];
  v2 = a1[2];
  if ((unsigned __int64)v3 >= v2) {
    v7 = *a1;
    v8 = (__int64)v3 - *a1;
    v9 = (v8 >> 4) + 1;
    if (v9 >> 60 != 0) {
      GameRoutine_cdcc10_alt1();
    }
    v10 = v2 - v7;
    if (v10 >> 3 > v9) {
      v9 = v10 >> 3;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF0LL) {
      v11 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v9;
    }
    if (v11 >> 60 != 0) {
      GameRoutine_60a210_alt1();
    }
    v12 = fw_memory_g_heap_manager_ptr;
    v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v11, 16, 0);
    v14 = *a2;
    v15 = a2[1];
    v16 = (_QWORD*)(v13 + v8);
    v6 = v13 + v8 + 16;
    *v16 = v14;
    v16[1] = v15;
    if ((__int64*)v7 != v3) {
      v17 = (__int64*)v7;
      v18 = (_QWORD*)(v13 + v8 - 16 * (v8 >> 4));
      do {
        v18[1] = v17[1];
        v19 = *v17;
        v17 += 2;
        *v18 = v19;
        v18 += 2;
      } while (v17 != v3);
    }
    *a1 = v13 + v8 - 16 * (v8 >> 4);
    a1[1] = v6;
    a1[2] = v13 + 16 * v11;
    if (v7 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v20, v7);
    }
  }
  else {
    v3[1] = a2[1];
    v6 = (__int64)(v3 + 2);
    *v3 = *a2;
  }
  a1[1] = v6;
}

__int64 GameHr_10182e0(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = a1[1] - *a1;
  v3 = (v2 >> 4) + 1;
  if (v3 >> 60 != 0) {
    GameRoutine_1018430_alt1();
  }
  v5 = a1[2] - *a1;
  if (v5 >> 3 > v3) {
    v3 = v5 >> 3;
  }
  if ((unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF0LL) {
    v6 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v6 = v3;
  }
  if (v6 >> 60 != 0) {
    GameRoutine_60a210_alt1();
  }
  v8 = fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      16 * v6, 16, 0);
  v10 = v9 + v2;
  v11 = v9 + 16 * v6;
  *(_QWORD*)v10 = 0;
  *(_DWORD*)(v10 + 8) = 0x2000;
  GameRoutine_112180_alt1(v9 + v2, a2);
  v12 = *a1;
  v13 = a1[1];
  v14 = v10 + 16;
  v15 = *a1 - v13;
  v16 = v10 + v15;
  if (v13 != *a1) {
    v17 = v10 + v15;
    do {
      *(_QWORD*)v17 = 0;
      *(_DWORD*)(v17 + 8) = 0x2000;
      GameRoutine_112180_alt1(v17, v12);
      v12 += 16;
      v17 += 16;
    } while (v12 != v13);
    v12 = *a1;
  }
  *a1 = v16;
  a1[1] = v14;
  a1[2] = v11;
  if (v12 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v18, v12);
  }
  return v14;
}

bool GameHr_1019aa0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int128 v3;
  __int128 v4;
  __int128 v7;
  __int128 v8;
  __int128 v9;
  float v10;
  float v11;
  __int128 v12;
  __int128 v13;
  float v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  float v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  float v26;
  float v27;
  float v28;
  int v29;
  __int128 v30;
  __int128 v31;
  int v32;
  float v33;
  float v34;
  float v35;
  __int128 v36;
  int v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  __int128 v43;
  float v44;
  float v45;
  __int128 v46;
  __int128 v47;
  __int128 v48;
  __int128 v49;
  __int128 v50;
  __int128 v51;
  __int128 v52;
  __int128 v53;
  __int128 v54;
  __int128 v55;
  __int128 v56;
  __int128 v57;
  __int128 v58;
  __int128 v59;
  __int128 v60;
  __int128 v61;
  __int128 v62;
  int v63;
  __int128 v64;
  __int128 v65;
  __int128 v66;
  __int128 v67;
  __int128 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  __int128 v74;
  float v75;
  __int128 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int128 v80;

  v2 = (a2 - a1) >> 5;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v26 = *(float*)(a1 + 48);
      v27 = *(float*)(a1 + 16);
      v28 = *(float*)(a2 - 16);
      if (v26 >= v27) {
        if (v28 < v26) {
          v41 = *(_OWORD*)(a1 + 32);
          *(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 - 32);
          *(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 - 28);
          v42 = *(_OWORD*)(a1 + 32);
          *((_QWORD*)&v42 + 1) = *(unsigned int*)(a2 - 24);
          *(_OWORD*)(a1 + 32) = v42;
          *(_QWORD*)(a2 - 32) = v41;
          v43 = *(_OWORD*)(a2 - 32);
          *((_QWORD*)&v43 + 1) = DWORD2(v41);
          *(_OWORD*)(a2 - 32) = v43;
          LODWORD(v41) = *(_DWORD*)(a1 + 48);
          *(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 - 16);
          *(_DWORD*)(a2 - 16) = v41;
          v44 = *(float*)(a1 + 48);
          v45 = *(float*)(a1 + 16);
          if (v44 < v45) {
            v46 = *(_OWORD*)(a1 + 32);
            v47 = *(_OWORD*)a1;
            *(float*)(a1 + 16) = v44;
            *(float*)(a1 + 48) = v45;
            *(_QWORD*)a1 = v46;
            *(_QWORD*)(a1 + 32) = v47;
            v48 = *(_OWORD*)a1;
            *((_QWORD*)&v48 + 1) = DWORD2(v46);
            v49 = *(_OWORD*)(a1 + 32);
            *((_QWORD*)&v49 + 1) = DWORD2(v47);
            *(_OWORD*)a1 = v48;
            *(_OWORD*)(a1 + 32) = v49;
          }
        }
        return true;
      }
      v3 = *(_OWORD*)a1;
      v29 = HIDWORD(*(_QWORD*)a1);
      if (v28 >= v26) {
        v58 = *(_OWORD*)(a1 + 32);
        *(_DWORD*)(a1 + 32) = v3;
        *(_DWORD*)(a1 + 36) = v29;
        *(float*)(a1 + 16) = v26;
        v59 = *(_OWORD*)(a1 + 32);
        *(float*)(a1 + 48) = v27;
        *(_QWORD*)a1 = v58;
        v60 = *(_OWORD*)a1;
        *((_QWORD*)&v60 + 1) = DWORD2(v58);
        *(_QWORD*)&v58 = v59;
        *((_QWORD*)&v58 + 1) = DWORD2(v3);
        *(_OWORD*)a1 = v60;
        *(_OWORD*)(a1 + 32) = v58;
        if (*(float*)(a2 - 16) < v27) {
          *(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 - 32);
          *(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 - 28);
          v61 = *(_OWORD*)(a1 + 32);
          *((_QWORD*)&v61 + 1) = *(unsigned int*)(a2 - 24);
          *(_OWORD*)(a1 + 32) = v61;
          *(_QWORD*)(a2 - 32) = v59;
          v62 = *(_OWORD*)(a2 - 32);
          *((_QWORD*)&v62 + 1) = DWORD2(v3);
          *(_OWORD*)(a2 - 32) = v62;
          v63 = *(_DWORD*)(a1 + 48);
          *(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 - 16);
          *(_DWORD*)(a2 - 16) = v63;
        }
        return true;
      }
      *(_DWORD*)a1 = *(_DWORD*)(a2 - 32);
      *(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 - 28);
      v30 = *(_OWORD*)a1;
      *((_QWORD*)&v30 + 1) = *(unsigned int*)(a2 - 24);
      *(_OWORD*)a1 = v30;
      *(_DWORD*)(a2 - 32) = v3;
      *(_DWORD*)(a2 - 28) = v29;
      goto LABEL_17;
    case 4LL:
      GameRoutine_10197c0((float*)a1, (float*)(a1 + 32), (float*)(a1 + 64),
                          (float*)(a2 - 32));
      return true;
    case 5LL:
      GameRoutine_10197c0((float*)a1, (float*)(a1 + 32), (float*)(a1 + 64),
                          (float*)(a1 + 96));
      if (*(float*)(a2 - 16) < *(float*)(a1 + 112)) {
        v7 = *(_OWORD*)(a1 + 96);
        *(_DWORD*)(a1 + 96) = *(_DWORD*)(a2 - 32);
        *(_DWORD*)(a1 + 100) = *(_DWORD*)(a2 - 28);
        v8 = *(_OWORD*)(a1 + 96);
        *((_QWORD*)&v8 + 1) = *(unsigned int*)(a2 - 24);
        *(_OWORD*)(a1 + 96) = v8;
        *(_QWORD*)(a2 - 32) = v7;
        v9 = *(_OWORD*)(a2 - 32);
        *((_QWORD*)&v9 + 1) = DWORD2(v7);
        *(_OWORD*)(a2 - 32) = v9;
        LODWORD(v7) = *(_DWORD*)(a1 + 112);
        *(_DWORD*)(a1 + 112) = *(_DWORD*)(a2 - 16);
        *(_DWORD*)(a2 - 16) = v7;
        v10 = *(float*)(a1 + 112);
        v11 = *(float*)(a1 + 80);
        if (v10 < v11) {
          v12 = *(_OWORD*)(a1 + 96);
          v13 = *(_OWORD*)(a1 + 64);
          *(float*)(a1 + 112) = v11;
          v14 = *(float*)(a1 + 48);
          *(_QWORD*)(a1 + 64) = v12;
          *(_QWORD*)(a1 + 96) = v13;
          *(float*)(a1 + 80) = v10;
          v15 = *(_OWORD*)(a1 + 64);
          *(_QWORD*)&v16 = *(_QWORD*)(a1 + 64);
          *((_QWORD*)&v16 + 1) = DWORD2(v12);
          *(_OWORD*)(a1 + 64) = v16;
          v17 = *(_OWORD*)(a1 + 96);
          *((_QWORD*)&v17 + 1) = DWORD2(v13);
          *(_OWORD*)(a1 + 96) = v17;
          if (v10 < v14) {
            v18 = *(_OWORD*)(a1 + 32);
            *(_QWORD*)(a1 + 32) = v15;
            *(float*)(a1 + 80) = v14;
            v19 = *(float*)(a1 + 16);
            v20 = *(_OWORD*)(a1 + 32);
            *(_QWORD*)(a1 + 64) = v18;
            *(float*)(a1 + 48) = v10;
            *(_QWORD*)&v21 = v20;
            *((_QWORD*)&v21 + 1) = DWORD2(v12);
            *(_OWORD*)(a1 + 32) = v21;
            v22 = *(_OWORD*)(a1 + 64);
            *((_QWORD*)&v22 + 1) = DWORD2(v18);
            *(_OWORD*)(a1 + 64) = v22;
            if (v10 < v19) {
              v23 = *(_OWORD*)a1;
              *(_QWORD*)a1 = v20;
              *(float*)(a1 + 16) = v10;
              v24 = *(_OWORD*)a1;
              *(float*)(a1 + 48) = v19;
              *(_QWORD*)(a1 + 32) = v23;
              *((_QWORD*)&v24 + 1) = DWORD2(v12);
              v25 = *(_OWORD*)(a1 + 32);
              *((_QWORD*)&v25 + 1) = DWORD2(v23);
              *(_OWORD*)a1 = v24;
              *(_OWORD*)(a1 + 32) = v25;
            }
          }
        }
      }
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v2 < 2) {
      return true;
    }
    if (v2 == 2) {
      if (*(float*)(a2 - 16) < *(float*)(a1 + 16)) {
        v3 = *(_OWORD*)a1;
        *(_DWORD*)a1 = *(_DWORD*)(a2 - 32);
        *(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 - 28);
        v4 = *(_OWORD*)a1;
        *((_QWORD*)&v4 + 1) = *(unsigned int*)(a2 - 24);
        *(_OWORD*)a1 = v4;
        *(_QWORD*)(a2 - 32) = v3;
      LABEL_17:
        v31 = *(_OWORD*)(a2 - 32);
        *((_QWORD*)&v31 + 1) = DWORD2(v3);
        *(_OWORD*)(a2 - 32) = v31;
        v32 = *(_DWORD*)(a1 + 16);
        *(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 - 16);
        *(_DWORD*)(a2 - 16) = v32;
      }
      return true;
    }
  }
  v33 = *(float*)(a1 + 48);
  v34 = *(float*)(a1 + 16);
  v35 = *(float*)(a1 + 80);
  if (v33 >= v34) {
    if (v35 < v33) {
      v50 = *(_OWORD*)(a1 + 64);
      v51 = *(_OWORD*)(a1 + 32);
      *(float*)(a1 + 48) = v35;
      *(float*)(a1 + 80) = v33;
      *(_QWORD*)(a1 + 32) = v50;
      *(_QWORD*)(a1 + 64) = v51;
      v52 = *(_OWORD*)(a1 + 32);
      *(_QWORD*)&v53 = *(_QWORD*)(a1 + 32);
      *((_QWORD*)&v53 + 1) = DWORD2(v50);
      *(_OWORD*)(a1 + 32) = v53;
      v54 = *(_OWORD*)(a1 + 64);
      *((_QWORD*)&v54 + 1) = DWORD2(v51);
      *(_OWORD*)(a1 + 64) = v54;
      if (v35 < v34) {
        v55 = *(_OWORD*)a1;
        *(_QWORD*)a1 = v52;
        *(float*)(a1 + 16) = v35;
        v56 = *(_OWORD*)a1;
        *(float*)(a1 + 48) = v34;
        *(_QWORD*)(a1 + 32) = v55;
        *((_QWORD*)&v56 + 1) = DWORD2(v50);
        v57 = *(_OWORD*)(a1 + 32);
        *((_QWORD*)&v57 + 1) = DWORD2(v55);
        *(_OWORD*)a1 = v56;
        *(_OWORD*)(a1 + 32) = v57;
      }
    }
  }
  else {
    v36 = *(_OWORD*)a1;
    v37 = HIDWORD(*(_QWORD*)a1);
    if (v35 >= v33) {
      v64 = *(_OWORD*)(a1 + 32);
      *(_DWORD*)(a1 + 32) = v36;
      *(_DWORD*)(a1 + 36) = v37;
      *(float*)(a1 + 16) = v33;
      *(float*)(a1 + 48) = v34;
      v65 = *(_OWORD*)(a1 + 32);
      *(_QWORD*)a1 = v64;
      v66 = *(_OWORD*)a1;
      *((_QWORD*)&v66 + 1) = DWORD2(v64);
      *(_QWORD*)&v64 = v65;
      *((_QWORD*)&v64 + 1) = DWORD2(v36);
      *(_OWORD*)a1 = v66;
      *(_OWORD*)(a1 + 32) = v64;
      if (v35 >= v34) {
        goto LABEL_33;
      }
      v67 = *(_OWORD*)(a1 + 64);
      *(_QWORD*)(a1 + 64) = v65;
      *(float*)(a1 + 48) = v35;
      *(_QWORD*)(a1 + 32) = v67;
      v68 = *(_OWORD*)(a1 + 32);
      *((_QWORD*)&v68 + 1) = DWORD2(v67);
      v40 = *(_OWORD*)(a1 + 64);
      *((_QWORD*)&v40 + 1) = DWORD2(v36);
      *(_OWORD*)(a1 + 32) = v68;
    }
    else {
      v38 = *(_OWORD*)(a1 + 64);
      *(_DWORD*)(a1 + 64) = v36;
      *(_DWORD*)(a1 + 68) = v37;
      *(float*)(a1 + 16) = v35;
      *(_QWORD*)a1 = v38;
      v39 = *(_OWORD*)a1;
      *((_QWORD*)&v39 + 1) = DWORD2(v38);
      v40 = *(_OWORD*)(a1 + 64);
      *((_QWORD*)&v40 + 1) = DWORD2(v36);
      *(_OWORD*)a1 = v39;
    }
    *(_OWORD*)(a1 + 64) = v40;
    *(float*)(a1 + 80) = v34;
  }
LABEL_33:
  v69 = a1 + 96;
  if (a1 + 96 == a2) {
    return true;
  }
  v70 = a1 + 64;
  v71 = 0;
  v72 = 0;
  while (1) {
    v75 = *(float*)(v69 + 16);
    if (v75 < *(float*)(v70 + 16)) {
      v76 = *(_OWORD*)v69;
      v77 = v71;
      do {
        v78 = a1 + v77;
        v79 = *(_DWORD*)(a1 + v77 + 68);
        *(_DWORD*)(v78 + 96) = *(_DWORD*)(a1 + v77 + 64);
        *(_DWORD*)(v78 + 100) = v79;
        v80 = *(_OWORD*)(a1 + v77 + 96);
        *((_QWORD*)&v80 + 1) = *(unsigned int*)(a1 + v77 + 72);
        *(_OWORD*)(v78 + 96) = v80;
        *(_DWORD*)(v78 + 112) = *(_DWORD*)(a1 + v77 + 80);
        if (v77 == -64) {
          v73 = a1;
          goto LABEL_36;
        }
        v77 -= 32;
      } while (v75 < *(float*)(v78 + 48));
      v73 = a1 + v77 + 96;
    LABEL_36:
      *(_QWORD*)v73 = v76;
      ++v72;
      *(float*)(v73 + 16) = v75;
      v74 = *(_OWORD*)v73;
      *((_QWORD*)&v74 + 1) = DWORD2(v76);
      *(_OWORD*)v73 = v74;
      if (v72 == 8) {
        return v69 + 32 == a2;
      }
    }
    v70 = v69;
    v69 += 32;
    v71 += 32;
    if (v69 == a2) {
      return true;
    }
  }
}

__int64 GameHr_10212a0(__int64 a1)
{
  __int64 result;

  result = GameRoutine_125ea20(*(_QWORD*)GameData_212c7b0[0]);
  *(_QWORD*)(a1 + 224) = result;
  return result;
}

void GameHr_10215d0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  const char* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64* v16;
    __int64 v17;
    unsigned __int64 v18;
    unsigned __int64 v19;
    int v20;
    int v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
  } v16_;

  if (GameSubquestData_125ea20() != 0) {
    v2 = msg_MessageManager_instance__ptr[0];
    v3 = *msg_MessageManager_instance__ptr[0];
    v4 = *(const char**)(GameSubquestData_125ea20() + 32);
    if (v4 != nullptr) {
      v5 = *v2;
      v16_.v22 = -1;
      v16_.v23 = -1;
      v16_.v24 = -1;
      v16_.v25 = -1;
      v16_.v26 = -1;
      v16_.v27 = -1;
      v16_.v28 = -1;
      v16_.v29 = -1;
      v16_.v30 = -1;
      v16_.v31 = -1;
      v16_.v32 = -1;
      v16_.v33 = -1;
      v16_.v16 = GameData_212e348 + 2;
      v16_.v17 = 0xFFFF0001FFFF0000LL;
      v16_.v18 = 0xFFFF0004FFFF0002LL;
      v16_.v19 = 0xFFFF0006FFFF0005LL;
      v16_.v34 = 8;
      v16_.v20 = -65529;
      v16_.v21 = -65528;
      v6 = GameRoutine_a4dbe0_alt1(v5, v4, 0);
      if (v6 == nullptr) {
        v6 = *msg_MessageManager_empty_text__ptr;
      }
    }
    else {
      v6 = &GameData_1a9f09e;
    }
    GameRoutine_60a020_alt2((char*)(v3 + 14824), v6);
    v7 = *(_QWORD*)GameData_212dbf0[0];
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        32, 16, 0);
    v10 = v9;
    v16_.v16 = (_QWORD*)(((char*)0x20LL) + 1);
    v16_.v17 = 25;
    v16_.v18 = v9;
    *(_WORD*)(v9 + 24) = 52;
    v11 = "MID_LGV_1SEO_LG13_009_m04";
  }
  else {
    v7 = *(_QWORD*)GameData_212dbf0[0];
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        32, 16, 0);
    v10 = v9;
    v16_.v16 = (_QWORD*)(((char*)0x20LL) + 1);
    v16_.v17 = 25;
    v16_.v18 = v9;
    *(_WORD*)(v9 + 24) = 53;
    v11 = "MID_LGV_1SEO_LG13_009_m05";
  }
  v12 = *(_QWORD*)v11;
  v13 = *((_QWORD*)v11 + 1);
  v14 = *((_QWORD*)v11 + 2);
  *(_QWORD*)v9 = v12;
  *(_QWORD*)(v9 + 8) = v13;
  *(_QWORD*)(v9 + 16) = v14;
  GameRoutine_efb6f0_alt1(v7, a1 + 16, &v16_.v16);
  v15 = 128;
  if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
    v15 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v15, v10);
}

void GameHr_10217c0()
{
  if (GameData_221bea8 != 0) {
    *(_DWORD*)(GameData_221bea8 + 152) = 5;
  }
}

__int64 GameHr_1021e80(__int64 a1, unsigned __int8* a2, _DWORD* a3)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  _QWORD* v26;
  __int64 v27;
  bool v28;
  char v29;
  _QWORD* v30;
  int v31;
  __int64 v32;
  _QWORD* v34;

  v4 = 0xF0F0F0F0F0F0F0F1LL *
       ((__int64)(*(_QWORD*)(a1 + 24) - *(_QWORD*)(a1 + 16)) >> 3);
  if ((int)v4 < 1) {
    v7 = 0;
    v29 = 0;
    *a3 = *(__int16*)(*(_QWORD*)a2 + 492LL);
  }
  else {
    v5 = v4 & 0x7FFFFFFF;
    v7 = 0;
    v8 = nullptr;
    v9 = 0;
    v10 = GameData_212d020[0];
    v11 = v5 + 1;
    v12 = 136 * v5;
    do {
      v13 = *(_QWORD*)(a1 + 16);
      v14 = v13 + v12;
      if (*(_QWORD*)(v13 + v12 - 112) == *(_QWORD*)a2) {
        v15 = v14 - 136;
        if (*(_DWORD*)(v14 - 136) == *(_DWORD*)(*(_QWORD*)v10 + 5536LL) &&
            (*(_BYTE*)(v13 + v12 - 4) & 2) != 0) {
          if ((unsigned __int64)v8 < v9) {
            *v8++ = v15;
          }
          else {
            v16 = (unsigned __int64)v8 - v7;
            v17 = ((__int64)v8 - v7) >> 3;
            v18 = v17 + 1;
            if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
              GameRoutine_1023920_alt1();
            }
            if ((__int64)(v9 - v7) >> 2 > v18) {
              v18 = (__int64)(v9 - v7) >> 2;
            }
            if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
              v19 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v19 = v18;
            }
            if (v19 != 0) {
              if (v19 >> 61 != 0) {
                GameRoutine_60a210_alt1();
              }
              v20 = v7;
              v21 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
              v7 = v20;
            }
            else {
              v21 = 0;
            }
            v9 = v21 + 8 * v19;
            v22 = v21 + v16 - 8 * v17;
            *(_QWORD*)(v21 + v16) = v15;
            v8 = (_QWORD*)(v21 + v16 + 8);
            v23 = v7;
            memcpy(v22, v7, v16);
            if (v23 != 0) {
              v24 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v24 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v23);
            }
            v7 = v22;
          }
        }
      }
      --v11;
      v12 -= 136;
    } while (v11 > 1);
    v25 = *(__int16*)(*(_QWORD*)a2 + 492LL);
    *a3 = v25;
    if ((a2[12] & 1) == 0 || (_QWORD*)v7 == v8) {
    LABEL_36:
      if ((_QWORD*)v7 == v8) {
        v29 = 0;
      }
      else {
        v29 = 0;
        v30 = (_QWORD*)v7;
        do {
          while (*(_DWORD*)*v30 != 1) {
            v31 = *(_DWORD*)(*v30++ + 128LL);
            v29 = 1;
            if (v31 < v25) {
              v25 = v31;
            }
            *a3 = v25;
            if (v30 == v8) {
              goto LABEL_49;
            }
          }
          ++v30;
        } while (v30 != v8);
        if ((v29 & 1) != 0) {
          v29 = 1;
        }
        else {
          v29 = 0;
          v34 = (_QWORD*)v7;
          do {
            if (*(_DWORD*)*v34 == 1) {
              v29 = 1;
              if (v25 <= (signed __int32)*(_DWORD*)(*v34 + 128LL)) {
                v25 = *(_DWORD*)(*v34 + 128LL);
              }
              *a3 = v25;
            }
            ++v34;
          } while (v34 != v8);
        }
      }
    }
    else {
      v26 = (_QWORD*)v7;
      while (1) {
        v27 = *v26;
        if (*(_BYTE*)(*v26 + 112LL) == 1) {
          v28 = *(unsigned __int8*)(v27 + 84) == a2[8] &&
                *(unsigned __int8*)(v27 + 85) == a2[9];
          if (v28 && *(_QWORD*)(v27 + 96) == *(_QWORD*)a2) {
            break;
          }
        }
        if (++v26 == v8) {
          goto LABEL_36;
        }
      }
      v29 = 1;
      *a3 = *(_DWORD*)(v27 + 128);
    }
  }
LABEL_49:
  if (v7 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v32,
                                  v7);
  }
  return v29 & 1;
}

_QWORD* GameHr_1025a10(_QWORD* a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  memcpy((__int64)a1, (__int64)a2, 0x100u);
  v4 = a2[32];
  a2[32] = 0;
  v5 = a1[32];
  a1[32] = v4;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  v5);
  }
  v8 = a1[33];
  if (v8 != 0) {
    v9 = *v6;
    a1[34] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v8);
    a1[34] = 0;
    a1[35] = 0;
    a1[33] = 0;
  }
  a1[33] = a2[33];
  a1[34] = a2[34];
  a1[35] = a2[35];
  a2[34] = 0;
  a2[35] = 0;
  a2[33] = 0;
  v11 = a1[36];
  if (v11 != 0) {
    v12 = *v6;
    a1[37] = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v13, v11);
    a1[37] = 0;
    a1[38] = 0;
    a1[36] = 0;
  }
  a1[36] = a2[36];
  a1[37] = a2[37];
  a1[38] = a2[38];
  a2[37] = 0;
  a2[38] = 0;
  a2[36] = 0;
  v14 = a2[40];
  v15 = a1[41];
  a1[39] = a2[39];
  a1[40] = v14;
  if (v15 != 0) {
    v16 = *v6;
    a1[42] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17, v15);
    a1[42] = 0;
    a1[43] = 0;
    a1[41] = 0;
  }
  a1[41] = a2[41];
  a1[42] = a2[42];
  a1[43] = a2[43];
  a2[42] = 0;
  a2[43] = 0;
  a2[41] = 0;
  v18 = a1[44];
  if (v18 != 0) {
    v19 = *v6;
    a1[45] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(v19 + v20, v18);
    a1[45] = 0;
    a1[46] = 0;
    a1[44] = 0;
  }
  a1[44] = a2[44];
  a1[45] = a2[45];
  a1[46] = a2[46];
  a2[45] = 0;
  a2[46] = 0;
  a2[44] = 0;
  return a1;
}

float GameHr_1025be0(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  _QWORD* v4;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  float result;
  __int64 v21;
  char* v22;
  char* v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  char* v28;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v4 = *(_QWORD**)(a1 + 352);
  v3 = *(_QWORD*)(a1 + 360);
  if ((unsigned __int64)v4 >= v3) {
    v9 = *(_QWORD*)(a1 + 344);
    v10 = (char*)v4 - v9;
    v11 = ((__int64)v4 - v9) >> 3;
    v12 = v11 + 1;
    if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
      GameRoutine_da3110_alt1(),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    v13 = v3 - v9;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210_alt1(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = (unsigned __int64)v4 - v9;
    v19 = (__int64)&v10[v16 + -8 * v11];
    *(_QWORD*)&v10[v16] = a2;
    v8 = (__int64)&v10[v16 + 8];
    memcpy(v19, v9, v18),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    *(_QWORD*)(a1 + 344) = v19;
    *(_QWORD*)(a1 + 352) = v8;
    *(_QWORD*)(a1 + 360) = v17;
    if (v9 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v21, v9),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    }
  }
  else {
    *v4 = a2;
    v8 = (__int64)(v4 + 1);
  }
  *(_QWORD*)(a1 + 352) = v8;
  if ((a3 & 1) != 0) {
    ++*(_DWORD*)(a1 + 28);
  }
  if (*(_BYTE*)(a2 + 1312) == 1) {
    v23 = *(char**)(a1 + 368);
    v22 = *(char**)(a1 + 376);
    v24 = (__int64*)(a2 + 1304);
    if (v23 != v22) {
      v25 = *v24;
      v26 = v22 - v23 - 8;
      if ((~(_BYTE)v26 & 0x18) != 0) {
        v27 = ((unsigned __int8)((unsigned int)v26 >> 3) + 1) & 3;
        while (*(_QWORD*)v23 != v25) {
          v23 += 8;
          if (--v27 == 0) {
            goto LABEL_25;
          }
        }
      }
      else {
      LABEL_25:
        if (v26 < 0x18) {
        LABEL_37:
          GameRoutine_7f3400_alt1((__int64*)(a1 + 368), v24),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
          result = *(float*)(a2 + 1320) + *(float*)(a1 + 24);
          *(float*)(a1 + 24) = result;
          return result;
        }
        v23 += 16;
        while (1) {
          if (*((_QWORD*)v23 - 2) == v25) {
            v23 -= 16;
            goto LABEL_36;
          }
          if (*((_QWORD*)v23 - 1) == v25) {
            v23 -= 8;
            goto LABEL_36;
          }
          if (*(_QWORD*)v23 == v25) {
            goto LABEL_36;
          }
          if (*((_QWORD*)v23 + 1) == v25) {
            break;
          }
          v28 = v23 + 16;
          v23 += 32;
          if (v28 == v22) {
            goto LABEL_37;
          }
        }
        v23 += 8;
      }
    }
  LABEL_36:
    if (v23 != v22) {
      return result;
    }
    goto LABEL_37;
  }
  return result;
}

_QWORD* GameHr_1026f20(_QWORD* result, float* a2, float* a3, __int64* a4,
                       __int64* a5)
{
  float v5;
  float v6;
  __int64 v7;
  __int16 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int16 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int16 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int16 v25;
  __int64 v26;
  __int64 v27;
  __int16 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int16 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int16 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int16 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int16 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int16 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int16 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int16 v62;
  __int64 v63;

  v5 = a2[2];
  v6 = a3[2];
  if (v5 >= *((float*)result + 2)) {
    if (v6 < v5) {
      v13 = *((_QWORD*)a2 + 1);
      v12 = *((_QWORD*)a2 + 2);
      v14 = *(_QWORD*)a2;
      v15 = *((_WORD*)a3 + 8);
      v16 = *((_QWORD*)a3 + 1);
      *(_QWORD*)a2 = *(_QWORD*)a3;
      *((_QWORD*)a2 + 1) = v16;
      *((_WORD*)a2 + 8) = v15;
      *(_QWORD*)a3 = v14;
      *((_QWORD*)a3 + 1) = v13;
      *((_WORD*)a3 + 8) = v12;
      if (a2[2] < *((float*)result + 2)) {
        v17 = *((_QWORD*)a2 + 1);
        v18 = *result;
        v19 = result[1];
        v20 = *((_WORD*)a2 + 8);
        *result = *(_QWORD*)a2;
        result[1] = v17;
        v21 = result[2];
        *((_WORD*)result + 8) = v20;
        *(_QWORD*)a2 = v18;
        *((_QWORD*)a2 + 1) = v19;
        *((_WORD*)a2 + 8) = v21;
      }
    }
  }
  else {
    if (v6 < v5) {
      v7 = *((_QWORD*)a3 + 1);
      v8 = *((_WORD*)a3 + 8);
      v9 = *result;
      v10 = result[1];
      *result = *(_QWORD*)a3;
      result[1] = v7;
      v11 = result[2];
      *((_WORD*)result + 8) = v8;
    LABEL_9:
      *(_QWORD*)a3 = v9;
      *((_QWORD*)a3 + 1) = v10;
      *((_WORD*)a3 + 8) = v11;
      goto LABEL_10;
    }
    v23 = result[1];
    v22 = result[2];
    v24 = *result;
    v25 = *((_WORD*)a2 + 8);
    v26 = *((_QWORD*)a2 + 1);
    *result = *(_QWORD*)a2;
    result[1] = v26;
    *((_WORD*)result + 8) = v25;
    *(_QWORD*)a2 = v24;
    *((_QWORD*)a2 + 1) = v23;
    *((_WORD*)a2 + 8) = v22;
    if (a3[2] < a2[2]) {
      v27 = *((_QWORD*)a3 + 1);
      v9 = *(_QWORD*)a2;
      v10 = *((_QWORD*)a2 + 1);
      v28 = *((_WORD*)a3 + 8);
      *(_QWORD*)a2 = *(_QWORD*)a3;
      *((_QWORD*)a2 + 1) = v27;
      v11 = *((_QWORD*)a2 + 2);
      *((_WORD*)a2 + 8) = v28;
      goto LABEL_9;
    }
  }
LABEL_10:
  if (*((float*)a4 + 2) < a3[2]) {
    v30 = *((_QWORD*)a3 + 1);
    v29 = *((_QWORD*)a3 + 2);
    v31 = *(_QWORD*)a3;
    v32 = *((_WORD*)a4 + 8);
    v33 = a4[1];
    *(_QWORD*)a3 = *a4;
    *((_QWORD*)a3 + 1) = v33;
    *((_WORD*)a3 + 8) = v32;
    *a4 = v31;
    a4[1] = v30;
    *((_WORD*)a4 + 8) = v29;
    if (a3[2] < a2[2]) {
      v35 = *((_QWORD*)a2 + 1);
      v34 = *((_QWORD*)a2 + 2);
      v36 = *(_QWORD*)a2;
      v37 = *((_WORD*)a3 + 8);
      v38 = *((_QWORD*)a3 + 1);
      *(_QWORD*)a2 = *(_QWORD*)a3;
      *((_QWORD*)a2 + 1) = v38;
      *((_WORD*)a2 + 8) = v37;
      *(_QWORD*)a3 = v36;
      *((_QWORD*)a3 + 1) = v35;
      *((_WORD*)a3 + 8) = v34;
      if (a2[2] < *((float*)result + 2)) {
        v39 = *((_QWORD*)a2 + 1);
        v40 = *result;
        v41 = result[1];
        v42 = *((_WORD*)a2 + 8);
        *result = *(_QWORD*)a2;
        result[1] = v39;
        v43 = result[2];
        *((_WORD*)result + 8) = v42;
        *(_QWORD*)a2 = v40;
        *((_QWORD*)a2 + 1) = v41;
        *((_WORD*)a2 + 8) = v43;
      }
    }
  }
  if (*((float*)a5 + 2) < *((float*)a4 + 2)) {
    v45 = a4[1];
    v44 = a4[2];
    v46 = *a4;
    v47 = *((_WORD*)a5 + 8);
    v48 = a5[1];
    *a4 = *a5;
    a4[1] = v48;
    *((_WORD*)a4 + 8) = v47;
    *a5 = v46;
    a5[1] = v45;
    *((_WORD*)a5 + 8) = v44;
    if (*((float*)a4 + 2) < a3[2]) {
      v50 = *((_QWORD*)a3 + 1);
      v49 = *((_QWORD*)a3 + 2);
      v51 = *(_QWORD*)a3;
      v52 = *((_WORD*)a4 + 8);
      v53 = a4[1];
      *(_QWORD*)a3 = *a4;
      *((_QWORD*)a3 + 1) = v53;
      *((_WORD*)a3 + 8) = v52;
      *a4 = v51;
      a4[1] = v50;
      *((_WORD*)a4 + 8) = v49;
      if (a3[2] < a2[2]) {
        v55 = *((_QWORD*)a2 + 1);
        v54 = *((_QWORD*)a2 + 2);
        v56 = *(_QWORD*)a2;
        v57 = *((_WORD*)a3 + 8);
        v58 = *((_QWORD*)a3 + 1);
        *(_QWORD*)a2 = *(_QWORD*)a3;
        *((_QWORD*)a2 + 1) = v58;
        *((_WORD*)a2 + 8) = v57;
        *(_QWORD*)a3 = v56;
        *((_QWORD*)a3 + 1) = v55;
        *((_WORD*)a3 + 8) = v54;
        if (a2[2] < *((float*)result + 2)) {
          v59 = *((_QWORD*)a2 + 1);
          v60 = *result;
          v61 = result[1];
          v62 = *((_WORD*)a2 + 8);
          *result = *(_QWORD*)a2;
          result[1] = v59;
          v63 = result[2];
          *((_WORD*)result + 8) = v62;
          *(_QWORD*)a2 = v60;
          *((_QWORD*)a2 + 1) = v61;
          *((_WORD*)a2 + 8) = v63;
        }
      }
    }
  }
  return result;
}

bool GameHr_1027180(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  signed __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int16 v6;
  __int64 v7;
  float v8;
  float v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int16 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int16 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int16 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int16 v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int16 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int16 v52;
  float v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int16 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int16 v63;
  float v64;
  __int64 v65;
  __int16 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  float v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  int v75;
  __int64 v76;
  float v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  float v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int16 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int16 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int16 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int16 v107;
  __int64 v109;

  v2 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 3);
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v8 = *(float*)(a1 + 32);
      v9 = *(float*)(a2 - 16);
      v10 = (_QWORD*)(a2 - 24);
      if (v8 < *(float*)(a1 + 8)) {
        if (v9 >= v8) {
          v59 = *(_QWORD*)(a1 + 16);
          v60 = *(_QWORD*)(a1 + 32);
          v62 = *(_QWORD*)a1;
          v61 = *(_QWORD*)(a1 + 8);
          *(_QWORD*)a1 = *(_QWORD*)(a1 + 24);
          *(_QWORD*)(a1 + 8) = v60;
          v63 = *(_WORD*)(a1 + 40);
          *(_QWORD*)(a1 + 24) = v62;
          *(_QWORD*)(a1 + 32) = v61;
          *(_WORD*)(a1 + 40) = v59;
          v64 = *(float*)(a1 + 32);
          *(_WORD*)(a1 + 16) = v63;
          if (*(float*)(a2 - 16) >= v64) {
            return true;
          }
          v65 = *(_QWORD*)(a2 - 16);
          v66 = *(_WORD*)(a2 - 8);
          v12 = *(_QWORD*)(a1 + 24);
          v13 = *(_QWORD*)(a1 + 32);
          *(_QWORD*)(a1 + 24) = *v10;
          *(_QWORD*)(a1 + 32) = v65;
          v15 = *(_QWORD*)(a1 + 40);
          *(_WORD*)(a1 + 40) = v66;
        }
        else {
          v11 = *(_QWORD*)(a2 - 16);
          v12 = *(_QWORD*)a1;
          v13 = *(_QWORD*)(a1 + 8);
          v14 = *(_WORD*)(a2 - 8);
          *(_QWORD*)a1 = *v10;
          *(_QWORD*)(a1 + 8) = v11;
          v15 = *(_QWORD*)(a1 + 16);
          *(_WORD*)(a1 + 16) = v14;
        }
        *v10 = v12;
        *(_QWORD*)(a2 - 16) = v13;
        *(_WORD*)(a2 - 8) = v15;
        return true;
      }
      if (v9 >= v8) {
        return true;
      }
      v33 = *(_QWORD*)(a1 + 32);
      v32 = *(_QWORD*)(a1 + 40);
      v34 = *(_QWORD*)(a1 + 24);
      v35 = *(_WORD*)(a2 - 8);
      v36 = *(_QWORD*)(a2 - 16);
      *(_QWORD*)(a1 + 24) = *v10;
      *(_QWORD*)(a1 + 32) = v36;
      *(_WORD*)(a1 + 40) = v35;
      *v10 = v34;
      *(_QWORD*)(a2 - 16) = v33;
      *(_WORD*)(a2 - 8) = v32;
      break;
    case 4LL:
      v24 = *(float*)(a1 + 32);
      v25 = *(float*)(a1 + 8);
      v26 = *(float*)(a1 + 56);
      if (v24 >= v25) {
        if (v26 < v24) {
          v48 = *(_QWORD*)(a1 + 40);
          v49 = *(_QWORD*)(a1 + 56);
          v51 = *(_QWORD*)(a1 + 24);
          v50 = *(_QWORD*)(a1 + 32);
          *(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 48);
          *(_QWORD*)(a1 + 32) = v49;
          v52 = *(_WORD*)(a1 + 64);
          *(_QWORD*)(a1 + 48) = v51;
          *(_QWORD*)(a1 + 56) = v50;
          *(_WORD*)(a1 + 64) = v48;
          v53 = *(float*)(a1 + 32);
          *(_WORD*)(a1 + 40) = v52;
          if (v53 < v25) {
            v54 = *(_QWORD*)(a1 + 16);
            v55 = *(_QWORD*)(a1 + 32);
            v57 = *(_QWORD*)a1;
            v56 = *(_QWORD*)(a1 + 8);
            *(_QWORD*)a1 = *(_QWORD*)(a1 + 24);
            *(_QWORD*)(a1 + 8) = v55;
            v58 = *(_WORD*)(a1 + 40);
            *(_QWORD*)(a1 + 24) = v57;
            *(_QWORD*)(a1 + 32) = v56;
            *(_WORD*)(a1 + 40) = v54;
            *(_WORD*)(a1 + 16) = v58;
          }
        }
      }
      else if (v26 >= v24) {
        v82 = *(_QWORD*)(a1 + 8);
        v83 = *(_QWORD*)(a1 + 16);
        v84 = *(_QWORD*)(a1 + 24);
        v85 = *(_QWORD*)(a1 + 32);
        *(_QWORD*)(a1 + 24) = *(_QWORD*)a1;
        *(_QWORD*)(a1 + 32) = v82;
        *(_QWORD*)a1 = v84;
        *(_QWORD*)(a1 + 8) = v85;
        LOWORD(v84) = *(_WORD*)(a1 + 40);
        *(_WORD*)(a1 + 40) = v83;
        v86 = *(float*)(a1 + 32);
        *(_WORD*)(a1 + 16) = v84;
        if (v26 < v86) {
          v87 = *(_QWORD*)(a1 + 40);
          v88 = *(_QWORD*)(a1 + 56);
          v90 = *(_QWORD*)(a1 + 24);
          v89 = *(_QWORD*)(a1 + 32);
          *(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 48);
          *(_QWORD*)(a1 + 32) = v88;
          v91 = *(_WORD*)(a1 + 64);
          *(_QWORD*)(a1 + 48) = v90;
          *(_QWORD*)(a1 + 56) = v89;
          *(_WORD*)(a1 + 64) = v87;
          *(_WORD*)(a1 + 40) = v91;
        }
      }
      else {
        v27 = *(_QWORD*)(a1 + 56);
        v29 = *(_QWORD*)(a1 + 8);
        v28 = *(_QWORD*)(a1 + 16);
        v30 = *(_QWORD*)a1;
        *(_QWORD*)a1 = *(_QWORD*)(a1 + 48);
        *(_QWORD*)(a1 + 8) = v27;
        v31 = *(_WORD*)(a1 + 64);
        *(_QWORD*)(a1 + 48) = v30;
        *(_QWORD*)(a1 + 56) = v29;
        *(_WORD*)(a1 + 64) = v28;
        *(_WORD*)(a1 + 16) = v31;
      }
      if (*(float*)(a2 - 16) >= *(float*)(a1 + 56)) {
        return true;
      }
      v92 = a2 - 24;
      v94 = *(_QWORD*)(a1 + 56);
      v93 = *(_QWORD*)(a1 + 64);
      v95 = *(_QWORD*)(a1 + 48);
      v96 = *(_WORD*)(a2 - 8);
      v97 = *(_QWORD*)(a2 - 16);
      *(_QWORD*)(a1 + 48) = *(_QWORD*)(a2 - 24);
      *(_QWORD*)(a1 + 56) = v97;
      *(_WORD*)(a1 + 64) = v96;
      *(_QWORD*)v92 = v95;
      *(_QWORD*)(v92 + 8) = v94;
      *(_WORD*)(v92 + 16) = v93;
      if (*(float*)(a1 + 56) >= *(float*)(a1 + 32)) {
        return true;
      }
      v98 = *(_QWORD*)(a1 + 40);
      v99 = *(_QWORD*)(a1 + 56);
      v101 = *(_QWORD*)(a1 + 24);
      v100 = *(_QWORD*)(a1 + 32);
      *(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 48);
      *(_QWORD*)(a1 + 32) = v99;
      v102 = *(_WORD*)(a1 + 64);
      *(_QWORD*)(a1 + 48) = v101;
      *(_QWORD*)(a1 + 56) = v100;
      *(_WORD*)(a1 + 64) = v98;
      *(_WORD*)(a1 + 40) = v102;
      break;
    case 5LL:
      GameRoutine_1026f20((_QWORD*)a1, (float*)(a1 + 24), (float*)(a1 + 48),
                          (__int64*)(a1 + 72), (__int64*)(a2 - 24));
      return true;
    default:
      goto LABEL_13;
    }
    if (*(float*)(a1 + 32) < *(float*)(a1 + 8)) {
      v103 = *(_QWORD*)(a1 + 16);
      v104 = *(_QWORD*)(a1 + 32);
      v106 = *(_QWORD*)a1;
      v105 = *(_QWORD*)(a1 + 8);
      *(_QWORD*)a1 = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(a1 + 8) = v104;
      v107 = *(_WORD*)(a1 + 40);
      *(_QWORD*)(a1 + 24) = v106;
      *(_QWORD*)(a1 + 32) = v105;
      *(_WORD*)(a1 + 40) = v103;
      *(_WORD*)(a1 + 16) = v107;
    }
    return true;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    if (*(float*)(a2 - 16) < *(float*)(a1 + 8)) {
      v3 = *(_QWORD*)(a2 - 16);
      v4 = *(_QWORD*)a1;
      v5 = *(_QWORD*)(a1 + 8);
      v6 = *(_WORD*)(a2 - 8);
      *(_QWORD*)a1 = *(_QWORD*)(a2 - 24);
      *(_QWORD*)(a1 + 8) = v3;
      v7 = *(_QWORD*)(a1 + 16);
      *(_WORD*)(a1 + 16) = v6;
      *(_QWORD*)(a2 - 24) = v4;
      *(_QWORD*)(a2 - 16) = v5;
      *(_WORD*)(a2 - 8) = v7;
    }
    return true;
  }
LABEL_13:
  v16 = *(float*)(a1 + 32);
  v17 = *(float*)(a1 + 8);
  v18 = *(float*)(a1 + 56);
  v19 = a1 + 48;
  if (v16 >= v17) {
    if (v18 < v16) {
      v37 = *(_QWORD*)(a1 + 56);
      v39 = *(_QWORD*)(a1 + 32);
      v38 = *(_QWORD*)(a1 + 40);
      v40 = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(a1 + 24) = *(_QWORD*)v19;
      *(_QWORD*)(a1 + 32) = v37;
      v41 = *(_WORD*)(a1 + 64);
      *(_QWORD*)v19 = v40;
      *(_QWORD*)(a1 + 56) = v39;
      *(_WORD*)(a1 + 64) = v38;
      v42 = *(float*)(a1 + 32);
      *(_WORD*)(a1 + 40) = v41;
      if (v42 < v17) {
        v43 = *(_QWORD*)(a1 + 16);
        v44 = *(_QWORD*)(a1 + 32);
        v46 = *(_QWORD*)a1;
        v45 = *(_QWORD*)(a1 + 8);
        *(_QWORD*)a1 = *(_QWORD*)(a1 + 24);
        *(_QWORD*)(a1 + 8) = v44;
        v47 = *(_WORD*)(a1 + 40);
        *(_QWORD*)(a1 + 24) = v46;
        *(_QWORD*)(a1 + 32) = v45;
        *(_WORD*)(a1 + 40) = v43;
        *(_WORD*)(a1 + 16) = v47;
      }
    }
  }
  else {
    if (v18 >= v16) {
      v67 = *(_QWORD*)(a1 + 8);
      v68 = *(_QWORD*)(a1 + 16);
      v69 = *(_QWORD*)(a1 + 24);
      v70 = *(_QWORD*)(a1 + 32);
      *(_QWORD*)(a1 + 24) = *(_QWORD*)a1;
      *(_QWORD*)(a1 + 32) = v67;
      *(_QWORD*)a1 = v69;
      *(_QWORD*)(a1 + 8) = v70;
      LOWORD(v69) = *(_WORD*)(a1 + 40);
      *(_WORD*)(a1 + 40) = v68;
      v71 = *(float*)(a1 + 32);
      *(_WORD*)(a1 + 16) = v69;
      if (v18 >= v71) {
        goto LABEL_33;
      }
      v72 = *(_QWORD*)(a1 + 56);
      v22 = *(_QWORD*)(a1 + 32);
      v21 = *(_QWORD*)(a1 + 40);
      v23 = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(a1 + 24) = *(_QWORD*)v19;
      *(_QWORD*)(a1 + 32) = v72;
      *(_WORD*)(a1 + 40) = *(_WORD*)(a1 + 64);
    }
    else {
      v20 = *(_QWORD*)(a1 + 56);
      v22 = *(_QWORD*)(a1 + 8);
      v21 = *(_QWORD*)(a1 + 16);
      v23 = *(_QWORD*)a1;
      *(_QWORD*)a1 = *(_QWORD*)v19;
      *(_QWORD*)(a1 + 8) = v20;
      *(_WORD*)(a1 + 16) = *(_WORD*)(a1 + 64);
    }
    *(_QWORD*)v19 = v23;
    *(_QWORD*)(a1 + 56) = v22;
    *(_WORD*)(a1 + 64) = v21;
  }
LABEL_33:
  v73 = a1 + 72;
  if (a1 + 72 == a2) {
    return true;
  }
  v74 = 0;
  v75 = 0;
  while (1) {
    v77 = *(float*)(v73 + 8);
    if (v77 < *(float*)(v19 + 8)) {
      v78 = *(_QWORD*)v73;
      v109 = *(_QWORD*)(v73 + 12);
      v79 = v74;
      do {
        v80 = a1 + v79;
        v81 = *(_QWORD*)(a1 + v79 + 56);
        *(_QWORD*)(v80 + 72) = *(_QWORD*)(a1 + v79 + 48);
        *(_QWORD*)(v80 + 80) = v81;
        *(_WORD*)(v80 + 88) = *(_WORD*)(a1 + v79 + 64);
        if (v79 == -48) {
          v76 = a1;
          goto LABEL_36;
        }
        v79 -= 24;
      } while (v77 < *(float*)(v80 + 32));
      v76 = a1 + v79 + 72;
    LABEL_36:
      *(_QWORD*)v76 = v78;
      ++v75;
      *(float*)(v76 + 8) = v77;
      *(_DWORD*)(v76 + 12) = v109;
      *(_WORD*)(v76 + 16) = WORD2(v109);
      if (v75 == 8) {
        return v73 + 24 == a2;
      }
    }
    v19 = v73;
    v73 += 24;
    v74 += 24;
    if (v73 == a2) {
      return true;
    }
  }
}

__int64 GameHr_1029b30(__int64 result)
{
  __int64 v3;
  unsigned __int64 v4;
  _WORD v5[2];

  v3 = *(_QWORD*)(result + 160);
  v4 = *(int*)(result + 232);
  if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(result + 168) - v3) >> 5) > v4) {
    LOBYTE(v5[1]) = 0;
    v5[0] = 1;
    return GameHr_7fa250(result, (__int64*)(v3 + 96LL * (int)v4), (__int64)v5);
  }
  return result;
}

__int64 GameHr_1029ba0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_DWORD*)(result + 232) + 1;
  v3 = *(_QWORD*)(result + 160);
  v2 = *(_QWORD*)(result + 168);
  *(_DWORD*)(result + 232) = v1;
  LODWORD(v3) = -1431655765 * ((unsigned __int64)(v2 - v3) >> 5);
  v4 = *(_QWORD*)(result + 8);
  if (v1 >= (int)v3 && v4 != 0) {
    while (1) {
      if (*(_BYTE*)v4 == 2) {
        if (*(_DWORD*)(v4 + 32) == 1) {
          *(_QWORD*)(result + 16) = v4;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v4 == 0) {
        return result;
      }
      v4 += 64;
    }
  }
  return result;
}

void GameHr_102c400(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v4;
  unsigned __int8* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  unsigned __int64 v43;
  __int64 v44;
  char v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64* v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  unsigned __int64* v60;
  struct {
    __int64 v61;
    __int64 v62;
    int v63;
    char gap52_[4];
    __int64 v64;
    unsigned __int64 v65;
    __int64 v66;
    __int64 v67;
    unsigned __int64 v68;
    __int64 v69;
    int v70;
    char v71;
    char gap109_[3];
    char v72;
    char gap113_[7];
    int v73;
  } v61_;
  struct {
    __int64 v74;
    unsigned __int64 v75;
    char* v76;
    __int64 v77;
  } v74_;
  __int64 v78[6];

  v1 = (_QWORD*)a1[11];
  v2 = (_QWORD*)a1[12];
  if (v1 != v2) {
    v59 = (_QWORD*)a1[12];
    v60 = a1 + 22;
    while (1) {
      v4 = v1[11];
      if (v4 != 0) {
        break;
      }
    LABEL_3:
      v1 += 12;
      if (v1 == v2) {
        return;
      }
    }
    LOBYTE(v61_.v64) = 0;
    v61_.v72 = 0;
    v61_.v61 = 0;
    v61_.v62 = 0;
    v61_.v63 = 0;
    v61_.v73 = 32;
    v74_.v74 = 0;
    v74_.v75 = 0;
    v74_.v76 = nullptr;
    v74_.v77 = 0;
    if ((GameRoutine_102dee0_alt1((__int64)a1, (__int64)&v61_.v61, v1) & 1) ==
        0) {
      if ((v74_.v74 & 1) != 0 && v74_.v76 != nullptr) {
        v9 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v74_.v76);
      }
      if (v61_.v72 != 1) {
        goto LABEL_3;
      }
    LABEL_98:
      if ((v61_.v67 & 1) != 0 && v61_.v69 != 0) {
        v57 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v57 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v61_.v69);
      }
      if ((v61_.v64 & 1) != 0 && v61_.v66 != 0) {
        v58 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v58 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v61_.v66);
      }
      goto LABEL_3;
    }
    v5 = (unsigned __int8*)(v4 + 8);
    v61_.v73 = *(_DWORD*)v4;
    if (&v74_.v74 != (__int64*)(v4 + 8)) {
      v6 = *v5;
      if ((v74_.v74 & 1) != 0) {
        if ((v6 & 1) != 0) {
          v10 = *(_QWORD*)(v4 + 24);
        }
        else {
          v10 = v4 + 9;
        }
        if ((v6 & 1) != 0) {
          v11 = *(_QWORD*)(v4 + 16);
        }
        else {
          v11 = v6 >> 1;
        }
        SpineModel_64dde0(&v74_.v74, v10, v11);
      }
      else if ((v6 & 1) != 0) {
        GameRoutine_64df20_alt1(&v74_.v74, *(_QWORD*)(v4 + 24),
                                *(_QWORD*)(v4 + 16));
      }
      else {
        v7 = *(_QWORD*)v5;
        v8 = *(_QWORD*)(v4 + 24);
        v74_.v75 = *(_QWORD*)(v4 + 16);
        v74_.v76 = (char*)v8;
        v74_.v74 = v7;
      }
    }
    v12 = *(_QWORD*)(GameData_220b6d0 + 8);
    if (v12 != 0) {
      v13 = *(_QWORD**)(v12 + 24);
      v14 = (_QWORD*)(v12 + 32);
      if (v13 != v14) {
        while (1) {
          v15 = (_QWORD*)v13[7];
          v16 = (_QWORD*)v13[8];
          if (v15 != v16) {
            break;
          }
        LABEL_30:
          v17 = (_QWORD*)v13[1];
          if (v17 != nullptr) {
            do {
              v18 = v17;
              v17 = (_QWORD*)*v17;
            } while (v17 != nullptr);
          }
          else {
            do {
              v18 = (_QWORD*)v13[2];
              v19 = v13 == (_QWORD*)*v18;
              v13 = v18;
            } while (!v19);
          }
          v13 = v18;
          if (v18 == v14) {
            goto LABEL_38;
          }
        }
        while (*(_QWORD*)(*v15 + 56LL) != *v1) {
          v15 += 6;
          if (v15 == v16) {
            goto LABEL_30;
          }
        }
        v74_.v77 = v15[5];
      }
    }
  LABEL_38:
    v21 = a1[20];
    v20 = a1[21];
    if (v21 == v20) {
      v24 = a1[20];
    }
    else {
      v22 = v61_.v73;
      v23 = v74_.v77;
      v24 = a1[20];
      if ((v74_.v74 & 1) != 0) {
        v25 = v74_.v75;
      }
      else {
        v25 = (unsigned __int64)(unsigned __int8)v74_.v74 >> 1;
      }
      if ((v74_.v74 & 1) != 0) {
        v26 = v74_.v76;
      }
      else {
        v26 = (char*)&v74_.v74 + 1;
      }
      while (1) {
        if (*(_DWORD*)(v24 + 88) == v22) {
          v27 = *(unsigned __int8*)(v24 + 96);
          v28 = *(_QWORD*)(v24 + 104);
          if ((v27 & 1) == 0) {
            v28 = v27 >> 1;
          }
          if (v28 == v25) {
            v29 = (v27 & 1) != 0 ? *(_QWORD*)(v24 + 112) : v24 + 97;
            if (memcmp(v29, (__int64)v26, v25) == 0 &&
                *(_QWORD*)(v24 + 120) == v23) {
              break;
            }
          }
        }
        v24 += 128;
        if (v24 == v20) {
          goto LABEL_58;
        }
      }
    }
    if (v24 != v20) {
    LABEL_92:
      if ((v74_.v74 & 1) != 0 && v74_.v76 != nullptr) {
        v56 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v56 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, (__int64)v74_.v76);
      }
      v2 = v59;
      if (v61_.v72 != 1) {
        goto LABEL_3;
      }
      goto LABEL_98;
    }
  LABEL_58:
    if (v20 < *v60) {
      v30 = v61_.v62;
      *(_BYTE*)(v20 + 24) = 0;
      v31 = (__int64*)(v20 + 24);
      *(_BYTE*)(v20 + 80) = 0;
      *(_QWORD*)(v20 + 8) = v30;
      *(_QWORD*)v20 = v61_.v61;
      *(_DWORD*)(v20 + 16) = v61_.v63;
      if (v61_.v72 != 1) {
      LABEL_80:
        *(_DWORD*)(v20 + 88) = v61_.v73;
        if ((v74_.v74 & 1) != 0) {
          fw_text_String_CopyTerminated((__int64*)(v20 + 96), (__int64)v74_.v76,
                                        v74_.v75);
        }
        else {
          *(_QWORD*)(v20 + 104) = v74_.v75;
          v46 = v74_.v74;
          *(_QWORD*)(v20 + 112) = v74_.v76;
          *(_QWORD*)(v20 + 96) = v46;
        }
        v47 = v20 + 128;
        *(_QWORD*)(v20 + 120) = v74_.v77;
      LABEL_91:
        a1[21] = v47;
        goto LABEL_92;
      }
      if ((v61_.v64 & 1) != 0) {
        fw_text_String_CopyTerminated(v31, v61_.v66, v61_.v65);
        if ((v61_.v67 & 1) != 0) {
          goto LABEL_62;
        }
      }
      else {
        v32 = v61_.v64;
        v33 = v61_.v66;
        *(_QWORD*)(v20 + 32) = v61_.v65;
        *(_QWORD*)(v20 + 40) = v33;
        *v31 = v32;
        if ((v61_.v67 & 1) != 0) {
        LABEL_62:
          fw_text_String_CopyTerminated((__int64*)(v20 + 48), v61_.v69,
                                        v61_.v68);
        LABEL_79:
          v45 = v61_.v71;
          *(_DWORD*)(v20 + 72) = v61_.v70;
          *(_BYTE*)(v20 + 76) = v45;
          *(_BYTE*)(v20 + 80) = 1;
          goto LABEL_80;
        }
      }
      *(_QWORD*)(v20 + 56) = v61_.v68;
      v44 = v61_.v67;
      *(_QWORD*)(v20 + 64) = v61_.v69;
      *(_QWORD*)(v20 + 48) = v44;
      goto LABEL_79;
    }
    v34 = v20 - v21;
    v35 = ((__int64)(v20 - v21) >> 7) + 1;
    if (v35 >> 57 != 0) {
      GameRoutine_102ed10_alt1();
    }
    v36 = *v60 - v21;
    if (v36 >> 6 > v35) {
      v35 = v36 >> 6;
    }
    if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFF80LL) {
      v37 = 0x1FFFFFFFFFFFFFFLL;
    }
    else {
      v37 = v35;
    }
    v78[4] = (__int64)v60;
    if (v37 != 0) {
      if (v37 >> 57 != 0) {
        GameRoutine_60a210_alt1();
      }
      v38 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v37 << 7, 16, 0);
    }
    else {
      v38 = 0;
    }
    v39 = v61_.v61;
    v40 = v61_.v62;
    v41 = v38 + v34;
    *(_BYTE*)(v38 + v34 + 24) = 0;
    v42 = (__int64*)(v38 + v34 + 24);
    *(_BYTE*)(v41 + 80) = 0;
    *(_QWORD*)v41 = v39;
    *(_QWORD*)(v41 + 8) = v40;
    *(_DWORD*)(v41 + 16) = v61_.v63;
    if (v61_.v72 != 1) {
    LABEL_87:
      *(_DWORD*)(v41 + 88) = v61_.v73;
      if ((v74_.v74 & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)(v41 + 96), (__int64)v74_.v76,
                                      v74_.v75);
      }
      else {
        v49 = v74_.v75;
        *(_QWORD*)(v41 + 96) = v74_.v74;
        *(_QWORD*)(v41 + 104) = v49;
        *(_QWORD*)(v41 + 112) = v74_.v76;
      }
      v50 = (__int64*)a1[20];
      v51 = (__int64*)a1[21];
      v52 = v38 + (v37 << 7);
      v47 = v41 + 128;
      *(_QWORD*)(v41 + 120) = v74_.v77;
      v53 = v41 + (char*)v50 - (char*)v51;
      GameRoutine_102ee80_alt1(v50, v51, v53);
      v54 = a1[20];
      v55 = a1[22];
      a1[20] = v53;
      a1[21] = v41 + 128;
      a1[22] = v52;
      v78[2] = v54;
      v78[3] = v55;
      v78[0] = v54;
      v78[1] = v54;
      GameHr_102ed40(v78);
      goto LABEL_91;
    }
    if ((v61_.v64 & 1) != 0) {
      fw_text_String_CopyTerminated(v42, v61_.v66, v61_.v65);
      if ((v61_.v67 & 1) != 0) {
        goto LABEL_76;
      }
    }
    else {
      v43 = v61_.v65;
      *v42 = v61_.v64;
      *(_QWORD*)(v38 + v34 + 32) = v43;
      *(_QWORD*)(v38 + v34 + 40) = v61_.v66;
      if ((v61_.v67 & 1) != 0) {
      LABEL_76:
        fw_text_String_CopyTerminated((__int64*)(v41 + 48), v61_.v69, v61_.v68);
      LABEL_86:
        *(_DWORD*)(v41 + 72) = v61_.v70;
        *(_BYTE*)(v41 + 76) = v61_.v71;
        *(_BYTE*)(v41 + 80) = 1;
        goto LABEL_87;
      }
    }
    v48 = v61_.v68;
    *(_QWORD*)(v41 + 48) = v61_.v67;
    *(_QWORD*)(v41 + 56) = v48;
    *(_QWORD*)(v41 + 64) = v61_.v69;
    goto LABEL_86;
  }
}

void GameHr_102e7c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (*(_BYTE*)(a1 + 160) == 1 && (*(_BYTE*)(a1 + 136) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 152);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  if (*(_BYTE*)(a1 + 128) == 1 && (*(_BYTE*)(a1 + 104) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 120);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if (*(_BYTE*)(a1 + 80) == 1) {
    if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
      v6 = *(_QWORD*)(a1 + 64);
      if (v6 != 0) {
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
      }
    }
    if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
      v8 = *(_QWORD*)(a1 + 40);
      if (v8 != 0) {
        v9 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
      }
    }
  }
}

void GameHr_102e920(__int64* a1, _QWORD* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v3 = *a1;
  v2 = (__int64*)a1[1];
  v4 = a2[1];
  v7 = v4 - ((_QWORD)v2 - *a1);
  if (v2 != (__int64*)*a1) {
    v8 = (__int64*)(v3 + 48);
    v9 = (_QWORD*)(v4 - 16 * (((__int64)v2 - *a1) >> 4) + 88);
    do {
      v13 = *(v8 - 5);
      v12 = v8 - 6;
      *(v9 - 11) = *(v8 - 6);
      *(v9 - 10) = v13;
      LODWORD(v13) = *((_DWORD*)v8 - 8);
      *((_BYTE*)v9 - 64) = 0;
      *((_BYTE*)v9 - 8) = 0;
      *((_DWORD*)v9 - 18) = v13;
      if (*((_BYTE*)v8 + 32) == 1) {
        v14 = *(v8 - 3);
        v15 = *(v8 - 1);
        *(v9 - 7) = *(v8 - 2);
        *(v9 - 6) = v15;
        *(v9 - 8) = v14;
        *(v8 - 2) = 0;
        *(v8 - 1) = 0;
        *(v8 - 3) = 0;
        *(v9 - 4) = v8[1];
        v16 = *v8;
        *(v9 - 3) = v8[2];
        *(v9 - 5) = v16;
        *v8 = 0;
        v8[1] = 0;
        v8[2] = 0;
        LODWORD(v16) = *((_DWORD*)v8 + 6);
        LOBYTE(v14) = *((_BYTE*)v8 + 28);
        *((_BYTE*)v9 - 8) = 1;
        *((_BYTE*)v9 - 12) = v14;
        *((_DWORD*)v9 - 4) = v16;
      }
      v10 = v8[5];
      v11 = v8[6];
      v8 += 14;
      *v9 = v10;
      v9[1] = v11;
      v9 += 14;
    } while (v12 + 14 != v2);
    v17 = fw_memory_g_heap_manager_ptr;
    do {
      if (*(_BYTE*)(v3 + 80) == 1) {
        if ((*(_BYTE*)(v3 + 48) & 1) != 0) {
          v18 = *(_QWORD*)(v3 + 64);
          if (v18 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
              v19 = 128;
            }
            else {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v19, v18);
          }
        }
        if ((*(_BYTE*)(v3 + 24) & 1) != 0) {
          v20 = *(_QWORD*)(v3 + 40);
          if (v20 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
              v21 = 128;
            }
            else {
              v21 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v21, v20);
          }
        }
      }
      v3 += 112;
    } while ((__int64*)v3 != v2);
  }
  a2[1] = v7;
  v22 = *a1;
  a1[1] = *a1;
  *a1 = a2[1];
  a2[1] = v22;
  v23 = a1[1];
  a1[1] = a2[2];
  a2[2] = v23;
  v24 = a1[2];
  a1[2] = a2[3];
  a2[3] = v24;
  *a2 = a2[1];
}

void GameHr_102eb40(__int64* a1, _QWORD* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v3 = *a1;
  v2 = (__int64*)a1[1];
  v4 = a2[1];
  v7 = v4 - ((_QWORD)v2 - *a1);
  if (v2 != (__int64*)*a1) {
    v8 = (__int64*)(v3 + 48);
    v9 = (_QWORD*)(v4 - 32 * (((__int64)v2 - *a1) >> 5) + 88);
    do {
      v12 = *(v8 - 5);
      v11 = v8 - 6;
      *(v9 - 11) = *(v8 - 6);
      *(v9 - 10) = v12;
      LODWORD(v12) = *((_DWORD*)v8 - 8);
      *((_BYTE*)v9 - 64) = 0;
      *((_BYTE*)v9 - 8) = 0;
      *((_DWORD*)v9 - 18) = v12;
      if (*((_BYTE*)v8 + 32) == 1) {
        v13 = *(v8 - 3);
        v14 = *(v8 - 1);
        *(v9 - 7) = *(v8 - 2);
        *(v9 - 6) = v14;
        *(v9 - 8) = v13;
        *(v8 - 2) = 0;
        *(v8 - 1) = 0;
        *(v8 - 3) = 0;
        *(v9 - 4) = v8[1];
        v15 = *v8;
        *(v9 - 3) = v8[2];
        *(v9 - 5) = v15;
        *v8 = 0;
        v8[1] = 0;
        v8[2] = 0;
        LODWORD(v15) = *((_DWORD*)v8 + 6);
        LOBYTE(v13) = *((_BYTE*)v8 + 28);
        *((_BYTE*)v9 - 8) = 1;
        *((_BYTE*)v9 - 12) = v13;
        *((_DWORD*)v9 - 4) = v15;
      }
      v10 = v8[5];
      v8 += 12;
      *v9 = v10;
      v9 += 12;
    } while (v11 + 12 != v2);
    v16 = fw_memory_g_heap_manager_ptr;
    do {
      if (*(_BYTE*)(v3 + 80) == 1) {
        if ((*(_BYTE*)(v3 + 48) & 1) != 0) {
          v17 = *(_QWORD*)(v3 + 64);
          if (v17 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v18, v17);
          }
        }
        if ((*(_BYTE*)(v3 + 24) & 1) != 0) {
          v19 = *(_QWORD*)(v3 + 40);
          if (v19 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
              v20 = 128;
            }
            else {
              v20 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v20, v19);
          }
        }
      }
      v3 += 96;
    } while ((__int64*)v3 != v2);
  }
  a2[1] = v7;
  v21 = *a1;
  a1[1] = *a1;
  *a1 = a2[1];
  a2[1] = v21;
  v22 = a1[1];
  a1[1] = a2[2];
  a2[2] = v22;
  v23 = a1[2];
  a1[2] = a2[3];
  a2[3] = v23;
  *a2 = a2[1];
}

void GameHr_102ed40(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[1];
  v2 = a1[2];
  for (i = fw_memory_g_heap_manager_ptr; v1 != v2; v2 = a1[2]) {
    a1[2] = v2 - 128;
    if ((*(_BYTE*)(v2 - 32) & 1) != 0) {
      v5 = *(_QWORD*)(v2 - 16);
      if (v5 != 0) {
        if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)i + v6, v5);
      }
    }
    if (*(_BYTE*)(v2 - 48) == 1) {
      if ((*(_BYTE*)(v2 - 80) & 1) != 0) {
        v7 = *(_QWORD*)(v2 - 64);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)i + v8, v7);
        }
      }
      if ((*(_BYTE*)(v2 - 104) & 1) != 0) {
        v9 = *(_QWORD*)(v2 - 88);
        if (v9 != 0) {
          if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)i + v10, v9);
        }
      }
    }
  }
  if (*a1 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)i + v11, *a1);
  }
}

void GameHr_102ee80(__int64* a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  if (a1 != a2) {
    v3 = a3 + 72;
    v4 = a1 + 6;
    v6 = a1;
    do {
      v10 = *(v4 - 5);
      *(_QWORD*)(v3 - 72) = *(v4 - 6);
      *(_QWORD*)(v3 - 64) = v10;
      LODWORD(v10) = *((_DWORD*)v4 - 8);
      *(_BYTE*)(v3 - 48) = 0;
      *(_BYTE*)(v3 + 8) = 0;
      *(_DWORD*)(v3 - 56) = v10;
      if (*((_BYTE*)v4 + 32) == 1) {
        v11 = *(v4 - 3);
        v12 = *(v4 - 1);
        *(_QWORD*)(v3 - 40) = *(v4 - 2);
        *(_QWORD*)(v3 - 32) = v12;
        *(_QWORD*)(v3 - 48) = v11;
        *(v4 - 2) = 0;
        *(v4 - 1) = 0;
        *(v4 - 3) = 0;
        *(_QWORD*)(v3 - 16) = v4[1];
        v13 = *v4;
        *(_QWORD*)(v3 - 8) = v4[2];
        *(_QWORD*)(v3 - 24) = v13;
        *v4 = 0;
        v4[1] = 0;
        v4[2] = 0;
        LODWORD(v13) = *((_DWORD*)v4 + 6);
        LOBYTE(v11) = *((_BYTE*)v4 + 28);
        *(_BYTE*)(v3 + 8) = 1;
        *(_BYTE*)(v3 + 4) = v11;
        *(_DWORD*)v3 = v13;
      }
      *(_DWORD*)(v3 + 16) = *((_DWORD*)v4 + 10);
      *(_QWORD*)(v3 + 32) = v4[7];
      v7 = v4[6];
      *(_QWORD*)(v3 + 40) = v4[8];
      *(_QWORD*)(v3 + 24) = v7;
      v4[6] = 0;
      v4[7] = 0;
      v4[8] = 0;
      v8 = v4 + 10;
      v9 = v4[9];
      v4 += 16;
      *(_QWORD*)(v3 + 48) = v9;
      v3 += 128;
    } while (v8 != a2);
    v14 = fw_memory_g_heap_manager_ptr;
    do {
      if ((v6[12] & 1) != 0) {
        v15 = v6[14];
        if (v15 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v16, v15);
        }
      }
      if (*((_BYTE*)v6 + 80) == 1) {
        if ((v6[6] & 1) != 0) {
          v17 = v6[8];
          if (v17 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v18, v17);
          }
        }
        if ((v6[3] & 1) != 0) {
          v19 = v6[5];
          if (v19 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
              v20 = 128;
            }
            else {
              v20 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v20, v19);
          }
        }
      }
      v6 += 16;
    } while (v6 != a2);
  }
}

void GameHr_102f080(__int64* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v3 = *a1;
  v2 = a1[1];
  v6 = a2[1] + *a1 - v2;
  if (v2 != *a1) {
    v7 = 0;
    do {
      v8 = v3 + v7;
      v9 = v6 + v7;
      *(_QWORD*)(v9 + 8) = *(_QWORD*)(v3 + v7 + 8);
      *(_QWORD*)v9 = *(_QWORD*)(v3 + v7);
      v10 = *(_DWORD*)(v3 + v7 + 16);
      *(_BYTE*)(v9 + 80) = 0;
      *(_DWORD*)(v9 + 16) = v10;
      *(_BYTE*)(v6 + v7 + 24) = 0;
      if (*(_BYTE*)(v3 + v7 + 80) == 1) {
        v11 = *(_QWORD*)(v8 + 24);
        v12 = *(_QWORD*)(v8 + 40);
        *(_QWORD*)(v6 + v7 + 32) = *(_QWORD*)(v8 + 32);
        *(_QWORD*)(v6 + v7 + 40) = v12;
        *(_QWORD*)(v6 + v7 + 24) = v11;
        *(_QWORD*)(v8 + 32) = 0;
        *(_QWORD*)(v8 + 40) = 0;
        *(_QWORD*)(v8 + 24) = 0;
        *(_QWORD*)(v9 + 56) = *(_QWORD*)(v8 + 56);
        v13 = *(_QWORD*)(v8 + 48);
        *(_QWORD*)(v9 + 64) = *(_QWORD*)(v8 + 64);
        *(_QWORD*)(v9 + 48) = v13;
        *(_QWORD*)(v8 + 48) = 0;
        *(_QWORD*)(v8 + 56) = 0;
        *(_QWORD*)(v8 + 64) = 0;
        LODWORD(v13) = *(_DWORD*)(v8 + 72);
        LOBYTE(v11) = *(_BYTE*)(v8 + 76);
        *(_BYTE*)(v9 + 80) = 1;
        *(_BYTE*)(v9 + 76) = v11;
        *(_DWORD*)(v9 + 72) = v13;
      }
      v7 += 96;
      *(_QWORD*)(v9 + 88) = *(_QWORD*)(v8 + 88);
    } while (v8 + 96 != v2);
    v14 = fw_memory_g_heap_manager_ptr;
    do {
      if (*(_BYTE*)(v3 + 80) == 1) {
        if ((*(_BYTE*)(v3 + 48) & 1) != 0) {
          v15 = *(_QWORD*)(v3 + 64);
          if (v15 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
              v16 = 128;
            }
            else {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v16, v15);
          }
        }
        if ((*(_BYTE*)(v3 + 24) & 1) != 0) {
          v17 = *(_QWORD*)(v3 + 40);
          if (v17 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v18, v17);
          }
        }
      }
      v3 += 96;
    } while (v3 != v2);
  }
  a2[1] = v6;
  v19 = *a1;
  a1[1] = *a1;
  *a1 = a2[1];
  a2[1] = v19;
  v20 = a1[1];
  a1[1] = a2[2];
  a2[2] = v20;
  v21 = a1[2];
  a1[2] = a2[3];
  a2[3] = v21;
  *a2 = a2[1];
}

__int64 GameHr_102f560(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 i;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v29;
    __int64 v30;
    __int64 v31;
    unsigned __int64 v32;
    __int64* v33;
  } v29_;

  v2 = *a1;
  v3 = a1[1] - *a1;
  v4 = 0x6DB6DB6DB6DB6DB7LL * (v3 >> 4) + 1;
  if (v4 > 0x249249249249249LL) {
    GameRoutine_102e8f0_alt1();
  }
  v5 = a1[2];
  v29_.v33 = a1 + 2;
  v8 = fw_memory_g_heap_manager_ptr;
  v9 = 0x6DB6DB6DB6DB6DB7LL * ((v5 - v2) >> 4);
  if (2 * v9 > v4) {
    v4 = 2 * v9;
  }
  if (v9 >= 0x124924924924924LL) {
    v10 = 0x249249249249249LL;
  }
  else {
    v10 = v4;
  }
  if (v10 != 0) {
    if (v10 > 0x249249249249249LL) {
      GameRoutine_60a210_alt1();
    }
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         112 * v10, 16, 0);
  }
  else {
    v11 = 0;
  }
  v12 = v11 + v3;
  v13 = v11 + 112 * v10;
  v29_.v29 = v11;
  v29_.v30 = v12;
  *(_BYTE*)(v12 + 24) = 0;
  v14 = (__int64*)(v12 + 24);
  *(_BYTE*)(v12 + 80) = 0;
  v29_.v32 = v13;
  v15 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)v12 = *(_QWORD*)a2;
  *(_QWORD*)(v12 + 8) = v15;
  *(_DWORD*)(v12 + 16) = *(_DWORD*)(a2 + 16);
  if (*(_BYTE*)(a2 + 80) == 1) {
    if ((*(_BYTE*)(a2 + 24) & 1) != 0) {
      fw_text_String_CopyTerminated(v14, *(_QWORD*)(a2 + 40),
                                    *(_QWORD*)(a2 + 32));
    }
    else {
      v16 = *(_QWORD*)(a2 + 32);
      *v14 = *(_QWORD*)(a2 + 24);
      *(_QWORD*)(v12 + 32) = v16;
      *(_QWORD*)(v12 + 40) = *(_QWORD*)(a2 + 40);
    }
    if ((*(_BYTE*)(a2 + 48) & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)(v12 + 48), *(_QWORD*)(a2 + 64),
                                    *(_QWORD*)(a2 + 56));
    }
    else {
      v17 = *(_QWORD*)(a2 + 56);
      v18 = *(_QWORD*)(a2 + 64);
      *(_QWORD*)(v12 + 48) = *(_QWORD*)(a2 + 48);
      *(_QWORD*)(v12 + 56) = v17;
      *(_QWORD*)(v12 + 64) = v18;
    }
    *(_DWORD*)(v12 + 72) = *(_DWORD*)(a2 + 72);
    *(_BYTE*)(v12 + 76) = *(_BYTE*)(a2 + 76);
    *(_BYTE*)(v12 + 80) = 1;
  }
  v19 = *(_QWORD*)(a2 + 96);
  *(_QWORD*)(v12 + 88) = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(v12 + 96) = v19;
  v29_.v31 = v12 + 112;
  GameHr_102e920(a1, &v29_.v29);
  v20 = a1[1];
  v21 = v29_.v30;
  for (i = v29_.v31; i != v21; i -= 112) {
    if (*(_BYTE*)(i - 32) == 1) {
      if ((*(_BYTE*)(i - 64) & 1) != 0) {
        v23 = *(_QWORD*)(i - 48);
        if (v23 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v24, v23);
        }
      }
      if ((*(_BYTE*)(i - 88) & 1) != 0) {
        v25 = *(_QWORD*)(i - 72);
        if (v25 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v26 = 128;
          }
          else {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v26, v25);
        }
      }
    }
  }
  if (v29_.v29 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v27, v29_.v29);
  }
  return v20;
}

__int64 GameHr_102f7e0(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 i;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v28;
    __int64 v29;
    __int64 v30;
    unsigned __int64 v31;
    __int64* v32;
  } v28_;

  v2 = *a1;
  v3 = a1[1] - *a1;
  v4 = 1 - 0x5555555555555555LL * (v3 >> 5);
  if (v4 > 0x2AAAAAAAAAAAAAALL) {
    GameRoutine_102eb10_alt1();
  }
  v5 = a1[2];
  v28_.v32 = a1 + 2;
  v8 = fw_memory_g_heap_manager_ptr;
  v9 = 0xAAAAAAAAAAAAAAABLL * ((v5 - v2) >> 5);
  if (2 * v9 > v4) {
    v4 = 2 * v9;
  }
  if (v9 >= 0x155555555555555LL) {
    v10 = 0x2AAAAAAAAAAAAAALL;
  }
  else {
    v10 = v4;
  }
  if (v10 != 0) {
    if (v10 > 0x2AAAAAAAAAAAAAALL) {
      GameRoutine_60a210_alt1();
    }
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         96 * v10, 16, 0);
  }
  else {
    v11 = 0;
  }
  v12 = v11 + v3;
  v13 = v11 + 96 * v10;
  v28_.v28 = v11;
  v28_.v29 = v12;
  *(_BYTE*)(v12 + 24) = 0;
  v14 = (__int64*)(v12 + 24);
  *(_BYTE*)(v12 + 80) = 0;
  v28_.v31 = v13;
  v15 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)v12 = *(_QWORD*)a2;
  *(_QWORD*)(v12 + 8) = v15;
  *(_DWORD*)(v12 + 16) = *(_DWORD*)(a2 + 16);
  if (*(_BYTE*)(a2 + 80) == 1) {
    if ((*(_BYTE*)(a2 + 24) & 1) != 0) {
      fw_text_String_CopyTerminated(v14, *(_QWORD*)(a2 + 40),
                                    *(_QWORD*)(a2 + 32));
    }
    else {
      v16 = *(_QWORD*)(a2 + 32);
      *v14 = *(_QWORD*)(a2 + 24);
      *(_QWORD*)(v12 + 32) = v16;
      *(_QWORD*)(v12 + 40) = *(_QWORD*)(a2 + 40);
    }
    if ((*(_BYTE*)(a2 + 48) & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)(v12 + 48), *(_QWORD*)(a2 + 64),
                                    *(_QWORD*)(a2 + 56));
    }
    else {
      v17 = *(_QWORD*)(a2 + 56);
      v18 = *(_QWORD*)(a2 + 64);
      *(_QWORD*)(v12 + 48) = *(_QWORD*)(a2 + 48);
      *(_QWORD*)(v12 + 56) = v17;
      *(_QWORD*)(v12 + 64) = v18;
    }
    *(_DWORD*)(v12 + 72) = *(_DWORD*)(a2 + 72);
    *(_BYTE*)(v12 + 76) = *(_BYTE*)(a2 + 76);
    *(_BYTE*)(v12 + 80) = 1;
  }
  *(_QWORD*)(v12 + 88) = *(_QWORD*)(a2 + 88);
  v28_.v30 = v12 + 96;
  GameHr_102eb40(a1, &v28_.v28);
  v19 = a1[1];
  v20 = v28_.v29;
  for (i = v28_.v30; i != v20; i -= 96) {
    if (*(_BYTE*)(i - 16) == 1) {
      if ((*(_BYTE*)(i - 48) & 1) != 0) {
        v22 = *(_QWORD*)(i - 32);
        if (v22 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v23, v22);
        }
      }
      if ((*(_BYTE*)(i - 72) & 1) != 0) {
        v24 = *(_QWORD*)(i - 56);
        if (v24 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v25 = 128;
          }
          else {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v25, v24);
        }
      }
    }
  }
  if (v28_.v28 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v26, v28_.v28);
  }
  return v19;
}

__int64 GameHr_1034d00(__int64 result, _WORD* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned __int8* i;
  int v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  int* v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;

  if (*a2 != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                    8LL * (unsigned __int16)*a2);
    if (*(unsigned __int8*)(v2 + 72) <= 7u) {
      v3 = *(_QWORD*)(v2 + 24);
      v4 = *(unsigned __int8**)(v3 + 488);
      for (i = *(unsigned __int8**)(v3 + 496); v4 != i; v4 += 2) {
        v7 = *v4;
        v8 = **(_QWORD**)(result + 16);
        if (v7 > 0xC) {
          v9 = 0;
        }
        else {
          v9 = *(unsigned __int8*)(v8 + v7 + 540);
        }
        v10 = v4[1];
        if (v9 < v10) {
          v11 = (int*)GameData_21d99a8;
          v12 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
          if (v10 >= (int)v12) {
            v10 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
          }
          if ((int)v12 >= 12) {
            v13 = 12;
          }
          else {
            v13 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
          }
          v14 = *(_DWORD*)(GameData_21d99a8 + 4LL * v10 - 4);
          v15 = *(_DWORD*)(GameData_21d99a8 + 4LL * v13 - 4);
          if (v15 >= v14) {
            v15 = v14;
          }
          if (v14 < 0) {
            v15 = 0;
          }
          *(_WORD*)(v8 + 2 * v7 + 514) = v15;
          if ((int)v12 < 1) {
            LOBYTE(v6) = 0;
          }
          else {
            v6 = 0;
            v16 = v11[(unsigned int)(v12 - 1)];
            if (v16 >= v15) {
              v16 = v15;
            }
            if (v15 >= *v11) {
              v17 = v16;
            }
            else {
              v17 = *v11;
            }
            while (1) {
              v18 = (unsigned int)(v6 + v12) >> 1;
              v19 = v11[v18];
              if (v17 == v19) {
                break;
              }
              if (v17 < v19) {
                LODWORD(v12) = (unsigned int)(v6 + v12) >> 1;
              }
              else {
                v6 = v18 + 1;
              }
              if (v6 >= (int)v12) {
                goto LABEL_6;
              }
            }
            LOBYTE(v6) = v18 + 1;
          }
        LABEL_6:
          *(_BYTE*)(v8 + v7 + 540) = v6;
          **(_BYTE**)(result + 8) = 1;
        }
      }
    }
  }
  return result;
}

void GameHr_1038a60(__int64 a1, _QWORD* a2, unsigned __int64 a3, __int64 a4,
                    signed __int64 a5)
{
  __int64 v6;
  unsigned int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  struct {
    __int64 v70;
    __int64 v71;
    char v72;
    char gap41_[7];
    __int64 v73;
    __int64 v74;
    __int64 v75;
    char v76;
    char gap73_[7];
    __int64 v77;
    __int64 v78;
    __int64 v79;
    char v80;
  } v70_;

  v68 = a2;
  v69 = a1;
  if (a3 < 2) {
    return;
  }
  v6 = a1;
  if (a3 == 2) {
    v7 = *(unsigned __int8*)(a1 + 9);
    v68 = a2 - 11;
    if (*((unsigned __int8*)a2 - 79) < v7) {
      GameHr_1039020(&v69, (__int64*)&v68);
    }
    return;
  }
  v8 = a3;
  if ((__int64)a3 > 0) {
    v9 = a3 >> 1;
    v11 = 88 * (a3 >> 1);
    v12 = a3 - (a3 >> 1);
    v13 = (_QWORD*)(v11 + a1);
    if ((__int64)a3 <= a5) {
      GameHr_1039180(a1, v13, a3 >> 1, a4);
      v59 = a4 + v11;
      GameHr_1039180(v11 + v6, a2, v8 - (v8 >> 1), a4 + v11);
      v60 = a4 + v11;
      v61 = a4;
      v62 = a4 + 88 * v8;
      while (v60 != v62) {
        if (*(unsigned __int8*)(v60 + 9) >=
            (unsigned int)*(unsigned __int8*)(v61 + 9)) {
          GameHr_103a200(v6, v61);
          v61 += 88;
        }
        else {
          GameHr_103a200(v6, v60);
          v60 += 88;
        }
        v6 += 88;
        if (v61 == v59) {
          while (v60 != v62) {
            GameHr_103a200(v6, v60);
            v60 += 88;
            v6 += 88;
          }
          goto LABEL_79;
        }
      }
      while (v61 != v59) {
        GameHr_103a200(v6, v61);
        v61 += 88;
        v6 += 88;
      }
    LABEL_79:
      if (a4 != 0) {
        v63 = a4 + 40;
        v64 = fw_memory_g_heap_manager_ptr;
        do {
          if (*(_BYTE*)(v63 + 40) == 1 && (*(_BYTE*)(v63 + 16) & 1) != 0) {
            v65 = *(_QWORD*)(v63 + 32);
            if (v65 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v64 + 200LL) != 0) {
                v66 = 128;
              }
              else {
                v66 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v64 + v66, v65);
            }
          }
          if (*(_BYTE*)(v63 + 8) == 1 && (*(_BYTE*)(v63 - 16) & 1) != 0 &&
              *(_QWORD*)v63 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v64 + 200LL) != 0) {
              v67 = 128;
            }
            else {
              v67 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v64 + v67, *(_QWORD*)v63);
          }
          --v8;
          v63 += 88;
        } while (v8 != 0);
      }
    }
    else {
      GameHr_1038a60(a1, v13, a3 >> 1, a4, a5);
      GameHr_1038a60(v11 + v6, a2, v12, a4, a5);
      QuestIconList_1039b40(v6, v11 + v6, (__int64)a2, v9, v12, a4, a5);
    }
    return;
  }
  if ((_QWORD*)a1 == a2) {
    return;
  }
  v15 = (_QWORD*)(a1 + 88);
  if ((_QWORD*)(a1 + 88) == a2) {
    return;
  }
  v16 = 0;
  v17 = a1;
  while (2) {
    v18 = v15;
    if (*(unsigned __int8*)(v17 + 97) >=
        (unsigned int)*(unsigned __int8*)(v17 + 9)) {
      goto LABEL_12;
    }
    v19 = *v15;
    v20 = v18[1];
    v70_.v72 = 0;
    v70_.v76 = 0;
    v70_.v70 = v19;
    v70_.v71 = v20;
    if (*(_BYTE*)(v17 + 136) == 1) {
      v21 = *(_BYTE*)(v17 + 104);
      v70_.v76 = 1;
      v70_.v72 = v21;
      v22 = *(_QWORD*)(v17 + 112);
      v23 = *(_QWORD*)(v17 + 120);
      *(_QWORD*)(v17 + 112) = 0;
      *(_QWORD*)(v17 + 120) = 0;
      v70_.v73 = v22;
      v70_.v74 = v23;
      v24 = *(_QWORD*)(v17 + 128);
      *(_QWORD*)(v17 + 128) = 0;
      v70_.v75 = v24;
    }
    v25 = *(unsigned __int8*)(v17 + 168);
    LOBYTE(v70_.v77) = 0;
    v70_.v80 = 0;
    if (v25 == 1) {
      v26 = *(_QWORD*)(v17 + 144);
      v27 = *(_QWORD*)(v17 + 152);
      *(_QWORD*)(v17 + 144) = 0;
      *(_QWORD*)(v17 + 152) = 0;
      v70_.v80 = 1;
      v70_.v77 = v26;
      v70_.v78 = v27;
      v28 = *(_QWORD*)(v17 + 160);
      *(_QWORD*)(v17 + 160) = 0;
      v70_.v79 = v28;
    }
    v29 = BYTE1(v70_.v71);
    v30 = v16;
    while (1) {
      v31 = v6 + v30;
      v32 = *(_QWORD*)(v6 + v30 + 8);
      *(_QWORD*)(v31 + 88) = *(_QWORD*)(v6 + v30);
      *(_QWORD*)(v31 + 96) = v32;
      if (*(unsigned __int8*)(v6 + v30 + 136) ==
          *(unsigned __int8*)(v6 + v30 + 48)) {
        if (*(_BYTE*)(v6 + v30 + 136) != 0) {
          *(_BYTE*)(v31 + 104) = *(_BYTE*)(v31 + 16);
          v33 = (_QWORD*)(v6 + v30);
          if ((*(_BYTE*)(v6 + v30 + 112) & 1) != 0) {
            v34 = v33[16];
            if (v34 != 0) {
              v35 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v35 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v35,
                                            v34);
            }
          }
          v36 = v33[3];
          v37 = v33[4];
          *((_WORD*)v33 + 12) = 0;
          *(_QWORD*)(v6 + v30 + 112) = v36;
          *(_QWORD*)(v6 + v30 + 120) = v37;
          *(_QWORD*)(v6 + v30 + 128) = v33[5];
        }
      }
      else if (*(_BYTE*)(v6 + v30 + 136) != 0) {
        if ((*(_BYTE*)(v6 + v30 + 112) & 1) != 0) {
          v38 = *(_QWORD*)(v6 + v30 + 128);
          if (v38 != 0) {
            v39 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v39 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v39, v38);
          }
        }
        *(_BYTE*)(v31 + 136) = 0;
      }
      else {
        v40 = *(_BYTE*)(v31 + 16);
        *(_BYTE*)(v31 + 136) = 1;
        *(_BYTE*)(v31 + 104) = v40;
        v41 = (_QWORD*)(v6 + v30);
        v42 = *(_QWORD*)(v6 + v30 + 24);
        v43 = *(_QWORD*)(v6 + v30 + 32);
        v41[3] = 0;
        v41[4] = 0;
        v41[14] = v42;
        v41[15] = v43;
        v44 = *(_QWORD*)(v6 + v30 + 40);
        v41[5] = 0;
        v41[16] = v44;
      }
      v45 = v6 + v30;
      if (*(unsigned __int8*)(v6 + v30 + 168) ==
          *(unsigned __int8*)(v6 + v30 + 80)) {
        break;
      }
      if (*(_BYTE*)(v6 + v30 + 168) != 0) {
        if ((*(_BYTE*)(v45 + 144) & 1) != 0) {
          v50 = *(_QWORD*)(v6 + v30 + 160);
          if (v50 != 0) {
            v51 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v51, v50);
          }
        }
        *(_BYTE*)(v45 + 168) = 0;
      LABEL_51:
        if (v30 == 0) {
          goto LABEL_55;
        }
        goto LABEL_52;
      }
      v53 = *(_QWORD*)(v45 + 56);
      v54 = *(_QWORD*)(v45 + 64);
      *(_QWORD*)(v45 + 56) = 0;
      *(_QWORD*)(v45 + 64) = 0;
      *(_BYTE*)(v45 + 168) = 1;
      *(_QWORD*)(v45 + 144) = v53;
      *(_QWORD*)(v45 + 152) = v54;
      v55 = *(_QWORD*)(v45 + 72);
      *(_QWORD*)(v45 + 72) = 0;
      *(_QWORD*)(v45 + 160) = v55;
      if (v30 == 0) {
        goto LABEL_55;
      }
    LABEL_52:
      v52 = v6 + v30;
      v30 -= 88;
      if (v29 >= *(unsigned __int8*)(v52 - 79)) {
        v56 = v6 + v30 + 88;
        goto LABEL_56;
      }
    }
    if (*(_BYTE*)(v6 + v30 + 168) == 0) {
      goto LABEL_51;
    }
    if ((*(_BYTE*)(v45 + 144) & 1) != 0) {
      v46 = *(_QWORD*)(v6 + v30 + 160);
      if (v46 != 0) {
        v47 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v47, v46);
      }
    }
    v48 = *(_QWORD*)(v45 + 56);
    v49 = *(_QWORD*)(v45 + 64);
    *(_BYTE*)(v45 + 56) = 0;
    *(_QWORD*)(v45 + 144) = v48;
    *(_QWORD*)(v45 + 152) = v49;
    *(_QWORD*)(v45 + 160) = *(_QWORD*)(v45 + 72);
    *(_BYTE*)(v6 + v30 + 57) = 0;
    if (v30 != 0) {
      goto LABEL_52;
    }
  LABEL_55:
    v56 = v6;
  LABEL_56:
    GameHr_103a200(v56, (__int64)&v70_.v70);
    if (v70_.v80 == 1 && (v70_.v77 & 1) != 0 && v70_.v79 != 0) {
      v57 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v57, v70_.v79);
    }
    if (v70_.v76 == 1 && (v70_.v73 & 1) != 0 && v70_.v75 != 0) {
      v58 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v58 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v58, v70_.v75);
    }
  LABEL_12:
    v15 = v18 + 11;
    v16 += 88;
    v17 = (__int64)v18;
    if (v18 + 11 != a2) {
      continue;
    }
    break;
  }
}

void GameHr_1039020(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v14[2];
    char v15;
    char gap25_[7];
    __int64 v16;
    __int64 v17;
    __int64 v18;
    char v19;
    char gap57_[7];
    __int64 v20;
    __int64 v21;
    __int64 v22;
    char v23;
  } v14_;

  v2 = *a1;
  v3 = *a2;
  v14_.v15 = 0;
  v14_.v19 = 0;
  v4 = *(_QWORD*)(v2 + 8);
  v14_.v14[0] = *(_QWORD*)v2;
  v14_.v14[1] = v4;
  if (*(_BYTE*)(v2 + 48) == 1) {
    v14_.v15 = *(_BYTE*)(v2 + 16);
    v5 = *(_QWORD*)(v2 + 24);
    v6 = *(_QWORD*)(v2 + 32);
    *(_QWORD*)(v2 + 24) = 0;
    *(_QWORD*)(v2 + 32) = 0;
    v14_.v16 = v5;
    v14_.v17 = v6;
    v7 = *(_QWORD*)(v2 + 40);
    *(_QWORD*)(v2 + 40) = 0;
    v14_.v18 = v7;
    v14_.v19 = 1;
  }
  v8 = *(unsigned __int8*)(v2 + 80);
  LOBYTE(v14_.v20) = 0;
  v14_.v23 = 0;
  if (v8 == 1) {
    v9 = *(_QWORD*)(v2 + 56);
    v10 = *(_QWORD*)(v2 + 64);
    *(_QWORD*)(v2 + 56) = 0;
    *(_QWORD*)(v2 + 64) = 0;
    v14_.v20 = v9;
    v14_.v21 = v10;
    v11 = *(_QWORD*)(v2 + 72);
    *(_QWORD*)(v2 + 72) = 0;
    v14_.v22 = v11;
    v14_.v23 = 1;
  }
  GameHr_103a200(v2, v3);
  GameHr_103a200(v3, (__int64)v14_.v14);
  if (v14_.v23 == 1 && (v14_.v20 & 1) != 0 && v14_.v22 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  v14_.v22);
  }
  if (v14_.v19 == 1 && (v14_.v16 & 1) != 0 && v14_.v18 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  v14_.v18);
  }
}

void GameHr_1039180(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64 v94;
  _QWORD* v95;
  __int64 v96;
  __int64 v97;
  _QWORD* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;

  if (a3 == 0) {
    return;
  }
  v4 = a4;
  v6 = a1;
  if (a3 == 2) {
    v13 = a2 - 11;
    if (*((unsigned __int8*)a2 - 79) >=
        (unsigned int)*(unsigned __int8*)(a1 + 9)) {
      v80 = *(_QWORD*)a1;
      v81 = *(_QWORD*)(a1 + 8);
      *(_BYTE*)(a4 + 16) = 0;
      *(_BYTE*)(a4 + 48) = 0;
      *(_QWORD*)a4 = v80;
      *(_QWORD*)(a4 + 8) = v81;
      if (*(_BYTE*)(a1 + 48) == 1) {
        *(_BYTE*)(a4 + 16) = *(_BYTE*)(a1 + 16);
        v82 = *(_QWORD*)(a1 + 32);
        v83 = *(_QWORD*)(a1 + 40);
        *(_QWORD*)(a4 + 24) = *(_QWORD*)(a1 + 24);
        *(_QWORD*)(a4 + 32) = v82;
        *(_QWORD*)(a4 + 40) = v83;
        *(_QWORD*)(a1 + 32) = 0;
        *(_QWORD*)(a1 + 40) = 0;
        *(_QWORD*)(a1 + 24) = 0;
        *(_BYTE*)(a4 + 48) = 1;
      }
      *(_BYTE*)(a4 + 56) = 0;
      *(_BYTE*)(a4 + 80) = 0;
      if (*(_BYTE*)(a1 + 80) == 1) {
        v84 = *(_QWORD*)(a1 + 56);
        v85 = *(_QWORD*)(a1 + 72);
        *(_QWORD*)(a4 + 64) = *(_QWORD*)(a1 + 64);
        *(_QWORD*)(a4 + 72) = v85;
        *(_QWORD*)(a4 + 56) = v84;
        *(_QWORD*)(a1 + 64) = 0;
        *(_QWORD*)(a1 + 72) = 0;
        *(_QWORD*)(a1 + 56) = 0;
        *(_BYTE*)(a4 + 80) = 1;
      }
      v87 = *v13;
      v86 = *(a2 - 10);
      *(_BYTE*)(a4 + 104) = 0;
      *(_BYTE*)(a4 + 136) = 0;
      *(_QWORD*)(a4 + 88) = v87;
      *(_QWORD*)(a4 + 96) = v86;
      if (*((_BYTE*)a2 - 40) == 1) {
        *(_BYTE*)(a4 + 104) = *((_BYTE*)a2 - 72);
        v88 = *(a2 - 7);
        v89 = *(a2 - 6);
        *(_QWORD*)(a4 + 112) = *(a2 - 8);
        *(_QWORD*)(a4 + 120) = v88;
        *(_QWORD*)(a4 + 128) = v89;
        *(a2 - 7) = 0;
        *(a2 - 6) = 0;
        *(a2 - 8) = 0;
        *(_BYTE*)(a4 + 136) = 1;
      }
      *(_BYTE*)(a4 + 144) = 0;
      *(_BYTE*)(a4 + 168) = 0;
      if (*((_BYTE*)a2 - 8) != 1) {
        return;
      }
      v90 = *(a2 - 4);
      v91 = *(a2 - 2);
      *(_QWORD*)(a4 + 152) = *(a2 - 3);
      *(_QWORD*)(a4 + 160) = v91;
      *(_QWORD*)(a4 + 144) = v90;
      *(a2 - 3) = 0;
      *(a2 - 2) = 0;
      *(a2 - 4) = 0;
    }
    else {
      v15 = *v13;
      v14 = *(a2 - 10);
      *(_BYTE*)(a4 + 16) = 0;
      *(_BYTE*)(a4 + 48) = 0;
      *(_QWORD*)a4 = v15;
      *(_QWORD*)(a4 + 8) = v14;
      if (*((_BYTE*)a2 - 40) == 1) {
        *(_BYTE*)(a4 + 16) = *((_BYTE*)a2 - 72);
        v16 = *(a2 - 7);
        v17 = *(a2 - 6);
        *(_QWORD*)(a4 + 24) = *(a2 - 8);
        *(_QWORD*)(a4 + 32) = v16;
        *(_QWORD*)(a4 + 40) = v17;
        *(a2 - 7) = 0;
        *(a2 - 6) = 0;
        *(a2 - 8) = 0;
        *(_BYTE*)(a4 + 48) = 1;
      }
      *(_BYTE*)(a4 + 56) = 0;
      *(_BYTE*)(a4 + 80) = 0;
      if (*((_BYTE*)a2 - 8) == 1) {
        v18 = *(a2 - 4);
        v19 = *(a2 - 2);
        *(_QWORD*)(a4 + 64) = *(a2 - 3);
        *(_QWORD*)(a4 + 72) = v19;
        *(_QWORD*)(a4 + 56) = v18;
        *(a2 - 3) = 0;
        *(a2 - 2) = 0;
        *(a2 - 4) = 0;
        *(_BYTE*)(a4 + 80) = 1;
      }
      v20 = *(_QWORD*)a1;
      v21 = *(_QWORD*)(a1 + 8);
      *(_BYTE*)(a4 + 104) = 0;
      *(_BYTE*)(a4 + 136) = 0;
      *(_QWORD*)(a4 + 88) = v20;
      *(_QWORD*)(a4 + 96) = v21;
      if (*(_BYTE*)(a1 + 48) == 1) {
        *(_BYTE*)(a4 + 104) = *(_BYTE*)(a1 + 16);
        v22 = *(_QWORD*)(a1 + 32);
        v23 = *(_QWORD*)(a1 + 40);
        *(_QWORD*)(a4 + 112) = *(_QWORD*)(a1 + 24);
        *(_QWORD*)(a4 + 120) = v22;
        *(_QWORD*)(a4 + 128) = v23;
        *(_QWORD*)(a1 + 32) = 0;
        *(_QWORD*)(a1 + 40) = 0;
        *(_QWORD*)(a1 + 24) = 0;
        *(_BYTE*)(a4 + 136) = 1;
      }
      *(_BYTE*)(a4 + 144) = 0;
      *(_BYTE*)(a4 + 168) = 0;
      if (*(_BYTE*)(a1 + 80) != 1) {
        return;
      }
      v24 = *(_QWORD*)(a1 + 56);
      v25 = *(_QWORD*)(a1 + 72);
      *(_QWORD*)(a4 + 152) = *(_QWORD*)(a1 + 64);
      *(_QWORD*)(a4 + 160) = v25;
      *(_QWORD*)(a4 + 144) = v24;
      *(_QWORD*)(a1 + 64) = 0;
      *(_QWORD*)(a1 + 72) = 0;
      *(_QWORD*)(a1 + 56) = 0;
    }
    *(_BYTE*)(a4 + 168) = 1;
    return;
  }
  if (a3 == 1) {
    v7 = *(_QWORD*)a1;
    v8 = *(_QWORD*)(a1 + 8);
    *(_BYTE*)(a4 + 16) = 0;
    *(_BYTE*)(a4 + 48) = 0;
    *(_QWORD*)a4 = v7;
    *(_QWORD*)(a4 + 8) = v8;
    if (*(_BYTE*)(a1 + 48) == 1) {
      *(_BYTE*)(a4 + 16) = *(_BYTE*)(a1 + 16);
      v9 = *(_QWORD*)(a1 + 32);
      v10 = *(_QWORD*)(a1 + 40);
      *(_QWORD*)(a4 + 24) = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(a4 + 32) = v9;
      *(_QWORD*)(a4 + 40) = v10;
      *(_QWORD*)(a1 + 32) = 0;
      *(_QWORD*)(a1 + 40) = 0;
      *(_QWORD*)(a1 + 24) = 0;
      *(_BYTE*)(a4 + 48) = 1;
    }
    *(_BYTE*)(a4 + 56) = 0;
    *(_BYTE*)(a4 + 80) = 0;
    if (*(_BYTE*)(a1 + 80) == 1) {
      v11 = *(_QWORD*)(a1 + 56);
      v12 = *(_QWORD*)(a1 + 72);
      *(_QWORD*)(a4 + 64) = *(_QWORD*)(a1 + 64);
      *(_QWORD*)(a4 + 72) = v12;
      *(_QWORD*)(a4 + 56) = v11;
      *(_QWORD*)(a1 + 64) = 0;
      *(_QWORD*)(a1 + 72) = 0;
      *(_QWORD*)(a1 + 56) = 0;
      *(_BYTE*)(a4 + 80) = 1;
    }
  }
  else if (a3 > 8) {
    v92 = (unsigned __int64)a3 >> 1;
    v94 = 88 * ((unsigned __int64)a3 >> 1);
    v95 = (_QWORD*)(v94 + a1);
    GameRoutine_1038a60_alt1(a1, (_QWORD*)(v94 + a1), v92, a4, v92);
    GameRoutine_1038a60_alt1(v94 + v6, a2, a3 - v92, v4 + v94, a3 - v92);
    if (v94 != 0) {
      v96 = v4 + 48;
      v97 = v94 + v6;
      do {
        if ((_QWORD*)v97 == a2) {
          if ((_QWORD*)v6 != v95) {
            v111 = v6 + 56;
            do {
              v113 = *(_QWORD*)(v111 - 56);
              v114 = *(_QWORD*)(v111 - 48);
              v112 = v111 - 56;
              *(_BYTE*)(v96 - 32) = 0;
              *(_BYTE*)v96 = 0;
              *(_QWORD*)(v96 - 48) = v113;
              *(_QWORD*)(v96 - 40) = v114;
              if (*(_BYTE*)(v111 - 8) == 1) {
                *(_BYTE*)(v96 - 32) = *(_BYTE*)(v111 - 40);
                v115 = *(_QWORD*)(v111 - 32);
                v116 = *(_QWORD*)(v111 - 16);
                *(_QWORD*)(v96 - 16) = *(_QWORD*)(v111 - 24);
                *(_QWORD*)(v96 - 8) = v116;
                *(_QWORD*)(v96 - 24) = v115;
                *(_QWORD*)(v111 - 24) = 0;
                *(_QWORD*)(v111 - 16) = 0;
                *(_QWORD*)(v111 - 32) = 0;
                *(_BYTE*)v96 = 1;
              }
              *(_BYTE*)(v96 + 8) = 0;
              *(_BYTE*)(v96 + 32) = 0;
              if (*(_BYTE*)(v111 + 24) == 1) {
                v117 = *(_QWORD*)v111;
                v118 = *(_QWORD*)(v111 + 16);
                *(_QWORD*)(v96 + 16) = *(_QWORD*)(v111 + 8);
                *(_QWORD*)(v96 + 24) = v118;
                *(_QWORD*)(v96 + 8) = v117;
                *(_QWORD*)(v111 + 8) = 0;
                *(_QWORD*)(v111 + 16) = 0;
                *(_QWORD*)v111 = 0;
                *(_BYTE*)(v96 + 32) = 1;
              }
              v111 += 88;
              v96 += 88;
            } while ((_QWORD*)(v112 + 88) != v95);
          }
          return;
        }
        v98 = (_QWORD*)(v96 - 48);
        if (*(unsigned __int8*)(v97 + 9) >=
            (unsigned int)*(unsigned __int8*)(v6 + 9)) {
          v105 = *(_QWORD*)v6;
          v106 = *(_QWORD*)(v6 + 8);
          *(_BYTE*)(v96 - 32) = 0;
          *(_BYTE*)v96 = 0;
          *v98 = v105;
          *(_QWORD*)(v96 - 40) = v106;
          if (*(_BYTE*)(v6 + 48) == 1) {
            *(_BYTE*)(v96 - 32) = *(_BYTE*)(v6 + 16);
            v107 = *(_QWORD*)(v6 + 24);
            v108 = *(_QWORD*)(v6 + 40);
            *(_QWORD*)(v96 - 16) = *(_QWORD*)(v6 + 32);
            *(_QWORD*)(v96 - 8) = v108;
            *(_QWORD*)(v96 - 24) = v107;
            *(_QWORD*)(v6 + 32) = 0;
            *(_QWORD*)(v6 + 40) = 0;
            *(_QWORD*)(v6 + 24) = 0;
            *(_BYTE*)v96 = 1;
          }
          *(_BYTE*)(v96 + 8) = 0;
          *(_BYTE*)(v96 + 32) = 0;
          if (*(_BYTE*)(v6 + 80) == 1) {
            v109 = *(_QWORD*)(v6 + 56);
            v110 = *(_QWORD*)(v6 + 72);
            *(_QWORD*)(v96 + 16) = *(_QWORD*)(v6 + 64);
            *(_QWORD*)(v96 + 24) = v110;
            *(_QWORD*)(v96 + 8) = v109;
            *(_QWORD*)(v6 + 64) = 0;
            *(_QWORD*)(v6 + 72) = 0;
            *(_QWORD*)(v6 + 56) = 0;
            *(_BYTE*)(v96 + 32) = 1;
          }
          v6 += 88;
        }
        else {
          v99 = *(_QWORD*)v97;
          v100 = *(_QWORD*)(v97 + 8);
          *(_BYTE*)(v96 - 32) = 0;
          *(_BYTE*)v96 = 0;
          *v98 = v99;
          *(_QWORD*)(v96 - 40) = v100;
          if (*(_BYTE*)(v97 + 48) == 1) {
            *(_BYTE*)(v96 - 32) = *(_BYTE*)(v97 + 16);
            v101 = *(_QWORD*)(v97 + 24);
            v102 = *(_QWORD*)(v97 + 40);
            *(_QWORD*)(v96 - 16) = *(_QWORD*)(v97 + 32);
            *(_QWORD*)(v96 - 8) = v102;
            *(_QWORD*)(v96 - 24) = v101;
            *(_QWORD*)(v97 + 32) = 0;
            *(_QWORD*)(v97 + 40) = 0;
            *(_QWORD*)(v97 + 24) = 0;
            *(_BYTE*)v96 = 1;
          }
          *(_BYTE*)(v96 + 8) = 0;
          *(_BYTE*)(v96 + 32) = 0;
          if (*(_BYTE*)(v97 + 80) == 1) {
            v103 = *(_QWORD*)(v97 + 56);
            v104 = *(_QWORD*)(v97 + 72);
            *(_QWORD*)(v96 + 16) = *(_QWORD*)(v97 + 64);
            *(_QWORD*)(v96 + 24) = v104;
            *(_QWORD*)(v96 + 8) = v103;
            *(_QWORD*)(v97 + 64) = 0;
            *(_QWORD*)(v97 + 72) = 0;
            *(_QWORD*)(v97 + 56) = 0;
            *(_BYTE*)(v96 + 32) = 1;
          }
          v97 += 88;
        }
        v96 += 88;
      } while ((_QWORD*)v6 != v95);
      v4 = v96 - 48;
      if ((_QWORD*)v97 == a2) {
        return;
      }
    }
    else {
      v97 = (__int64)v95;
      if (v95 == a2) {
        return;
      }
    }
    v119 = v97 + 56;
    v120 = v4 + 48;
    do {
      v122 = *(_QWORD*)(v119 - 56);
      v123 = *(_QWORD*)(v119 - 48);
      v121 = v119 - 56;
      *(_BYTE*)(v120 - 32) = 0;
      *(_BYTE*)v120 = 0;
      *(_QWORD*)(v120 - 48) = v122;
      *(_QWORD*)(v120 - 40) = v123;
      if (*(_BYTE*)(v119 - 8) == 1) {
        *(_BYTE*)(v120 - 32) = *(_BYTE*)(v119 - 40);
        v124 = *(_QWORD*)(v119 - 32);
        v125 = *(_QWORD*)(v119 - 16);
        *(_QWORD*)(v120 - 16) = *(_QWORD*)(v119 - 24);
        *(_QWORD*)(v120 - 8) = v125;
        *(_QWORD*)(v120 - 24) = v124;
        *(_QWORD*)(v119 - 24) = 0;
        *(_QWORD*)(v119 - 16) = 0;
        *(_QWORD*)(v119 - 32) = 0;
        *(_BYTE*)v120 = 1;
      }
      *(_BYTE*)(v120 + 8) = 0;
      *(_BYTE*)(v120 + 32) = 0;
      if (*(_BYTE*)(v119 + 24) == 1) {
        v126 = *(_QWORD*)v119;
        v127 = *(_QWORD*)(v119 + 16);
        *(_QWORD*)(v120 + 16) = *(_QWORD*)(v119 + 8);
        *(_QWORD*)(v120 + 24) = v127;
        *(_QWORD*)(v120 + 8) = v126;
        *(_QWORD*)(v119 + 8) = 0;
        *(_QWORD*)(v119 + 16) = 0;
        *(_QWORD*)v119 = 0;
        *(_BYTE*)(v120 + 32) = 1;
      }
      v119 += 88;
      v120 += 88;
    } while ((_QWORD*)(v121 + 88) != a2);
  }
  else if ((_QWORD*)a1 != a2) {
    v26 = *(_QWORD*)a1;
    v27 = *(_QWORD*)(a1 + 8);
    *(_BYTE*)(a4 + 16) = 0;
    *(_BYTE*)(a4 + 48) = 0;
    *(_QWORD*)a4 = v26;
    *(_QWORD*)(a4 + 8) = v27;
    if (*(_BYTE*)(a1 + 48) == 1) {
      *(_BYTE*)(a4 + 16) = *(_BYTE*)(a1 + 16);
      v28 = *(_QWORD*)(a1 + 32);
      v29 = *(_QWORD*)(a1 + 40);
      *(_QWORD*)(a4 + 24) = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(a4 + 32) = v28;
      *(_QWORD*)(a4 + 40) = v29;
      *(_QWORD*)(a1 + 32) = 0;
      *(_QWORD*)(a1 + 40) = 0;
      *(_QWORD*)(a1 + 24) = 0;
      *(_BYTE*)(a4 + 48) = 1;
    }
    *(_BYTE*)(a4 + 56) = 0;
    *(_BYTE*)(a4 + 80) = 0;
    if (*(_BYTE*)(a1 + 80) == 1) {
      v30 = *(_QWORD*)(a1 + 56);
      v31 = *(_QWORD*)(a1 + 72);
      *(_QWORD*)(a4 + 64) = *(_QWORD*)(a1 + 64);
      *(_QWORD*)(a4 + 72) = v31;
      *(_QWORD*)(a4 + 56) = v30;
      *(_QWORD*)(a1 + 64) = 0;
      *(_QWORD*)(a1 + 72) = 0;
      *(_QWORD*)(a1 + 56) = 0;
      *(_BYTE*)(a4 + 80) = 1;
    }
    v32 = (__int64*)(a1 + 88);
    if ((_QWORD*)(a1 + 88) != a2) {
      v33 = 0;
      v34 = a4;
      do {
        v36 = v6;
        v37 = v34;
        v6 = (__int64)v32;
        v38 = *(unsigned __int8*)(v34 + 9);
        v34 += 88;
        if (*(unsigned __int8*)(v36 + 97) >= v38) {
          v74 = *v32;
          v75 = *(_QWORD*)(v6 + 8);
          *(_BYTE*)(v37 + 104) = 0;
          *(_BYTE*)(v37 + 136) = 0;
          *(_QWORD*)v34 = v74;
          *(_QWORD*)(v34 + 8) = v75;
          if (*(_BYTE*)(v36 + 136) == 1) {
            *(_BYTE*)(v37 + 104) = *(_BYTE*)(v36 + 104);
            v76 = *(_QWORD*)(v36 + 112);
            v77 = *(_QWORD*)(v36 + 128);
            *(_QWORD*)(v37 + 120) = *(_QWORD*)(v36 + 120);
            *(_QWORD*)(v37 + 128) = v77;
            *(_QWORD*)(v37 + 112) = v76;
            *(_QWORD*)(v36 + 120) = 0;
            *(_QWORD*)(v36 + 128) = 0;
            *(_QWORD*)(v36 + 112) = 0;
            *(_BYTE*)(v37 + 136) = 1;
          }
          *(_BYTE*)(v37 + 144) = 0;
          *(_BYTE*)(v37 + 168) = 0;
          if (*(_BYTE*)(v36 + 168) == 1) {
            v78 = *(_QWORD*)(v36 + 144);
            v79 = *(_QWORD*)(v36 + 160);
            *(_QWORD*)(v37 + 152) = *(_QWORD*)(v36 + 152);
            *(_QWORD*)(v37 + 160) = v79;
            *(_QWORD*)(v37 + 144) = v78;
            *(_QWORD*)(v36 + 152) = 0;
            *(_QWORD*)(v36 + 160) = 0;
            *(_QWORD*)(v36 + 144) = 0;
            *(_BYTE*)(v37 + 168) = 1;
          }
        }
        else {
          v39 = *(_QWORD*)v37;
          v40 = *(_QWORD*)(v37 + 8);
          *(_BYTE*)(v37 + 104) = 0;
          *(_BYTE*)(v37 + 136) = 0;
          *(_QWORD*)v34 = v39;
          *(_QWORD*)(v34 + 8) = v40;
          if (*(_BYTE*)(v37 + 48) == 1) {
            v41 = *(_BYTE*)(v37 + 16);
            *(_BYTE*)(v37 + 136) = 1;
            *(_BYTE*)(v37 + 104) = v41;
            v42 = *(_QWORD*)(v37 + 24);
            v43 = *(_QWORD*)(v37 + 32);
            *(_QWORD*)(v37 + 24) = 0;
            *(_QWORD*)(v37 + 32) = 0;
            *(_QWORD*)(v37 + 112) = v42;
            *(_QWORD*)(v37 + 120) = v43;
            v44 = *(_QWORD*)(v37 + 40);
            *(_QWORD*)(v37 + 40) = 0;
            *(_QWORD*)(v37 + 128) = v44;
          }
          *(_BYTE*)(v37 + 144) = 0;
          v45 = *(unsigned __int8*)(v37 + 80);
          *(_BYTE*)(v37 + 168) = 0;
          if (v45 == 1) {
            v46 = *(_QWORD*)(v37 + 56);
            v47 = *(_QWORD*)(v37 + 64);
            *(_QWORD*)(v37 + 56) = 0;
            *(_QWORD*)(v37 + 64) = 0;
            *(_BYTE*)(v37 + 168) = 1;
            *(_QWORD*)(v37 + 144) = v46;
            *(_QWORD*)(v37 + 152) = v47;
            v48 = *(_QWORD*)(v37 + 72);
            *(_QWORD*)(v37 + 72) = 0;
            *(_QWORD*)(v37 + 160) = v48;
          }
          v35 = v4;
          if (v37 != v4) {
            v49 = v33;
            while (1) {
              v35 = v4 + v49;
              if (*(unsigned __int8*)(v36 + 97) >=
                  (unsigned int)*(unsigned __int8*)(v4 + v49 - 79)) {
                break;
              }
              v50 = *(_QWORD*)(v35 - 80);
              *(_QWORD*)v35 = *(_QWORD*)(v35 - 88);
              *(_QWORD*)(v35 + 8) = v50;
              if (*(unsigned __int8*)(v35 + 48) ==
                  *(unsigned __int8*)(v35 - 40)) {
                if (*(_BYTE*)(v35 + 48) != 0) {
                  *(_BYTE*)(v35 + 16) = *(_BYTE*)(v35 - 72);
                  v51 = v4 + v49;
                  if ((*(_BYTE*)(v4 + v49 + 24) & 1) != 0) {
                    v52 = *(_QWORD*)(v51 + 40);
                    if (v52 != 0) {
                      v53 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v53 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v52);
                    }
                  }
                  v54 = *(_QWORD*)(v51 - 64);
                  v55 = *(_QWORD*)(v51 - 56);
                  *(_WORD*)(v51 - 64) = 0;
                  *(_QWORD*)(v4 + v49 + 24) = v54;
                  *(_QWORD*)(v4 + v49 + 32) = v55;
                  *(_QWORD*)(v4 + v49 + 40) = *(_QWORD*)(v51 - 48);
                }
              }
              else if (*(_BYTE*)(v35 + 48) != 0) {
                if ((*(_BYTE*)(v4 + v49 + 24) & 1) != 0) {
                  v56 = *(_QWORD*)(v4 + v49 + 40);
                  if (v56 != 0) {
                    v57 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v57 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v56);
                  }
                }
                *(_BYTE*)(v35 + 48) = 0;
              }
              else {
                v58 = *(_BYTE*)(v35 - 72);
                *(_BYTE*)(v35 + 48) = 1;
                *(_BYTE*)(v35 + 16) = v58;
                v59 = (_QWORD*)(v4 + v49);
                v60 = *(_QWORD*)(v4 + v49 - 64);
                v61 = *(_QWORD*)(v4 + v49 - 56);
                *(v59 - 8) = 0;
                *(v59 - 7) = 0;
                v59[3] = v60;
                v59[4] = v61;
                v62 = *(_QWORD*)(v4 + v49 - 48);
                *(v59 - 6) = 0;
                v59[5] = v62;
              }
              v63 = v4 + v49;
              v64 = (__int64*)(v4 + v49 - 32);
              if (*(unsigned __int8*)(v4 + v49 + 80) ==
                  *(unsigned __int8*)(v4 + v49 - 8)) {
                if (*(_BYTE*)(v4 + v49 + 80) != 0) {
                  if ((*(_BYTE*)(v63 + 56) & 1) != 0) {
                    v65 = *(_QWORD*)(v4 + v49 + 72);
                    if (v65 != 0) {
                      v66 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v66 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v65);
                    }
                  }
                  v67 = *v64;
                  v68 = *(_QWORD*)(v4 + v49 - 24);
                  *(_BYTE*)v64 = 0;
                  *(_QWORD*)(v63 + 56) = v67;
                  *(_QWORD*)(v63 + 64) = v68;
                  *(_QWORD*)(v63 + 72) = *(_QWORD*)(v4 + v49 - 16);
                  *(_BYTE*)(v4 + v49 - 31) = 0;
                }
              }
              else if (*(_BYTE*)(v4 + v49 + 80) != 0) {
                if ((*(_BYTE*)(v63 + 56) & 1) != 0) {
                  v69 = *(_QWORD*)(v4 + v49 + 72);
                  if (v69 != 0) {
                    v70 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v70 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v69);
                  }
                }
                *(_BYTE*)(v63 + 80) = 0;
              }
              else {
                v71 = *v64;
                v72 = *(_QWORD*)(v4 + v49 - 24);
                *v64 = 0;
                *(_QWORD*)(v4 + v49 - 24) = 0;
                *(_BYTE*)(v63 + 80) = 1;
                *(_QWORD*)(v63 + 56) = v71;
                *(_QWORD*)(v63 + 64) = v72;
                v73 = *(_QWORD*)(v4 + v49 - 16);
                *(_QWORD*)(v4 + v49 - 16) = 0;
                *(_QWORD*)(v63 + 72) = v73;
              }
              v49 -= 88;
              if (v49 == 0) {
                v35 = v4;
                break;
              }
            }
          }
          GameRoutine_103a200_alt1(v35, v6);
        }
        v32 = (__int64*)(v6 + 88);
        v33 += 88;
      } while ((_QWORD*)(v6 + 88) != a2);
    }
  }
}

__int64 GameHr_103a200(__int64 result, __int64 a2)
{
  __int64 v2;
  char v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v2 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)result = *(_QWORD*)a2;
  *(_QWORD*)(result + 8) = v2;
  if (*(unsigned __int8*)(result + 48) == *(unsigned __int8*)(a2 + 48)) {
    if (*(_BYTE*)(result + 48) != 0) {
      v4 = (_QWORD*)(result + 24);
      v3 = *(_BYTE*)(result + 24);
      *(_BYTE*)(result + 16) = *(_BYTE*)(a2 + 16);
      if ((v3 & 1) != 0 && *(_QWORD*)(result + 40) != 0) {
        v5 = result;
        v6 = a2;
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                          v7,
                                      *(_QWORD*)(result + 40));
        a2 = v6;
        result = v5;
      }
      v8 = *(_QWORD*)(a2 + 24);
      v9 = *(_QWORD*)(a2 + 40);
      v4[1] = *(_QWORD*)(a2 + 32);
      v4[2] = v9;
      *v4 = v8;
      *(_WORD*)(a2 + 24) = 0;
    }
  }
  else if (*(_BYTE*)(result + 48) != 0) {
    if ((*(_BYTE*)(result + 24) & 1) != 0 && *(_QWORD*)(result + 40) != 0) {
      v10 = result;
      v11 = a2;
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v12,
                                    *(_QWORD*)(result + 40));
      a2 = v11;
      result = v10;
    }
    *(_BYTE*)(result + 48) = 0;
  }
  else {
    *(_BYTE*)(result + 16) = *(_BYTE*)(a2 + 16);
    v13 = *(_QWORD*)(a2 + 32);
    v14 = *(_QWORD*)(a2 + 40);
    *(_QWORD*)(result + 24) = *(_QWORD*)(a2 + 24);
    *(_QWORD*)(result + 32) = v13;
    *(_QWORD*)(result + 40) = v14;
    *(_QWORD*)(a2 + 32) = 0;
    *(_QWORD*)(a2 + 40) = 0;
    *(_QWORD*)(a2 + 24) = 0;
    *(_BYTE*)(result + 48) = 1;
  }
  if (*(unsigned __int8*)(result + 80) == *(unsigned __int8*)(a2 + 80)) {
    if (*(_BYTE*)(result + 80) != 0) {
      if ((*(_BYTE*)(result + 56) & 1) != 0 && *(_QWORD*)(result + 72) != 0) {
        v15 = result;
        v16 = a2;
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                          v17,
                                      *(_QWORD*)(result + 72));
        a2 = v16;
        result = v15;
      }
      v18 = *(_QWORD*)(a2 + 56);
      v19 = *(_QWORD*)(a2 + 72);
      *(_QWORD*)(result + 64) = *(_QWORD*)(a2 + 64);
      *(_QWORD*)(result + 72) = v19;
      *(_QWORD*)(result + 56) = v18;
      *(_WORD*)(a2 + 56) = 0;
    }
  }
  else if (*(_BYTE*)(result + 80) != 0) {
    if ((*(_BYTE*)(result + 56) & 1) != 0) {
      v20 = *(_QWORD*)(result + 72);
      if (v20 != 0) {
        v21 = result;
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v20);
        result = v21;
      }
    }
    *(_BYTE*)(result + 80) = 0;
  }
  else {
    v23 = *(_QWORD*)(a2 + 64);
    v24 = *(_QWORD*)(a2 + 72);
    *(_QWORD*)(result + 56) = *(_QWORD*)(a2 + 56);
    *(_QWORD*)(result + 64) = v23;
    *(_QWORD*)(result + 72) = v24;
    *(_QWORD*)(a2 + 64) = 0;
    *(_QWORD*)(a2 + 72) = 0;
    *(_QWORD*)(a2 + 56) = 0;
    *(_BYTE*)(result + 80) = 1;
  }
  return result;
}

#pragma GCC visibility pop
