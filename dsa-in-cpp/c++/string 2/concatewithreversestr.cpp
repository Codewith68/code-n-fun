#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a string ";
    getline(cin,s);
    string ss;
    ss=s;
    reverse(ss.begin(),ss.end());
    cout<<s+ss;
}