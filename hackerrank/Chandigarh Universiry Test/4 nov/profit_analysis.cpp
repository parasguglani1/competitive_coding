#include <bits/stdc++.h>
using namespace std;
string ltrim(const string &);
string rtrim(const string &);
/*
 * Complete the 'getMaxProfit' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY pnl
 *  2. INTEGER k
 */
long getMaxProfit(vector<int> arr, int k)
{
    // A data analyst wants to analyze the performance of his investments in the HackShare stock. The PnL of his portfolio is represented by an array pnl where pnl[i] represents the profit earned in the ith month that can possibly be negative indicating a loss.
    // Given the pnl array of n months, find the maximum net profit(sum of profits) gained in any contiguous segment of months i.e.a subarray of months such that the number of months in the segment does not exceed a given integer k.
    // For example, if pnl = [1, 2, 3, 4, 5] and k = 3, then the maximum net profit is 12 because the subarray [3, 4, 5] has a sum of 12.
    // Given n = 6, pnl = [-3, 4, 3, -2, 2, 5] , k = 4.
    // We can select the subarray [3, -2, 2, 5] with a total profit 3 + (-2) + 2 + 5 = 8. Note that while the maximum net profit of a subarray can be 12 for the subarray [4, 3, -2, 2, 5] but the length of the subarray will exceed k = 4.
    // Hence, we report 8 as the answer.
    // Function Description
    // Complete the function getMaxProfit in the editor below.
    // getMaxProfit has the following parameter(s):
    // int pnl[n]: an array of integers representing the PnL of the portfolio
    // int k: the maximum number of months in a subarray
    int n = arr.size();
    int maxx_sum = 0;
    int max_sum = 0;
    while (k > 0)
    {

        for (int i = 0; i < k; i++)
            max_sum += arr[i];

        // Compute sums of remaining windows by
        // removing first element of previous
        // window and adding last element of
        // current window.
        int window_sum = max_sum;
        for (int i = k; i < n; i++)
        {
            window_sum += arr[i] - arr[i - k];
            max_sum = max(max_sum, window_sum);
        }
        k--;
        maxx_sum = max(maxx_sum, max_sum);
    }

    return max_sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    string pnl_count_temp;
    getline(cin, pnl_count_temp);
    int pnl_count = stoi(ltrim(rtrim(pnl_count_temp)));
    vector<int> pnl(pnl_count);
    for (int i = 0; i < pnl_count; i++)
    {
        string pnl_item_temp;
        getline(cin, pnl_item_temp);
        int pnl_item = stoi(ltrim(rtrim(pnl_item_temp)));
        pnl[i] = pnl_item;
    }
    string k_temp;
    getline(cin, k_temp);
    int k = stoi(ltrim(rtrim(k_temp)));
    long result = getMaxProfit(pnl, k);
    fout << result << "\n";
    fout.close();
    return 0;
}
string ltrim(const string &str)
{
    string s(str);
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
    return s;
}
string rtrim(const string &str)
{
    string s(str);
    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());
    return s;
}
