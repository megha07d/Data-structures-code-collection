#include <iostream>
#include <math.h>
using namespace std;

int jumpSearch(int arr[], int n, int key)
{
    int prev, step;
    prev = 0;
    step = sqrt(n);

    // searching block - x may be in
    while (arr[min(n, step)] < key)
    {
        prev = step;
        step += sqrt(n);

        // it means "step" crossed n or equal to n
        //  and yet not found X in array
        //  so return -1
        if (prev >= n)
        {
            return -1;
        }
    }

    // while loop broken - block found to linear search
    // but u dont know whether step is in bounds of n

    // linear search of block found
    for (int i = prev; i < min(step, n); i++)
    {
        if(key == arr[i])
        {
            return i;
        }
    }

    //loop exited - no sign of X
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 6;

    int res = jumpSearch(arr, n, key);

    if (res != -1)
    {
        cout << "\nElement found @index - " << res << endl;
    }
    else
    {
        cout << "\nElement not found in array\n";
    }
    return 0;
}