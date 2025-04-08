#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the range ";
    cin>>x;
    // for(int a=4;a<=x;a+=3){
    //     cout<<a<<" ";
    // }
    int a=4;
    for(int i=0;i<=x;i++){
        cout<<a<<" ";
        a+=3;
    }

}