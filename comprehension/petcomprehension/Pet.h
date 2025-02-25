#include <iostream>
#include <string>
using namespace std;
#ifndef PET_H
#define PET_H
class Pet
{

    private:
        string name;
        int age;
        string owner;
        bool isHouseTrained;

    public:

        Pet();
        Pet(string name, int age , string owner , bool isHouseTrained);

        //accessor functions
        string getName();
        int getAge();
        string getOwner();
        bool getIsHouseTrained();


        //mutator functions
        void updateName(string name);
        void updateAge();
        void updateOwner(string adopter);
        void setHouseTrained();

        

};
#endif
