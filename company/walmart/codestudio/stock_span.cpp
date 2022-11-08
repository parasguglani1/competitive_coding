#include <bits/stdc++.h>
using namespace std;
//O(n2)
vector<int> findSpans(vector<int> &price)
{

    int n = price.size();
    vector<int> ans;
    ans.push_back(1);
    for (int i = 1; i < n; i++)
    {
        int count = 0;
        for (int j = i; j >= 0; j--)
        {
            if (price[j] <= price[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        ans.push_back(count);
    }
    return ans;
    // Write your code here.
}
//O(n)



vector<int> findSpans(vector<int> &price)
{

    int n = price.size();
    vector<int> ans;
    stack<int> s;
    s.push(0);
    ans.push_back(1);
    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && price[s.top()] <= price[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans.push_back(i + 1);
        }
        else
        {
            ans.push_back(i - s.top());
        }
        s.push(i);
    }
    return ans;
}






int main()
{
    vector<int> price = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = findSpans(price);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
