#include<iostream>
using namespace std;
void print(int x){
     for(int i=0;i<=x;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
int main(){
    print(3);
     print(4); print(5);
}
   