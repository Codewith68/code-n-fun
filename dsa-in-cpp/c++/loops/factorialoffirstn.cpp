#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"enter a number ";
  cin>>x;
  int product=1;
  for(int i=1;i<=x;i++){
    int f;
    f=product*=i;
    cout<<"factorial of "<<i<<" is "<<f<<endl;;
  }
}