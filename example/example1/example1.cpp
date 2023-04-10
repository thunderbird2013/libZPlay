#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libzplay.h"

using namespace libZPlay;

int main(int argc, char **argv)
{
    ZPlay *player = CreateZPlay();

// open file
	int result = player->OpenFile("test.mp3", sfAutodetect);
	if(result == 0)
	{
		// display error message
		printf("Error: %s\n", player->GetError());
		player->Release();
		return 0;
	}

	player->Play();
	

}