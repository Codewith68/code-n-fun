#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter a string";
    getline(cin,str);
    for(int i=0;i<=str[i]!='\0';i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str<<" ";
}