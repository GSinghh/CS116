#include "character.h"

class Novice : public Character
{
    private:
        int luck; //value for luck is created in main
       
    public:
        Novice();
        Novice(string, int);
        void setLuck(int);
        int getLuck(){return luck;}
       
        void getAttack();
        void print();     
	void updateHP(int);
        void updateXP(int);
        void Heal();  
       
};

