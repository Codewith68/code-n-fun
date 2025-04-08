#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number ";
    cin>>x;
    int n=x;
    int reverse=0;
    int last=0;
    while(x){
        last=x%10;
        reverse*=10;
        reverse+=last;
        x/=10;
    }
    if (n==reverse) cout<<n<<" is a palindrome number ";
    else cout<<n<<" is not a palindrome number ";
}