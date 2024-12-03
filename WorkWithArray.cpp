
#include <iostream>
using std::cout;

int main()
{
    const int SIZE = 8;
    int mas[SIZE];
    // Fill array
    for (int i = 0; i < SIZE; i++) {
        mas[i] = SIZE - i;
    }
    // Show array elements
    for (int i = 0; i < SIZE; i++) {
        cout << mas[i] << ", ";
    }
    cout << (char)8 << (char)8;



}

