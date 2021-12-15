#include"bits/stdc++.h"
using namespace std;
int main() {
      int T;
      cin >> T;
      while (T--) {
            int n;
            cin >> n;
            vector<long long>arr(n + 1, 0);
            for (int i = 1; i <= n; i++) {
                  cin >> arr[i];

            }
            for (int i = 1; i <= n; i++) {
                  if (i % 2 == 0) {
                        arr[i] = -arr[i];
                  }
            }
            for (int i = 1; i <= n; i++) {
                  arr[i] = arr[i - 1] + arr[i];

            }
            if (n % 2 == 0) {
                  long long  v = -1e17;
                  for (int i = 1; i <= n; i++) {
                        if (i % 2 == 0) {
                              v = max(v,  2 * arr[i] - arr[n]);
                        }
                        else {
                              v = max(v, -arr[n] + 2 * arr[i - 1]);
                        }
                  }
                  cout << v << endl;

            }
            else {
                  long long  v = -1e17;
                  for (int i = 1; i <= n; i++) {
                        if (i % 2 == 1) {
                              v = max(v, -1 * (arr[n] - arr[i]) + arr[i]);
                        }
                        else {
                              v = max(v, -(arr[n] - arr[i - 1]) + arr[i - 1]);
                        }
                  }
                  cout << v << endl;
            }
      }
}