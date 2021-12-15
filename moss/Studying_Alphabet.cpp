#include<bits/stdc++.h> 
using namespace std;
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        int count=0;
        for(int i=0;i<a.length();i++){
            for(int j=0;j<s.length();j++){
                if(a.at(i)==s.at(j)){
                    count++;
                }
            }
        }
        if(count==a.length()){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
    }