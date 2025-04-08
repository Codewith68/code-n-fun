#include<iostream>
using namespace  std;
int built_in_set_bits(int x){
    return __builtin_popcount(x);

}
int built_in_set_bits2(int x){
    int count=0;
    while(x){
        count++;
        x=(x & (x-1));
    }
    return count++;
}
int main(){
    cout<<built_in_set_bits(453)<<"\n";
    cout<<built_in_set_bits2(453)<<"\n";
}