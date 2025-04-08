#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a string";
    getline(cin,s);
    int count =0;
    for(int i=0;i<=s.length()-1;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') count ++;
    }
cout<<count<<" ";
}