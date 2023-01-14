// given N , is 2x + 7y possibel : x>=0 & y>=0

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n;

    while (t--)
    {
        cin >> n;

        if(n==1 || n==3 || n==5)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
    }

    return 0;
}