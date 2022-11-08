#include <bits/stdc++.h>
using namespace std;
// if condition is last character of strings are same
int stringKhel(vector<string> &arr, int n)
{

    int rcount = 0, rlength = 0, lcount = 0, llength = 0;
    for (int i = 0; i < n; i++)
    {
        int nn = arr[i].size();
        if (arr[i][nn - 1] == 'R')
        {
            rcount++;
            rlength += nn;
        }
        else
        {
            lcount++;
            llength += nn;
        }
    }
    return max(rlength, llength);
    // Write your code here.
}

int stringKhel(vector<string> &arr, int n)
{

    int rcount = 0, rlength = 0, lcount = 0, llength = 0;
    for (int i = 0; i < n; i++)
    {
        string s = arr[i];
        int nn = s.size();
        if (s[nn - 1] == 'R')
        {
            rcount++;
            rlength += nn;
        }
        else
        {
            lcount++;
            llength += nn;
        }
    }
    return max(rlength, llength);
    // Write your code here.
}
