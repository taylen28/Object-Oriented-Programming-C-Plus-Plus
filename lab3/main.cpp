#include <iostream>
using namespace std;
#include "RPG.cpp"
int main()
{
    RPG constructorObject;
    RPG overloadObject("Taylen", 4, 5, 4,  "Fire");

    cout << overloadObject.isAlive() << endl;
    overloadObject.updateHealth(4);
    cout << overloadObject.getHealth();

    return 0;


}