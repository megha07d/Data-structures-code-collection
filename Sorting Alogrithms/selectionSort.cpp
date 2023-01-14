#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n-----------------------\n";
}
void selectionSort(int arr[], int n)
{
    int min, index_min, temp;
    for (int i = 0; i < n; i++)
    {
        // assign min
        min = arr[i];
        index_min = i;

        // look for new-min to swap
        for (int j = i; j < n; j++)
        {

            if (arr[j] < min)
            {
                min = arr[j];
                index_min = j;
            }
        }
        // check if new-min is found
        if (i != index_min)
        {
            // thenn u swap
            swap(arr[i], arr[index_min]);
        }
    }
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    selectionSort(arr, n);

    printArray(arr, n);
}