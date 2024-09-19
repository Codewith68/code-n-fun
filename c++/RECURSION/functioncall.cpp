#include <iostream>
using namespace std;
void greet(){
    cout<<"hello"<<endl;
    cout<<"how are you";
}
int product(int a,int b){
    return a*b;
}
int main(){
    int x=product(2,5);
    cout<<product(4,5)<<endl<<x<<endl;
    greet();
}