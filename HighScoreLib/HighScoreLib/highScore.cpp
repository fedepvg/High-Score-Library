#include "highScore.h"

namespace highScore
{
	HighScore::HighScore()
	{
		length = 10;
		scoreList = new Scores[length];
		for (int i = 0; i < length; i++)
		{
			scoreList[i].player=" ";
			scoreList[i].score = 0.f;
		}
	}

	HighScore::HighScore(int l)
	{
		length = l;
		scoreList = new Scores[length];
		for (int i = 0; i < length; i++)
		{
			scoreList[i].player = " ";
			scoreList[i].score = 0.f;
		}
	}

	HighScore::~HighScore()
	{
		delete[] scoreList;
	}

	void HighScore::addScore(float score, string name)
	{
		Scores newScore;
		newScore.score = score;
		newScore.player = name;
		for (int i = 0; i < length; i++)
		{
			if (scoreList[i].score < newScore.score || scoreList[i].score==NULL)
			{
				reOrderFrom(scoreList,i,newScore);
				return;
			}
		}
	}

	Scores HighScore::getScore(int pos)
	{
		return scoreList[pos];
	}

	void HighScore::reOrderFrom(Scores* list,int pos,Scores newScore)
	{
		Scores auxPrevScore;
		Scores auxNextScore;
		for (int i = pos; i < length; i++)
		{
			if (i == pos)
			{
				auxPrevScore = list[i];
				list[i] = newScore;
			}
			else
			{
				auxNextScore = list[i];
				list[i] = auxPrevScore;
				auxPrevScore = auxNextScore;
			}
		}
	}
}