#include <iostream>
using namespace std;

int main() {
  // your code goes here
  long long t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      if(n%2!=0)
      {
          cout<<-1<<endl;
      }
      else
      {
          for(int i=1;i<=n/2;i++)
          {
              cout<<0;
          }
          for(int i=(n/2)+1;i<=n;i++)
          {
              cout<<1;
          }
          cout<<endl;
      }
  }
  return 0;
}