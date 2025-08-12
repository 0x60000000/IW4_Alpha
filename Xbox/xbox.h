#pragma once
#include <xtl.h>

#include <cstdint>
#include <string>

namespace xbox
{
	void *ResolveFunction(const std::string &moduleName, uint32_t ordinal);

	// Create a pointer to XNotifyQueueUI in xam.xex
	typedef void (*XNOTIFYQUEUEUI)(uint32_t type, uint32_t userIndex, uint64_t areas, const wchar_t *displayText, void *pContextData);
	extern XNOTIFYQUEUEUI XNotifyQueueUI;
}
