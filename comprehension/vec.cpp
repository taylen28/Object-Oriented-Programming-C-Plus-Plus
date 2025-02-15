#include <iostream>
#include <string>

using namespace std;

void printMem(int * arr, int size) { // void printMem(int arr[], int size )
    printf("Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i < size; i++) {
        printf("Value :%i at Memory Location: %p\n", arr[i], arr + i);
    }
}

// void printMem(int arr[] a)

int main()
{
    const size_t arraySize = 5;
    int arrayA[arraySize] = {1, 2, 3, 4, 5};
    printMem(arrayA, 3);
    arrayA[5] = 500;
    cout << arrayA[5];
    return 0;

}