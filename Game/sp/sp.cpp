#include "sp.h"

namespace sp
{
	void init()
	{
		Sleep(1000);
		util::DebugPrint("[SP] Initializing IW4...");
		xbox::XNotifyQueueUI(0, 0, XNOTIFY_SYSTEM, L"[SP] Initializing IW4...", nullptr);

		Sleep(1000);
		util::DebugPrint("[SP] IW4 Initialized!");
		xbox::XNotifyQueueUI(0, 0, XNOTIFY_SYSTEM, L"[SP] IW4 Initialized!", nullptr);
	}
}
