// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C
void sort012(int a[], int n)
{
    int count_z=0;
    int count_o=0;
    int count_t=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count_z++;
        }
        else if(a[i]==1)
        {
            count_o++;
        }
        else if(a[i]==2)
        {
            count_t++;
        }
        else
        {
            return;
        }
    }
    cout<<"Hello";
    for(int i=0;i<count_z;i++)
    {
        a[i]=0;
    }
    for(int i=count_z;i<count_o;i++)
    {
        a[i]=1;
    }
    for(int i=count_o;i<count_t;i++)
    {
        a[i]=2;
    }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends