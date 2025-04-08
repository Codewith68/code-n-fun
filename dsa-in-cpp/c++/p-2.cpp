#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number ";
    cin>>x;
    for(int i=0;i<=x-1;i++){
        for(int j=0;j<=x+1-i;j++) cout<<" ";
        for(int k=0;k<=i;k++) cout<<"* ";
        cout<<endl;
    }
}