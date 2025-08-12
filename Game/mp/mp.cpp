#include "mp.h"

namespace mp
{
	void init()
	{
		Sleep(1000);
		util::DebugPrint("[MP] Initializing IW4...");
		xbox::XNotifyQueueUI(0, 0, XNOTIFY_SYSTEM, L"[MP] Initializing IW4...", nullptr);

		mp_detour::CL_ConsolePrint_Detour = Detour(mp_func::CL_ConsolePrint, mp_hook::CL_ConsolePrint_Hook);
		mp_detour::CL_ConsolePrint_Detour.Install();

		Sleep(1000);
		util::DebugPrint("[MP] IW4 Initialized!");
		xbox::XNotifyQueueUI(0, 0, XNOTIFY_SYSTEM, L"[MP] IW4 Initialized!", nullptr);
	}
}
