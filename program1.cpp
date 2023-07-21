#include <iostream>
using namespace std;

int main()
{
    int size, k;
    cin >> size >> k;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << *(array + (k - 1)) << endl;
    return 0;
}