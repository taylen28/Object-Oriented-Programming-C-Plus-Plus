#include <iostream>
#include <string>
using namespace std;
#ifndef PET_H
#define PET_H
class Pet
{

    public:

        Pet();
        Pet(string, int , string , bool);

        //accessor functions
        string getName();
        int getAge();
        string getOwner();
        string getisHousedTrained();


        //mutator functions
        void updateName(string name);
        void updateAge();
        void updateOwner(string adopter);
        void setHousedTrained();





    private:
        string name;
        int age;
        string owner;
        bool isHousedTrained;

        

};
#endif
