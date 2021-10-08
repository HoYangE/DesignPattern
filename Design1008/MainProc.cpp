#include "Miner.h"
#include <Windows.h>

int main()
{
	Miner miner("ent_Miner_Bob");

	for(int i=0;i<20;++i)
	{
		miner.Update();
		Sleep(800);
	}

	return 0;
}