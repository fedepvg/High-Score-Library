#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <iostream>
#include <list>
using namespace std;

namespace highScore
{
	struct Scores
	{
		float score;
		string player;
	};

	class HighScore
	{
	private:
		Scores* scoreList;
		int length;
		void reOrderFrom(Scores* list, int pos, Scores newScore);
	public:
		HighScore();	//set length in 10
		HighScore(int l);
		~HighScore();
		void addScore(float score, string name);
		Scores getScore(int pos);	//returns the score of the determinated position(from 0, not 1)
	};
}

#endif