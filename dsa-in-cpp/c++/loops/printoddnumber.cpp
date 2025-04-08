#include<iostream>
using namespace std;
int main(){
   int x;
   cout<<"enter a number ";
   cin>>x;
   while(x<=26){
    cout<<(char)(x+64)<<"="<<(int)(x+64)<<endl;
    cout<<(char)(x+96)<<"="<<(int)(x+96)<<endl;
    x++;
   }
}