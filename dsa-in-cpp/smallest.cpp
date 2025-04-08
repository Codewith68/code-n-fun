#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the marks of the students ";
    cin>>a>>b>>c;
    if(a<=b){
        if(a<=c) cout<<a<<" is having the least mark ";
        else cout<<c<<" is having the least mark ";
    }
    else {
    if(b<=c){
        cout<<b<<" is having the least mark ";
    }
    else cout<<c<<" is having the least mark ";
     }
}