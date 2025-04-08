#include <iostream>
using namespace std;
void fact(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    fact(i+1,n);
}
int main(){
    int n;
    cin>>n;
    fact(1,n);
}