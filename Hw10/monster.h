class Monster
{
	private:
		string Name; //Monster class which has all the monster characteristics
		int armorClass;
		int HP;
		int level;
		int attack;
	public:
		Monster();
		Monster(string,int,int,int,int);
		
		string getName(){return Name;}
		int getArmorClass(){return armorClass;}
		int getHP(){return HP;}
		int getLevel(){return level;}
		int getAttack(){return attack;} 
	
		

};
