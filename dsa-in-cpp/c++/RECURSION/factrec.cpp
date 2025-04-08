#include <iostream>
using namespace std;
long long fact(long long n){
        if(n==1||n==0) return 1;//base case
        return n*fact(n-1);
}
int main(){
        int x;
        cout<<"enter the number :";
        cin>>x;
        cout<<fact(x);
        
}
