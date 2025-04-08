#include <iostream>
using namespace std;
void fact(int n){
    if(n==0) return;// this is base case
       cout<<n<<endl;
        fact(n-1);// call
}
int main(){
    fact(6);
}