
//unknown ques
#include <iostream>
#include <unordered_map>
using namespace std;

int getSum(int arr[], int k, int n)
{

    unordered_map<int, int> hm;

    int ans = 0;
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        if (hm[arr[i]] == 0)
        {
            sum += arr[i];
        }

        hm[arr[i]] += 1;
    }

    for (int i = k; i < n; i++)
    {

        if (hm[arr[i - k]] == 1)
        {
            sum -= arr[i - k];
        }

        hm[arr[i - k]] -= 1;

        if (hm[arr[i]] == 0)
        {
            sum += arr[i];
        }
        hm[arr[i]] += 1;

        ans = max(ans, sum);
    }
    return ans;
}

int main()
{
    int N, K;
    cin >> N >> K;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cout << getSum(arr, K, N);

    return 0;
}
