/*
    Time Complexity: O(N*log(sumBoards))
    Space Complexity: O(1)

    where N denotes the total number of boards
    sumBoards denotes sum of length of all the boards.
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

long long minTime(vector<int> &board, int N, int A, int B)
{
    ll high = 0, low = 0;

    for (int i = 0; i < N; i++)
    {
        high += board[i];
    }

    while (low <= high)
    {
        ll mid = (low + high) / 2;

        bool isValid = 1;

        ll minPainters = 1, sum = 0;

        // Checking the required conditions
        for (int i = 0; i < N; i++)
        {
            sum += board[i];

            if (board[i] > mid)
            {
                isValid = 0;
                break;
            }
            if (sum > mid)
            {
                sum = board[i];

                minPainters++;
            }
        }

        if (minPainters <= A and isValid)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return (high + 1) * B;
}

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> board(N);

    for (int i = 0; i < N; i++)
    {
        cin >> board[i];
    }

    cout << minTime(board, N, A, B) << endl;

    return 0;
}
