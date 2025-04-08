#include <iostream>
using namespace std;
void sum1toN(int sum,int n){
 if(n==0){
cout<<sum<<endl;
return;
}  
sum1toN( sum+n ,n-1);//using an extra parameter
}
int sum(int n){
    if(n==0) return 0;
   return n+sum(n-1); //using only recurssive calls or after calls
}
int main(){
cout<<sum(4)<<endl;
sum1toN(0,6);
}