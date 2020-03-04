#include <string>

#include "enemy.h" 

class Boss : public Enemy
{
	private:
		//int damageMultiplier;
		string weapon;
	public:
		Boss();
		Boss(int, string);
		void Taunt(); //Override the base class function
		//void Attack(); //Override the base class function
		//void SpecialAttack();
		void setWeapon(string);
		string getWeapon(){return weapon;}
};
