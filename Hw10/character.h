#pragma once
class Character
{
    protected:
        string Name; //attributes
        int healthPoints;
        int XP;
        int pointsForNextLevel;
        int maxHP;

    public:
        Character();
        Character(string);//constructors
   
        string getName(){return Name;}
        int getHealthPoints() {return healthPoints;}
        int getXP(){return XP;}
        int getPoints(){return pointsForNextLevel;}

       
        virtual void print() = 0; //virtual functions
        virtual void getAttack() = 0;
        virtual void updateHP(int) = 0;
        virtual void updateXP(int) = 0;
        virtual void Heal() = 0;
};
