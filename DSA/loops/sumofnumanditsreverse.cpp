#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"enter a number";
  cin>>x;
  int reverse =0;
  int last;
  int b=x;
  while(x){
    last=x%10;
    reverse*=10;
    reverse+=last;
    x/=10;
  }
  // cout<<b+reverse << " ";
  if(b==reverse) cout<<"'palindrome'";
}