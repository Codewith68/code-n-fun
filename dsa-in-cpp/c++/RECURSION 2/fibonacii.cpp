#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1||n==2) return 1;
    int leftans=fibo(n-1);
    int rightans=fibo(n-2);
    return leftans+rightans;
    }
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<fibo(n);
}