#pragma once
#include "game.h"
#include "utils.h"
//#include "xbox.h"
#include <xtl.h>

#include <cstdint>
#include <string>

// Enum for game title IDs
typedef enum _TitleId
{
    Title_Dashboard = 0xFFFE07D1,
    Title_MW2 = 0x41560817,
} TitleId;

// Imports from the Xbox libraries
extern "C"
{
    uint32_t XamGetCurrentTitleId();

    uint32_t ExCreateThread(
        HANDLE *pHandle,
        uint32_t stackSize,
        uint32_t *pThreadId,
        void *pApiThreadStartup,
        PTHREAD_START_ROUTINE pStartAddress,
        void *pParameter,
        uint32_t creationFlags
    );
}