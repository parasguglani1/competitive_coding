#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;i++)
#define rf(i,n) for(int i=n-1;i>-1;i--)

void useIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main(){
    useIO();
    int T;cin>>T;
    for(int test=1;test<=T;test++){

        //Code Here//
        int n;cin>>n;
        int a[n];
        int rem_1=0,rem_2=0,rem_0=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%3==1)rem_1++;
            else if(a[i]%3==2)rem_2++;
        }
        int score = min(rem_1,rem_2);
        int rem = max(rem_1,rem_2)-score;
        if(rem%3==0){
            score+=2*(rem/3);
        }
        else score=-1;
        cout<<score<<endl;
    }
return 0;
}