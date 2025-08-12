#include "mp_funcs.h"

namespace mp_func
{
	uint32_t CL_ConsolePrint_Location = 0x82172CA8;
	CL_CONSOLEPRINT CL_ConsolePrint = reinterpret_cast<CL_CONSOLEPRINT>(CL_ConsolePrint_Location);
}