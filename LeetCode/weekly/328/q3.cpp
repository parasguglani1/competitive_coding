#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isItPossible(string word1, string word2)
    {
        map<char, int> mp1, mp2;
        for (int i = 0; i < word1.size(); i++)
        {
            mp1[word1[i]]++;
        }
        for (int i = 0; i < word2.size(); i++)
        {
            mp2[word2[i]]++;
        }
        int n1 = mp1.size();
        int n2 = mp2.size();
        bool replacement1 = false;
        bool replacement2 = false;
        for (auto it : mp1)
        {
            if (it.second > 1)
            {
                replacement1 = true;
            }
        }
        for (auto it : mp2)
        {
            if (it.second > 1)
            {
                replacement2 = true;
            }
        }
        /*  if (mp1.size() == mp2.size())
         {
             return true;
         } */
        if (abs(n1 - n2) > 2)
        {
            return false;
        }
        /*    else if (n1 - n2 == 2)
           {
               for (auto it : mp1)
               {
                   if (it.second == 1)
                   {
                       auto it2 = mp2.find(it.first);

                       if (it2 == mp2.end())
                       {
                           return true;
                       }

                   }
               }
               return false;
           } */
        /*  else if (n2 - n1 == 2)
         {
             for (auto it : mp2)
             {
                 if (it.second == 1 && mp1.find(it.first) != mp1.end())
                 {
                     return true;
                 }
             }
             return false;
         }
         else if (n1 > n2)
         {
             for (auto it : mp1)
             {
                 if (mp2.find(it.first) == mp2.end())
                 {
                     return false;
                 }
             }
             return true;
         }
         else
         {
             for (auto it : mp2)
             {
                 if (mp1.find(it.first) == mp1.end())
                 {
                     return false;
                 }
             }
             return true;
         } */

        vector<int> vec1(26, 0);
        vector<int> vec2(26, 0);
        for (int i = 0; i < word1.size(); i++)
        {
            vec1[word1[i] - 'a']++;
        }
        for (int i = 0; i < word2.size(); i++)
        {
            vec2[word2[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (vec1[i] > 0)
            {

                for (int j = 0; j < 26; j++)
                {
                    if (vec2[j] > 0)
                    {
                        vec1[i]--;
                        vec2[j]--;
                        vec1[j]++;
                        vec2[i]++;
                        int cnt1 = 0, cnt2 = 0;
                        for (int t = 0; t < 26; t++)
                        {
                            if (vec1[t] > 0)
                            {
                                cnt1++;
                                // cout << v1[k] << " ";
                            }
                            if (vec2[t] > 0)
                            {
                                // cout << v2[k] << " ";

                                cnt2++;
                            }
                            // cout << endl;
                        }
                        if (cnt1 == cnt2)
                        {
                            cout << cnt1 << " " << cnt2 << endl;
                            return true;
                        }
                        vec1[i]++;
                        vec2[j]++;
                        vec1[j]--;
                        vec2[i]--;
                    }
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    string word1 = "a";
    string word2 = "bb";
    cout << s.isItPossible(word1, word2) << endl;
    return 0;
}
