#include "character.h"

class Wizard : public Character
{
	private:
		string magic;

	public:
		Wizard();
		Wizard(string, string);

		void getAttack();
	        void print();     
		void updateHP(int);
	        void updateXP(int);
	        void Heal();  


};
