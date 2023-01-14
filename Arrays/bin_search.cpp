#include <iostream>
using namespace std;

int binary(int arr[], int k, int l, int h)
{
    while (l <= h)
    {

        int mid = (l + h) / 2;
        cout << "So, l is " << l << " and h is " << h << " also mid is "<<mid<<endl;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            l = mid + 1;
            return binary(arr, k, l, h);
        }
        else if (arr[mid] > k)
        {
            h = mid - 1;
            return binary(arr, k, l, h);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 14, 16, 19, 22, 23, 25, 26, 27, 29, 31, 34, 35, 36, 38, 39, 40, 45, 46, 48, 50, 51, 52, 57, 59, 60, 61, 63, 67, 68, 69, 71, 75, 76, 77, 79, 81, 82, 83, 86, 87, 88, 90, 92, 93, 94, 95, 96, 98, 99, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 93;
    cout << binary(arr, k, 0, n - 1) << endl;

    return 0;
}
