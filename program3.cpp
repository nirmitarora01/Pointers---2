#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int array[size];

    int *ptr = array;
    for (int i = 0; i < size; i++)
    {
        cin >> *ptr;
        ptr++;
    }
    
    ptr = &array[size - 1];
    for (int i = size - 1; i >= 0; i--)
    {
        cout << *ptr << " ";
        ptr--;
    }
    return 0;
}