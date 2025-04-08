#include<iostream>
using namespace std;
string decimal_to_binary(int x){
    string result="";
    while(x){
        if(x % 2 ==0){
            //even
            result='0'+result;
        }
        else {
            //odd
           result='1'+result;
        }
        x>>=1;
    }
    return result;
}
int main(){
    int n=19;
    cout<<decimal_to_binary(n);
    }