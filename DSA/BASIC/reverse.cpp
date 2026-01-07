#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a Number To Reverse :";
    cin>>x;
    int rev=0;
    while(x){
        int last=x%10;
        rev=rev*10+last;
        x/=10;
    }
    cout<<"Reversed Number is :"<<rev;
    return 0;

}