#include <iostream>
#include "highScore.h"
using namespace std;
using namespace highScore;

void main()
{
	HighScore* hS = new HighScore(15);

	hS->addScore(15, "pepe");
	hS->addScore(20, "pipo");
	hS->addScore(13, "juan");
	hS->addScore(18, "ana");
	hS->addScore(4, "juan");

	for (int i = 0; i < 5; i++)
	{
		cout<<hS->getScore(i).player.c_str()<<" "<< hS->getScore(i).score<<"pts"<<endl;
	}

	cin.get();
}