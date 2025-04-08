#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number ";
    cin>>x;
    bool flag=false;
    for(int i=2;i<=x-1;i++){
        if(x%i==0){
            flag=true;
            break;
        }
    }
    if(x==1) cout<<x<<"not a prime nor composite";
    if(flag==true) cout<<x<<" is a composite number ";
    else cout<<x<<" is a prime number ";
}