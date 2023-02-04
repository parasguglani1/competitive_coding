#include <bits/stdc++.h>
using namespace std;
vector<string> implementAPI(vector<string> &logs)
{
    vector<string> res;
    map<string, pair<string, bool>> m;
    for (string &s : logs)
    {
        vector<string> t;
        stringstream str(s);
        string word;
        while (str >> word)
        {
            t.push_back(word);
        }
        string uu = t[1];
        string ff = t[0];
        if (ff == "register")
        {
            string ps = t[2];
            if (m.find(uu) != m.end())
            {
                res.push_back("Username already exists");
            }
            else
            {
                m[uu] = {ps, false};
                res.push_back("Registered Successfully");
            }
        }
        else if (ff == "login")
        {
            string ps = t[2];
            if (m.find(uu) == m.end())
            {
                res.push_back("Login Unsuccessful");
            }
            else if (m[uu].first != ps || m[uu].second == true)
            {
                res.push_back("Login Unsuccessful");
            }
            else if (m[uu].first == ps)
            {
                res.push_back("Logged In Successfully");
                m[uu].second = true;
            }
        }
        else if (ff == "logout")
        {
            if (m.find(uu) == m.end() || m[uu].second == false)
            {
                res.push_back("Logout Unsuccessful");
            }
            else
            {
                res.push_back("Logged Out Successfully");
                m[uu].second = false;
            }
        }
    }
    return res;
}