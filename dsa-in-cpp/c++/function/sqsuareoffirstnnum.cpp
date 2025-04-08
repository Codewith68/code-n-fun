#include<iostream>
using namespace std;
 void squre(int &x){
    for(int i=1;i<=x;i++) cout<<i<<"="<<i*i<<endl;
 }
int main(){
    int x;
    cout<<"enter a number";
    cin>>x;
    squre(x);
}