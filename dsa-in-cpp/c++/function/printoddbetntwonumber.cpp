#include<iostream>
using namespace std;
void printodd(int &x,int&y){
        if(x>y){
            x=x+y;
            y=x-y;
            x=x-y;
        }
        for(int i=x;i<=y;i++){
            if(i%2!=0) cout<<i<<" ";
        }
        return;
}
int main(){
    int x,y;
    cout<<"enter two number ";
    cin>>x>>y;
    printodd(x,y);
}
