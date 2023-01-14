#include <iostream>
using namespace std;

int ternarySearch(int arr[], int l, int h, int key)
{
    if (l > h)
    {
        return -1;
    }
    int mid1, mid2;
    // l ! = h
    while (l <= h)
    {
        mid1 = l + (h - l) / 3;
        mid2 = h - (h - l) / 3;

        // check for mid1
        if (key == arr[mid1])
        {
            return mid1;
        }
        else if (key == arr[mid2])
        {
            return mid2;
        }
        else if (key < arr[mid1])
        {
            // return search for first part
            return ternarySearch(arr, l, mid1 - 1, key);
        }
        else if (key > arr[mid2])
        {
            // return serach for third part
            return ternarySearch(arr, mid2 + 1, h, key);
        }
        else
        {
            // return search for second part
            return ternarySearch(arr,mid1+1,mid2-1,key);
        }

        //No need to include return -1 here because if not found boundary condition is crossed
        // If in the beginning will take care of that
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key =0;

    int res = ternarySearch(arr, 0, 8, key);

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