#include "RPG.h"
#include <iostream>


RPG::RPG()
{
    name = "NPC";
    health = 100;
    strength = 50;
    defense = 50;
    type = "warror ";
    skills[0] =  "slash";
    skills[1] = "parry";
}
RPG::RPG(std::string name, int health, int strength, int defense , std::string type)
{
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this-> type = type;
     setSkills();
}

//setters
 void RPG::setSkills()
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
void RPG::printAction(string skill, RPG opponent) 
{
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName()
    .c_str());
}



 void RPG::attack(RPG* opponent)
{
    int damage = strength - opponent->defense;
    int newHealth = 0;
    if(damage < 0)
    {
        newHealth = opponent->health - 0;
    }
    else{
        newHealth = opponent->health - damage;
    }
    opponent->updateHealth(newHealth);
}


void RPG::useSkill(RPG* opponent)
{
        for (int i = 0; i < SKILL_SIZE; i++) {
            printf("Skill %i: %s\n", i, skills[i].c_str());
        }
    
       
        int chosen_skill_index;

        cout << "Choose a skill to use: Enter 0 or 1\n";
        cin >> chosen_skill_index;
    
        if (chosen_skill_index < 0 || chosen_skill_index >= SKILL_SIZE) {
            cout << "Invalid choice. Defaulting to skill 0.\n";
            chosen_skill_index = 0;
        }

        string chosen_skill = skills[chosen_skill_index];
        printAction(chosen_skill, *opponent);
        attack(opponent);
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

