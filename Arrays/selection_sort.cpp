#include <iostream>
using namespace std;

int main()
{
    // sort array B in descending order - selection sort

    int max, pmax, tempy;

    int b[] = {6, 9, 5, 4};
    int n = sizeof(b) / sizeof(b[0]);

    // sort array in ascending order
    for (int i = 0; i < n; i++)
    {
        max = b[i];
        pmax = i;

        for (int j = i + 1; j < n; j++)
        {
            if (b[j] > max)
            {
                max = b[j];
                pmax = j;
            }
        }

        // swap
        cout << "\nMax is " << b[pmax] << endl;
        if (pmax != i)
        {
            cout << "\nSwapping " << b[i] << " and " << b[pmax] << endl;
            tempy = b[i];
            b[i] = b[pmax];
            b[pmax] = tempy;
        }
    }

    for (int k = 0; k < n; k++)
    {
        cout << b[k] << " ";
    }

    return 0;
}