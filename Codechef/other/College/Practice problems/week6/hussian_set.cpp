#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

	int n, m;
	cin >> n >> m;
	ll arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int j = 0;
	sort(arr, arr + n);
	queue<ll> rev;

	for (int i = 0; i < m; i++)
	{
		int q;
		cin >> q;

		ll integer;

		while (j < q)
		{
			if (n > 0 && (rev.empty() || rev.front() < arr[n - 1]))
			{
				integer = arr[n - 1];
				n--;
			}
			else
			{
				integer = rev.front();
				rev.pop();
			}

			integer / 2 > 0 ? rev.push(integer / 2) : void();
			j++;
		}
		cout << integer << endl;
	}
}
