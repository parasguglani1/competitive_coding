#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int A,B,C,D,Total_bags=0;
        cin>>A>>B>>C>>D;
        if(A+B+C<=D){
            Total_bags++ ;
            cout<< Total_bags << endl ;
        }
        else if(C+B<=D){
            Total_bags = 2 ;
            cout<< Total_bags << endl ;
        }
        else{
            Total_bags++ ;
            if(A+B<=D){
                Total_bags++ ;
                cout<< Total_bags << endl ;
            }
            else{
                Total_bags+=2 ;
                cout<< Total_bags << endl ;
            }
            
        }
        
    }   
}
