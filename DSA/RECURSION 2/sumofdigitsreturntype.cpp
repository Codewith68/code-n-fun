#include<iostream>
using namespace std;
int som(int x){
int sum=0;
if(x==0) return 0;
return x%10+som(x/10);
}
int main(){
    int x;
    cout<<"enter a number :";
    cin>>x;
   cout<<som(x);
}