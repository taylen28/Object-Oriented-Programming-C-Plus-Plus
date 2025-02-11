#include <iostream>

 using namespace std;
 void printMemVec(const vector <int> v, int size);
 void incVecBy10(vector <int> v, int size);

int main()
 {
    cout << printMemVec({0,1,2}, 3);
    return 0;
 }


 void printMemVec(const vector <int> v, int size)
 {
    printf("Vector– Each int is worth %lu bytes\n", sizeof(v.at(0)));
    for(size_t i = 0; i < size; ++i)
    {
         printf("Value: %i at Memory Location: %p\n", v[0] , v[0] + i);
    }
    return 0;
 }