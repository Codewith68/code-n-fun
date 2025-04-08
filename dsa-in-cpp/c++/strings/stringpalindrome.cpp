#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a string ";
    getline(cin,s);
    int i=0;
    int j=s.length()-1;
     bool flag=false;
     for(int i=0;i<=s.size()/2;i++){
        if(s[i]==s[j]){ flag=true;
        break;}
        i++;
        j--;
     }
     if(flag==true) cout<<"string is palindrome";
     else cout<<"string is not palindrome";
}