// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;
bool binarySearch(vector<int> arr, int l, int h, int key);


bool binarySearch(vector<int> arr, int l, int h, int key)
{
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
    
        if(arr[mid]==key)
        {
            return true;
        }
        else if(arr[mid] < key)
        {
            binarySearch(arr,mid+1,h,key);
        }
        else if(arr[mid]>key)
        {
            binarySearch(arr,l,mid-1,key);
        }
    }
    
    return false;
}

string isSubset(int a1[], int a2[], int n, int m) 
{
    int ans,key;
    string yes ="YES";
    string no = "NO";
    
    vector<int> A1(a1,a1+n);
    vector<int> A2(a2,a2+m);
    
    //sort
    sort(A1.begin(),A1.end());
    sort(A2.begin(),A2.end());
    
    
    if(n > m)
    {
        // a1 is bigger - search for a2 elements in a1
        for(int i=0;i<m;i++)
        {
            key = A2[i];
            //search whether if a2[m] is in a1[n]
ans = binarySearch(A1,0,n-1,key);
           
            if(!ans)
            {
                return no;
            }
            
            //if not return NO
        }
        return yes;
    }
    else if(n < m)
    {
        // a2 is bigger - search for a1 elements in a2
        for(int i=0;i<m;i++)
        {
            key = A1[i];
            //search whether if a2[m] is in a1[n]
            ans = binarySearch(A2,0,m-1,key);
           
            if(!ans)
            {
                return no;
            }
            
            //if not return NO
        }
        return yes;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends
