#include<iostream>
using namespace std;
int main(){
   int x;
   cout<<"enter the number ";
   cin>>x;
   int last=0;
   int sum=0;
   while(x){
    last=x%10;
   if(last%2==0) sum+=last;
    x/=10;
   }
   cout<<sum<<" ";
}