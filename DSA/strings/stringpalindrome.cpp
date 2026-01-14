#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string s;
   cout<<"Enter the string you want to check for plaindrome";
   getline(cin,s);
   int j=s.length()-1;

   bool flag=true;
   for(int i=0;i<s.length()/2;i++){
      if(s[i]!=s[j]){
         flag=false;
         break;
      }
      j--;
   }
   if(flag==true) cout<<"palindrome";
   else cout<<"not a palindrome";
}