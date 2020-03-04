#include "character.h"

class Knight : public Character //Knight class derived from Character class
{
    private:
        string weaponName; //attributes
        int weaponPower;
        int armor;
    public:
		//Access Roads
        Knight();
        Knight(string, string, int, int);
	
	void getAttack();
        void print();     
	void updateHP(int);
        void updateXP(int);
        void Heal();  
       


};
