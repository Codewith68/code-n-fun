#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a string ";
    getline(cin,s);
    int x=0;
    for(int i=0;i<=s.size()-1;i++){
        x*=10;
        x+=(s[i]-'0');
    }
    cout<<x;
}