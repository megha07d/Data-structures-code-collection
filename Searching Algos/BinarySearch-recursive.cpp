#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    int mid;
    if (low > high)
    {
        // reached a point where element canot be found - still looking
        return -1;
    }

    else
    {
        mid = low + (high - low) / 2;
        // why not (low + high)/2  ? ans : sometimes the sum of two may become big and cant fit the int data - which produces negatives and gives errors

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            return binarySearch(arr, low, mid - 1, key);
        }

        else // the only remaining possibility - arr[mid]<key
        {
            return binarySearch(arr, mid + 1, high, key);
        }
    }
}

int main()
{
    int arr[] = {20, 30, 40, 50, 100, 120, 159};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 120;

    int low = 0;
    int high = n;
    int res = binarySearch(arr, low, high, key);

   /*  if (res != -1)
    {
        cout << "\nElement found @index-" << res << endl;
    }
    else
        cout << "\nElement not found\n"; */
        (res==-1)?cout<<"\nElement not found\n":cout << "\nElement found @index-" << res << endl;
}