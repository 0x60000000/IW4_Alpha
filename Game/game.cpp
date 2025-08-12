#include "game.h"

namespace game
{
	void Initialize()
	{
		if (strncmp((char *)0x8204D880, "ui_multiplayer", 15) == 0)
		{
			mp::init();
		}
		else if (strncmp((char *)0x82019314, "startSingleplayer", 18) == 0)
		{
			sp::init();
		}
		else
		{
			util::DebugPrint("Something went wrong during initialization! :(");
		}
	}
}
