#pragma once
#include "mp_detours.h"
#include "mp_funcs.h"

namespace mp_hook
{
	void CL_ConsolePrint_Hook(int localClientNum, int channel, const char *txt, int duration, int pixelWidth, int flags);
}