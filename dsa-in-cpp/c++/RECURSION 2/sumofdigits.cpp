#include<iostream>
using namespace std;
void som(int sum,int x){
if(x==0) {
    cout<<sum;
    return;
}
som(sum+x%10,x/10);
}
int main(){
    int x;
    cout<<"enter a number :";
    cin>>x;
   som(0,x);
}