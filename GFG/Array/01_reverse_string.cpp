// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord5(string str2);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord5(s) << endl;
	}
	return 0;
}
//  string temp;
// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
   int start=0;
   int end=str.length()-1;
    int temp; 
    while (start < end)
    {
        temp = str[start]; 
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }  
    
  
  return str;
}

string reverseWord2(string str){
    reverse(str.begin(),str.end());
    return str;
}

string reverseWord3(string str){
    int i=0,j=str.length()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
}

string reverseWord4(string str){
    int i=0,j=str.length()-1;
    while(i<j){
        str[i]=str[i]+str[j];
        str[j]=str[i]-str[j];
        str[i]=str[i]-str[j];
        i++;
        j--;
    }
    return str;
}


string reverseWord5(string str2){
    int n=str2.length();
    string temp;
    temp.resize(n);
    
  
    // cout<<" n is "<<n<<endl;
  for (int i = 0; i < n; i++)
  {   
    temp[n-i-1]=str2[i];
    //   cout<<str2[i]<<" "<<temp[n-i-1]<<endl;
  }
//   cout<<temp[0];
// temp ="abcdw";
//   temp[n]='\0';
//   for (int i = 0; i < n; i++)
//     {
//         str2[i]=temp[i];
//     }
//  cout<<temp<<" ";
//  temp= "qwertyuiopa";
//  temp[10]='t';
// temp="gh";
    // cout<<temp<< " ";
// return str2;

    return temp;
}


//using stack
void stackreverse(string &str)
{
   stack<char> st;
   for (int i=0; i<str.length(); i++)
       st.push(str[i]);
 
   for (int i=0; i<str.length(); i++) {
       str[i] = st.top();
       st.pop();
   }      
}


void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

void recursiveReverse(string &str, int i = 0)
{
    int n = str.length();
    if (i == n / 2)
        return;
    swap(str[i], str[n - i - 1]);
    recursiveReverse(str, i + 1);
}