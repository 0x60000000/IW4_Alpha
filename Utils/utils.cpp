#include "utils.h"

namespace util
{
	void DebugPrint(char *strToPrint)
	{
		OutputDebugStringA(strToPrint);
		OutputDebugStringA("\n");
	}
}
