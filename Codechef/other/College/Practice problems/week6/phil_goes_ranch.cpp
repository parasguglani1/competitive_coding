#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--){
        int N, X, pre = 0;
        cin >> N;
        stack<int> missed;
        vector<bool> available(N+1, false);
        while (N--){
            cin >> X;
            if (pre < X){
                cout << X << " ";
                while (++pre < X){
                    missed.push(pre);
                }
            }
            available[X] = true;
            while (!missed.empty() and available[missed.top()]){
                cout << missed.top() << " ";
                missed.pop();
            }
        }
        while (!missed.empty()){
            cout << missed.top() << " ";
            missed.pop();
        }
        cout << endl;
    }
    return 0;
}