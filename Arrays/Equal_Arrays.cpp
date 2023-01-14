#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<long long> A, vector<long long> B, int N)
{
    // code here

    // sort things first
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != B[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<long long> A{2, 3, 4, 5, 6};
    vector<long long> B{2, 3, 4, 55, 6};

    cout << check(A, B, A.size());
}