#include <iostream>
#include "highScore.h"
using namespace std;

void main()
{
	highScore::HighScore hS;

	/*hS.addScore("as", 50);
	hS.addScore("cs", 100);
	hS.addScore("bs", 150);*/

	hS.getScoreList();

	cin.get();
}