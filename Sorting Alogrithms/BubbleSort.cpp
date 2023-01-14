#include <iostream>
using namespace std;

void bubbleSortRecursive(int arr[], int n)
{
    int flag = 1;
    int temp; // for swap

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            // swap
            temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;

            // change flag
            flag = 0;
        }
    }

    if (flag) // no swap occured - can be returned
    {
        return;
    }
    bubbleSortRecursive(arr, n);
}

void bubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        // last i elements are already sorted ; all max's go to the last for each i-iteration
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j] > arr[j - 1])
            {
                // swap
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    cout << "\n----------\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n----------\n";
}

int main()
{
    int arr[] = {2, 4, 1, 4, 8, 9, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    // bubbleSortRecursive(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);
}
