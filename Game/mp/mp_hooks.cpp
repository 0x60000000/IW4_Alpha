#include "mp_hooks.h"

namespace mp_hook
{
	void CL_ConsolePrint_Hook(int localClientNum, int channel, const char *txt, int duration, int pixelWidth, int flags)
	{
		/*Output the characters of txt*/
		OutputDebugString( txt );

		/*Call the OG function*/
		mp_detour::CL_ConsolePrint_Detour.GetOriginal<decltype(mp_func::CL_ConsolePrint)>()(localClientNum, channel, txt, duration, pixelWidth, flags);
	}
}