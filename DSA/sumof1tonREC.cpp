#include <iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    int lastdigit=n%10;
    n=n/10;
    return lastdigit + sum(n);
}
int main(){
cout<<sum(46566)<<endl;
}