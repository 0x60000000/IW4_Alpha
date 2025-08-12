#pragma once
#include <cstdint>

namespace mp_func
{
	typedef void (*CL_CONSOLEPRINT)(int localClientNum, int channel, const char *txt, int duration, int pixelWidth, int flags);
	extern CL_CONSOLEPRINT CL_ConsolePrint;
}