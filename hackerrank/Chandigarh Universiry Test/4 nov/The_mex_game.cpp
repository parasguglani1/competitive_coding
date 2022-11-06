


// The MEX of an array is defined as the minimum non-negative element not present in the array. For example, MEX of [1, 0, 3, 2, 5] is 4 and MEX of [1, 2] is 0.




#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int getMaximumMEX(vector<int> arr)
{
    // A new game is launched in HackerGames where the player is given an array of n of integers arr and is allowed to reduce any element arr[i] to an integer x such that 0 ≤ x ≤ arr[i].

    // Find the maximum possible MEX of the array arr that can be achieved by performing the operation any number of times.

// Consider, n = 3, arr = [3, 2, 3].



// One optimal set of operations follows.

// Reduce arr[0] to 0
// Reduce arr[1] to 1
// Reduce arr[2] to 2


// Now, arr = [0, 1, 2], and its MEX is 3, which is the maximum possible MEX. Return 3.

    int mex = 0;
    int max = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    vector<int> count(max + 1, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        count[arr[i]]++;
    }
    for (int i = 0; i < count.size(); i++)
    {
        if (count[i] == 0)
        {
            mex = i;
            break;
        }
    }
    return mex;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++)
    {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    int result = getMaximumMEX(arr);

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
