#include <iostream>
using namespace std;
int test , n;
string israinbow(int Rainbow_arr[], int n){
    int i = 0 , j = n - 1;
    if(Rainbow_arr[0] != 1 || !(Rainbow_arr[n/2] == 7 || Rainbow_arr[n/2 + 1]==7)){
        return ("no");
    }
    while(i<j){
        if(Rainbow_arr[i] != Rainbow_arr[j] || !(Rainbow_arr[i] <= 7&& Rainbow_arr[i] >= 1) || !(Rainbow_arr[i] <= Rainbow_arr[i+1])){
            return ("no");
        }
       if(Rainbow_arr[i] < Rainbow_arr[i+1]){
           if(Rainbow_arr[i+1]!=Rainbow_arr[i]+1){
               return "no";
           }
       }
        i++;
        j--;
    }
   return("yes");
}

int main(){
    
    cin >> test;
    while(test--){
        cin >> n;
        int Rainbow_arr[1000];
        for(int i = 0; i < n ; i++){
            cin >> Rainbow_arr[i];
        }
       cout<< israinbow(Rainbow_arr,n)<<endl;
    }
    return 0;
}