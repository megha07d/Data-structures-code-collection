#include <iostream>
using namespace std;

int search(int arr[], int n, int k)
{
    // code here
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            // found
            return i + 1;
        }
    }

    // not found
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 98;

    int result = search(arr, n, key);

    if (result != -1)
    {
        cout << "\nElement found @index-" << result << endl;
    }
    else
    {
        cout << "\nElement not found\n";
    }
}