// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

#include <stdio.h>
#include <string.h>
int reverseNum(int x)
{
    string s = to_string(x);
    reverse(s.begin(), s.end());
    x = stoi(s);
    return x;
}

bool isMysteryNumber(int n)
{
    bool flag = false;
    for (int i = 1; i <= n / 2; i++)
    {
        int j = reverseNum(i);
        if (i + j == n)
        {

            return true;
        }
    }
    return false;
}
int is_special(char *input1[], int input2)
{

    int count = 0;
    for (int i = 0; i < input2; i++)
    {
        int x = stoi(input1[i]);

        count += isMysteryNumber(x);
    }

    return count;
}

int main()
{
    int input2;
    cin >> input2;
    // char *input1[input2];

    // for (int i = 0; i < input2; i++)
    // {
    //     cin >> input1[i];
    // }
    char *input1[2] = {"22", "121"};
    cout << is_special(input1, input2);

    return 0;
}
