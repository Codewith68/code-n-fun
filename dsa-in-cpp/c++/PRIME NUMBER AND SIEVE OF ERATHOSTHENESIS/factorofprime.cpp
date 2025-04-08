#include<iostream>
#include<cmath>
using namespace std;
    bool isprime(int n){
           if(n==1) return false;
           for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)   return false;
           }
           return true;
    }
    void printfactor(int n){
        for(int i=1;i<sqrt(n);i++){
            if(n%i==0) cout<<i<<" ";
        }
        for(int i=sqrt(n);i>=1;i--){
            if(n%i==0) cout<<n/i<<" ";
        }
    }       
    int main(){
        int x;
        cout<<"enter the number ";
        cin>>x;
        printfactor(x);
        
}