


// string Pet::getName()
// {
//     return this->name;
// }

// int Pet::getAge()
// {
//     return this->age;
// }

// string Pet::getOwner()
// {
//     return this->owner;
// }

// bool Pet::getisHousedTrained()
// {
//     return this->isHousedTrained;
// }

// void Pet::updateName(string name)
// {
//     this->name = name;
// }

// void Pet::updateAge(int newAge)
// {
//     this->age = newAge;
// }

// void Pet::updateOwner(string adopter)
// {
//     this->owner = adopter;
// }

// void Pet::setHousedTrained(bool houseTrained)
// {
//     this->isHousedTrained = houseTrained;
// }
// Pet::~Pet(){}

#include "Pet.h"

// Default constructor
Pet::Pet() : name("Unknown"), age(0), owner("None"), isHouseTrained(false) {}

// Parameterized constructor
Pet::Pet(std::string name, int age, std::string owner, bool isHouseTrained)
    : name(name), age(age), owner(owner), isHouseTrained(isHouseTrained) {}

// Getters
std::string Pet::getName() const {
    return name;
}

int Pet::getAge() const {
    return age;
}

std::string Pet::getOwner() const {
    return owner;
}

bool Pet::getIsHouseTrained() const {
    return isHouseTrained;
}

// Updaters
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
