#include<iostream>
using namespace std;
void fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
        cout<<f<<endl;
    }
}
int main(){
    int x;
    cout<<"enter a number";
    cin>>x;
      fact(x);
}