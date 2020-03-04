#pragma once
class Enemy
{
	protected:
		int damage;
	public:
		Enemy() { damage = 10; }
		Enemy(int); 
		void setDamage(int);
		int getDamage() { return damage; }
		virtual void Taunt();
		void Attack();
};
