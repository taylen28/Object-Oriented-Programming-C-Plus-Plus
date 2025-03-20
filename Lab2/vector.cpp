#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Prints the elements in the vector and their memory locations
 * 
 * @param v - vector of integers
 */
void printMemVec(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        cout << "Element: " << v[i] << " | Address: " << &v[i] << endl;
    }
    cout << endl;
}

/**
 * @brief Increments each element of the vector by 10
 * 
 * @param v - vector of integers (passed by reference)
 */
void incVecBy10(vector<int>& v) {
    for (size_t i = 0; i < v.size(); ++i) 
    {
        v[i] += 10;
    }
}

int main() {
    const int SIZE = 5;
    vector<int> vec;
    for (int i = 0; i < SIZE; ++i) {
        vec.push_back(100 + i);
    }

    cout << "Before Increment-------------\n";
    printMemVec(vec);

    // Increment each element by 10
    incVecBy10(vec);

    cout << "After Increment-------------\n";
    printMemVec(vec);

    // Remove last element of vec
    vec.pop_back();

    cout << "After Pop-------------\n";
    printMemVec(vec);

    // Append 101 and 102 at the end of vec
    vec.push_back(101);
    vec.push_back(102);

    cout << "After Push-------------\n";
    printMemVec(vec);

    return 0;
}