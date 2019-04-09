#include "highScore.h"

namespace highScore
{
	void HighScore::reOrder()
	{
		
	}

	void HighScore::addScore(string p, int score)
	{
		Scores aux;
		aux.player = p;
		aux.score = score;
		scorelist.push_front(aux);
		reOrder();
	}

	list<Scores> HighScore::getScoreList()
	{
		return scorelist;
	}

}