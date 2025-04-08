#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<=s.length()-1;i++){
        if(s[i]%2!=0) s[i]='#'; 
    }
    cout<<s<<" ";
}
