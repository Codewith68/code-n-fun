#include<iostream>
using namespace std;
void printOdd(int a,int b){
    if(a>b) return ;
      cout<<a<<" ";
     printOdd(a+2,b);
}
int sum(int a,int b){
    if(a>b) return 0;
    return a+sum(a+2,b);
}
void swwap(int &a,int &b){
     a=a+b;
     b=a-b;
     a=a-b;
}
int main(){
int a,b;
cout<<"enter a and b :";
cin>>a>>b;
 if(a>b) swwap(a,b);
 cout<<a<<" "<<b;
//if(a%2==0) a++;
//cout<<sum(a,b);
}