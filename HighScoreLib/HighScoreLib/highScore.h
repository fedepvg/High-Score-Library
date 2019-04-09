#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <iostream>
#include <list>
using namespace std;

namespace highScore
{
	struct Scores
	{
		int score;
		string player;
	};

	class HighScore
	{
	private:
		list<Scores> scorelist;
		//scores* scoreList;
		void reOrder();
	public:
		void addScore(string p,int score);
		list<Scores> getScoreList();
	};
}

#endif