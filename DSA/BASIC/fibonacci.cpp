#include<iostream>
using namespace std;
int main(){
   int a=0,b=1,c,n;
   cout<<"Enter the number of terms in Fibonacci Series: "; 
    cin>>n;
    cout<<"Fibonacci Series: "<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    
}