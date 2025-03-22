#include <iostream>
using namespace std;
#include "RPG.h"

void displayStats(RPG player1, RPG player2)
{
    cout << player1.getName() << " health : " << player1.getHealth() << endl;
    cout << player2.getName() << " health : " << player2.getHealth() << endl;
}
void gameLoop(RPG *player1, RPG *player2) 
{
    while (player1->isAlive() && player2->isAlive()) {
        displayStats(*player1, *player2);

        
        cout << player1->getName() << "'s turn\n";
        player1->useSkill(player2);
        cout << "--------------------------------\n";

        if (!player2->isAlive()) break; 

        displayStats(*player1, *player2);
        std::cout << player2->getName() << "'s turn\n";
        player2->useSkill(player1);
        cout << "--------------------------------\n";
    }
}

void displayEnd(RPG player1, RPG player2)
{
    if(player1.isAlive() == true)
    {
        cout << player1.getName() << " wins" << endl;
    }
    else
    {
        cout << player2.getName() << " wins" << endl;
    }
}
int main()
{

    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();

    gameLoop(&p1, &p2);
    displayEnd(p1, p2);



    return 0;




}