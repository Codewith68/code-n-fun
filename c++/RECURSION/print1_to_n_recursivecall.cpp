#include <iostream>
using namespace std;
void fact(int n){
    if(n==0) return;
    fact(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    fact(n);
}