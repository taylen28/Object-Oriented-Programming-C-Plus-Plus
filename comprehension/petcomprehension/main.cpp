#include "Pet.h"
#include <iostream>

using namespace std;

int main()
{
    Pet myPet("Buddy", 3, "Alice", false);
    cout << myPet.getIsHouseTrained();
}