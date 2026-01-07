#include<iostream>
using namespace std;    
int main(){
    int n;
    cout<<"Enter a number to find factorial: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        cout<<"Factorial of "<<i<<" is "<<fact<<endl;
    }
    //cout<<"Factorial of "<<n<<" is "<<fact;
    return 0;
}