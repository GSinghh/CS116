

#include "player.h"

class Batter : public Player
{
	private:
		int Hits;
		int atBats;
	
	public:
		Batter();
		Batter(string, int, int, int);
		int getHits(){return Hits;}
		int getBats(){return atBats;}
		double getBattingAVG();
		



};
