

#include "player.h"


class Pitcher : public Player
{

	private:
		int innings;
		int runs;

	public:
		Pitcher();
		Pitcher(string, int, int, int);
		int getInnings(){return innings;}
		int getRuns(){return runs;}
		//create function to calculate earned runs from average
		double getERA();


};
