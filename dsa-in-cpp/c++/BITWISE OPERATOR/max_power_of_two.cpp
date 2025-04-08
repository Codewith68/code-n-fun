#include<iostream>
using namespace std;
int max_power_of_two2(int x){
    x=x|(x>>1);
    x=x|(x>>2);
    x=x|(x>>4);
    x=x|(x>>8);
    x=x|(x>>16);
   return (x+1)>>1;

}
int main(){
    int x=42;
    int temp;
    while(x!=0){
        temp=x;
        x=x&(x-1);
    }
    cout<<temp<<"\n";
    int y=42;
    cout<<max_power_of_two2(y);

}
