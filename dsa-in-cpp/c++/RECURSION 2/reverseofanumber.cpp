#include<iostream>
using namespace std;
void rev(int ans,int x){
    if(x==0){
        cout<<ans;
        return;
    }
    int rem=x%10;
    ans=ans*10+rem;
     rev(ans,x/10);
}
int main(){
    int x;
    cout<<"enter a number ";
    cin>>x;
    rev(0,x);
}
