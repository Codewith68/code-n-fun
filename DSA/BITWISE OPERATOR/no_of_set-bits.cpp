#include<iostream>
using namespace  std;
int built_in_set_bits(int x){
    return __builtin_popcount(x);

}
int main(){
    cout<<built_in_set_bits(7);
}