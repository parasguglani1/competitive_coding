#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
         long int n,k,Remainder,max_coins=0;
        cin>>n>>k;
        for(int i=2;i<=k;i++){
        Remainder=n%i;
        if(Remainder>max_coins)
        max_coins=Remainder;
    }
        cout<<max_coins<<endl;
    
    }

	return 0;
}
