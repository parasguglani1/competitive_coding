#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    int arr[n+1];
	    arr[0]=0;
	    int arr2[n+1];
	    arr2[0]=0;
	    for(int i=1;i<=n;i++){
	        cin>>arr[i];
	    }
	    for(int j=1;j<=n;j++){
	        cin>>arr2[j];
	    }
	     for(int j1=1;j1<=n;j1++){
	         if((arr[j1]-arr[j1-1]) >= arr2[j1]){
	             count=count+1;
	         }
	     }
	    cout<<count<<endl;
	}
	return 0;
}
