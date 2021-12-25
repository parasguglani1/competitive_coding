#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,K;
    cin>>N>>K;
    string x;
    cin>>x;
    int ans = 0, pos=1,pos2 = 0;
    queue<int> qm,qi;
    bool flag = false;
    for(auto c:x){
        switch(c){
            case 'X':
                while(!qm.empty()) qm.pop();
                while(!qi.empty()) qi.pop();
                break;
            case ':':
                pos++;
                break;
            case 'I':
                flag = false;
                while(!qm.empty()){
                    pos2 = qm.front();
                    qm.pop();
                    if((K+1-abs(pos-pos2))>0){
                        flag = true;
                        ans++;
                        break;
                    }
                }
                if(!flag){
                    qi.push(pos);
                }
                break;
            case 'M':
                flag = false;
                while(!qi.empty()){
                    pos2 = qi.front();
                    qi.pop();
                    if((K+1-abs(pos-pos2))>0){
                        flag = true;
                        ans++;
                        break;
                    }
                }
                if(!flag){
                    qm.push(pos);
                }
                break;
            
        }    
        pos++;
    }
    cout<<ans<<endl;
    
    
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
