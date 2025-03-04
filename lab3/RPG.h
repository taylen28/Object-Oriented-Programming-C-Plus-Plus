#ifndef _RPG_
#define _RPG_
#include <iostream>
using namespace std;

const int SKILL_SIZE = 2;
class RPG
{
    public:
        RPG();
        RPG(string name, int health, int strength, int defense , string type);
        
        //setters
        // void setSkills();
        void printAction(string action, RPG rpg) ;
        void updateHealth( int new_health);
        // void attack(RPG* attack);
        void useSkill(RPG* skill);

        //getters
        bool isAlive() const;
        string getName() const;
        int getHealth() const;
        int getStrength() const;
        int getDefense() const;

    private:
        string name;
        int health;
        int strength;
        int defense;
        string type;
        string skills[SKILL_SIZE];

};
#endif