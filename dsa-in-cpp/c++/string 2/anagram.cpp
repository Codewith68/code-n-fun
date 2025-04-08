#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter the string ";
    getline(cin,s);
   string t;
   cout<<"enter 2nd string ";
   getline(cin,t);
   sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    // cout<<s<<endl;
    // cout<<t;
    if(s==t) cout<<true;
    else cout<<false;
}