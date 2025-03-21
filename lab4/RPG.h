#ifndef RPG_H
#define RPG_H
#include <iostream>
#include <string>
using namespace std;
const int SKILL_SIZE = 2;
class RPG
{
    public:
        RPG();
        RPG(std::string name, int health, int strength, int defense , std::string type);
        
        //setters
        void setSkills();
        void printAction(string action, RPG rpg) ;
        void updateHealth( int new_health);
        void attack(RPG* opponent);
        void useSkill(RPG* opponent);

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