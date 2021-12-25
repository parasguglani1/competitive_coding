#include <bits/stdc++.h>

using namespace std;



int main() {

    string str;

    cin>>str;

    std::vector<char> ch;

    for(int i = 0;i<str.size();i++)

    {

        ch.push_back(str[i]);

    }

   int test;

   cin>>test;

   string str1;

   while(test--)

   {

       

       cin>>str1;

       int found=0;

       for(int i = 0;i<str1.size();i++)

       {

           if(find(ch.begin(),ch.end(),str1[i]) == ch.end())

           {

               found=1;

               break;

           }

       }

       

       if(found)

       {

           std::cout << "No" << std::endl;

       }

       else{

           std::cout << "Yes" << std::endl;

       }

       

   }

}