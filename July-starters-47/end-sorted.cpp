#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;cin>>t;
	
	int n;
	
	int one_index,n_index;
	
	int a,b;
	
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        
	        if(arr[i]==1)
	        {
	            one_index = i; 
	        }
	        else if(arr[i]==n)
	        {
	            n_index = i;
	        }
	    }
	    
	        a = one_index;
	        b = n-1-n_index;
	        
	    //1 is on left of n
	    if(one_index < n_index)
	    {
	        cout<<a+b<<endl;
	    }
	    
	    //1 is on right of n
	    else
	    {
	        cout<<a+b-1<<endl; 
	    }
	    
	}
	return 0;
}
