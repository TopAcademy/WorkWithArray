
#include <iostream>
using std::cout;

// Print all array elements
// and nothing else
void show_array(int* m, int s)
{
    for (int i = 0; i < s; i++) {
        cout << m[i] << ", ";
    }
    cout << (char)8 << (char)8;
}


int main()
{
    const int SIZE = 8;
    int mas[SIZE];
    // Fill array
    for (int i = 0; i < SIZE; i++) {
        mas[i] = SIZE - i;
    }
    show_array(mas, SIZE);
    
}

