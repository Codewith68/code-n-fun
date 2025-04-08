#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"enter a string ";
    getline(cin,s);
    for(int i=0;i<=s.size()-1;i++){
        if(s[i]%2!=0) s[i]='#';
    }
    cout<<s<<" ";
}