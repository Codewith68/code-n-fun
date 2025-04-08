#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the range of number  ";
    cin>>x;
    for(int i=1;i<=x;i++){
        int cubesum=0;
        int x=i;
        while(x>0){
        int last=x%10;
        cubesum+=last*last*last;
        x/=10;
        }
        if(i==cubesum) cout<<i<<endl;
    }
}