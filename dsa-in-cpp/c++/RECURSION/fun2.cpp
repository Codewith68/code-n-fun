#include <iostream>
using namespace std;
void grret(int n){
    if(n==0) return;
    cout<<"hello subrat"<<endl;
    grret(n-1);
}
int main(){
      grret(4);
}