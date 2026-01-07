#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int rev=0,original=x;
    while(x){
        int last=x%10;
        rev=rev*10+last;
        x/=10;
    }
    if(rev==original){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}
