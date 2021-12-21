#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define print cout
#define fo(i, j, k, in) for (int i=j ; i<k ; i+=in)

void solution() {
 int r, g, b, p=0, q=0;
 string s="";
 cin >> r >> g >> b;
 if (b<=1){
  fo (i, 0, r, 1) print<<"R";
  fo (i, 0, g, 1) print<<"G";
  fo (i, 0, b, 1) print<<"B";
  print<<endl;
  fo (i, 0, r+g+b-1, 1) print << i+1 << " "<< i+2 << endl;
 }
 else{
  s += "BRGB";
  b-=2;
  r--;
  g--;
  while (b && g){
   s+="BG";
   b--;g--;
   p++;
  }
  while (b && r){
   s+="BR";
   b--;r--;
   q++;
  }
  if (b){
   print<<"-1\n";
   return;
  }
  fo(i, 0, r, 1) s+="R";
  fo(i, 0, g, 1) s+="G";
  print<<s<<endl;
  print<<1<<" "<<2<<endl;
  print<<2<<" "<<3<<endl;
  print<<3<<" "<<4<<endl;
  int coooo=5;
  fo(i, 0, p, 1){
   print << coooo << " " << coooo+1<<endl;
   print << 2 << " " << coooo+1<<endl;
   coooo += 2;
  }
  fo(i, 0, q, 1){
   print << coooo << " " << coooo+1<<endl;
   print << 3 << " " << coooo+1<<endl;
   coooo += 2;
  }
  fo(i, 0, r+g, 1) {
   print << 1 << " " << coooo<<endl;
   coooo++;
  }
 }
}

/* ========== YOUR CODE HERE ========= */

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), print.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 #endif

    int t = 1;
    cin>>t;
    while(t--) {

        
        solution();
    }

    return 0;
}