#include <iostream>
#include "highScore.h"
//using namespace std;
using namespace highScore;

void main()
{
	HighScore* hS = new HighScore(15);

	hS->addScore(15, "pepe");
	hS->addScore(20, "pipo");
	hS->addScore(13, "juan");
	hS->addScore(18, "ana");

	for (int i = 0; i < 4; i++)
	{
		cout<<hS->getScore(i).player.c_str()<<" "<< hS->getScore(i).score<<"pts";
	}

	cin.get();
}