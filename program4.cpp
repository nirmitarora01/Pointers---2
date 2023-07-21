#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }

    int sum = 0; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += *(*(array + i) + j);
            }
        }
    }
    cout << sum << endl;
    return 0;
}