#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int A,B;
        cin>>A>>B;
        if(A>0 && B>0){
            cout<<"Solution";
        }
        else if(A==0 && B>0){
            cout<<"Liquid";
        }
        else if(B==0 && A>0){
            cout<<"Solid";
        }
        cout<<endl;
    }
}
