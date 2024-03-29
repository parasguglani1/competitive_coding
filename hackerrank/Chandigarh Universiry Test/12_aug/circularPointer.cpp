#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.size();
    int steps = 0;
    char pointer = 'A';
    for (int i = 0; i < n; i++)
    {
        char go = str[i];
        if (go == pointer)
        {
            continue;
        }
        char temppointer = pointer;

        int forward_distance =0;
        while (go != temppointer)
        {
            temppointer++;
            forward_distance++;

            if (temppointer == '[')
            {
                temppointer = 'A';
            }
        }
         temppointer = pointer;

        int backward_distance = 0;
        while (go != temppointer)
        {
            temppointer--;
            backward_distance++;

            if (temppointer == '@')
            {
                temppointer = 'Z';
            }
        }
        // cout<<forward_distance<<" "<<backward_distance<<endl;
        steps += min(forward_distance, backward_distance);
        // cout<<steps<<" " <<go<<" "<<pointer<<endl;
        pointer = go;
    }
    cout << steps << endl;
    /*
    short method
    int n=s.length();
    int ans=0,i;
    char cur='a';
    for (i = 0; i < n; ++i)
    {
        int diff = abs((int)(cur - s[i]));
        ans += min(diff, 26 - diff);
        cur = s[i];
    } */
    return 0;
}
