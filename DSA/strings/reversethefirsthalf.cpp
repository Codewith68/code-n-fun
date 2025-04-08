#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a string ";
    getline(cin,s);
    cout<<s;
    cout<<endl;
    reverse(s.begin()+3,s.end());
    cout<<s;
}