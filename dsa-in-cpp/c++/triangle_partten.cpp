#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number ";
    cin>>x;
    for(int i=0;i<=x-1;i++){
        for(int j=0;j<=i;j++) cout<<j+1;
        cout<<endl;
    }
}