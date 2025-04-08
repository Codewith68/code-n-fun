#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<climits>
using namespace std;
int main(){
   string s;
   cout<<"enter the first string";
   getline(cin,s);
   string t;
   cout<<"enter the second string ";
   getline(cin,t);
   sort(s.begin(),s.end());
   sort(t.begin(),t.end());
   bool flag;
   if(s==t) cout<<true;
   else cout<<false;
}
