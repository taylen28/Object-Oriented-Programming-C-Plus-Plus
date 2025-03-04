#include "RPG.h"
#include <iostream>

using namespace std;

RPG::RPG()
{
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = "warror ";
    skills[0] =  "slash";
    skills[1] = "parry";
}
RPG::RPG(string name, int health, int strength, int defense , string type)
{
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this-> type = type;
    // setSkills();
}

//setters
// void RPG::setSkills(){

// }
void RPG::printAction(string skill, RPG opponent) 
{
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName()
    .c_str());
}


// void RPG::attack(RPG* attack){

// }
void RPG::useSkill(RPG* skill)
{
    if (type == "mage") {
        skills[0] = "fire";
        skills[1] = "thunder";
        } 
        else if (type == "thief") {
            skills[0] = "pilfer";
            skills[1] = "jab";
        } else if (type == "archer") {
            skills[0] = "parry";
            skills[1] = "crossbow_attack";
        } else {
            skills[0] = "slash";
            skills[1] = "parry";
        }
    }
void RPG::updateHealth(int new_health)
{
/**
* @brief updates health into new_health
*   
* @param new_health
*/
    health = new_health;

}bool RPG::isAlive() const
{
    /**
    * @brief returns whether health is greater than 0
    *
    * @return true
    * @return false
    */
    if(health > 0) {
        return true;
    } else {
        return false;
    }

}
string RPG::getName() const{
    return name;
}
int RPG::getHealth() const{
    return health;
}
int RPG::getStrength() const{
    return strength;
}
int RPG::getDefense() const{
    return defense;
}