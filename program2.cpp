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
    ptr = array;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *ptr;
        ptr++;
    } 
    cout << sum << endl;
    return 0;
}