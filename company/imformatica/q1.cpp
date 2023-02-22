#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "10\n2";
    // split str into two integers supported by endl
    // cin >> str;
    int a = 0, b = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '\n')
        {
            a = stoi(str.substr(0, i));
            b = stoi(str.substr(i + 1, str.size() - i - 1));
            break;
        }
    }
    string ans = "";
    string a1 = to_string((a + b) / 2);
    string a2 = to_string((a - b) / 2);
    ans = a1 + a2;
    cout << ans << endl;
    return 0;
}