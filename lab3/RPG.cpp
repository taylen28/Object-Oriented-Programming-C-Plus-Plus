#include "RPG.h"
#include <iostream>

using namespace std;

RPG::RPG()
{
    name = "";
    health = 10;
    strength = 6;
    defense = 0;
    type = "";
}
RPG::RPG(string name, int health, int strength, int defense , string type)
{
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this-> type = type;
}

//setters
void RPG::setSkills(){}
void RPG::printAction(string action, RPG rpg){}
void RPG::updateHealth(int health){}
void RPG::attack(RPG* attack){}
void RPG::useSkill(RPG* skill){}

//getters
bool RPG::isAlive() const{}
string RPG::getName() const{}
int RPG::getHealth() const{}
int RPG::getStrength() const{}
int RPG::getDefense() const{}