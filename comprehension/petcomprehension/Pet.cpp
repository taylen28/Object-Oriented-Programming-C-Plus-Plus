#include "Pet.h"

Pet::Pet() : name("Unknown"), age(0), owner("None"), isHouseTrained(false) {}

Pet::Pet(std::string name, int age, std::string owner, bool isHouseTrained)
    : name(name), age(age), owner(owner), isHouseTrained(isHouseTrained) {}
std::string Pet::getName(){
    return name;
}

int Pet::getAge(){
    return age;
}

std::string Pet::getOwner() {
    return owner;
}

bool Pet::getIsHouseTrained() {
    return isHouseTrained;
}

void Pet::updateName(std::string newName) {
    name = newName;
}

void Pet::updateAge() {
    age++;
}

void Pet::updateOwner(std::string adopter) {
    owner = adopter;
}

void Pet::setHouseTrained() {
    isHouseTrained = true;
}
