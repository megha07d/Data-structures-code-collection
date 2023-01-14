#include <iostream>
using namespace std;

void printArray(int arr[], int count)
{
    cout << "\n--------------\n";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n--------------\n";
}

void zigZag(int arr[], int n)
{
    // code here
    int temp;
    int flag = 1;

    for (int i = 0; i < n - 1; i++)
    {
        // even index - should be less than right element
        if ((i % 2 == 0) && (arr[i] > arr[i + 1]))
        {
            // swap arr[i] & arr[i+1]
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;

            // change flag
            flag = 0;
        }

        // odd index - should be grater than right element
        else if ((i % 2 != 0) && (arr[i] < arr[i + 1]))
        {
            // swap arr[i-1] & arr[i]
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;

            // change flag
            flag = 0;
        }
    }
    printArray(arr, n);
}

int main()
{
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    zigZag(arr, n);
}