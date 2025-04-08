#include<iostream>
using namespace std;
int staire(int x){
    if(x==0||x==1) return 1;
    else return staire(x-1)+staire(x-2);
}
int main(){
    int x;
    cout<<"enter a number :";
    cin>>x;
    cout<<staire(x);
}