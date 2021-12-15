#include<queue>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T;
    string S;
    cin >> T;

    while(T--)
    {
        int N, D, cnt = 0;
        cin >> N >> S;
        
        cin >> D;
        vector<int> v(D), marker(N, 0);
        for(auto &n : v) cin >> n;

        queue<int>q;
        for(int i=0; i<N; ++i)
        {
            if(S[i] == '0') continue;
            q.push(i);
            ++cnt;
        }

        for(int i=0; i<D; ++i)
        {
            marker[v[i]-1] = -1;
            marker[v[i]-2] = 1;

            int len = q.size();
            for(int i=0; i<len; ++i){
                int k = q.front();
                q.pop();

                if(k > 0)
                {
                    if(marker[k-1] != 1 && S[k-1] != '1')
                    {
                        q.push(k-1);
                        ++cnt;
                        S[k-1] = '1';
                    }
                }
                if(k+1 < N)
                {
                    if(marker[k+1] != -1 && S[k+1] != '1')
                    {
                        q.push(k+1);
                        ++cnt;
                        S[k+1] = '1';
                    }
                }
            }
        }
        cout << cnt << '\n';
    }
}