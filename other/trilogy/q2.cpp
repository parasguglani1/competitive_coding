

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int solve(vector<int> &A, int B)
    {
        /* Mr Hola has an array A of size N and an integer B gifted to him by Mrs Hola. The Aesthetic Value of the array is defined as the
summation of |A[i] - A[i+B]| for all i from 1 to N-B.

You need to find the minimum Aesthetic value possible for any permutation of the array A. */

        //         int n = A.size();
        //         int ans = INT_MAX;
        //         sort(A.begin(), A.end());
        2 3 3  4 4 5
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int B;
    cin >> B;
    Solution obj;
    cout << obj.solve(A, B);
    return 0;
}
