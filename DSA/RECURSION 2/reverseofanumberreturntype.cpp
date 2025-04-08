#include<iostream>
using namespace std;
int rev(int &ans,int x){
    if(x==0) return ans;
    int rem=x%10;
    ans=ans*10+rem;
     return rev(ans,x/10);
}
int main(){
    int x;
    cout<<"enter a number ";
    cin>>x;
    int ans=0;
    cout<<rev(ans,x);
}
