#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
    
    string s;
    cin>>s;
    int count=0;
    int counts=0;
    
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            count++;
        }
        else{
            counts++;
        }
    }
	 
	if(count>counts){
	    cout<<--counts<<endl;
	}  
	else{
	   cout<<--count<<endl; 
	}
	
	
	return 0;
}