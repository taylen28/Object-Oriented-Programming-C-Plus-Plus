#include "Pet.h"
#include <iostream>

using namespace std;

int main()
{
    Pet constructorPet;
    Pet overLoadPet("dawg", 5, "Taylen", true);
    cout << "Constructor Name: " << constructorPet.getName() << endl;
    cout << "Constructor Age: " << constructorPet.getAge() << endl;
    cout << "Constructor Owner: " << constructorPet.getOwner() << endl;
    cout << "Constructor Trained??: " << constructorPet.getIsHouseTrained() << endl;
    cout << endl;
    cout << "Overload Name: " << overLoadPet.getName() << endl;
    cout << "Overload Age: " << overLoadPet.getAge() << endl;
    cout << "Overload Owner: " << overLoadPet.getOwner() << endl;
    cout << "Overload Trained??: " << overLoadPet.getIsHouseTrained() << endl;

    constructorPet.updateName(overLoadPet.getName());
    constructorPet.updateAge();
    constructorPet.updateOwner(overLoadPet.getOwner());
    constructorPet.setHouseTrained();

    cout<< endl;
    cout << "Constructor Pet Changes:" << endl;
    cout << "constructor pet update name: " << constructorPet.getName() << endl;
    cout << "constrcutor pet update age " << constructorPet.getAge() << endl;
    cout << "constructor pet update owner " << constructorPet.getOwner() << endl;
    cout << "constructor pet set housed trained " << constructorPet.getIsHouseTrained() << endl;



    return 0;

}
