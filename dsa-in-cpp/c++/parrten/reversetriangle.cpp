#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int x;
cout<<"enter a number ";  
cin>>x;
for(int i=1;i<=x;i++){
    for(int j=1;j<=i;j++){
        cout<<" *";
    }
    cout<<endl;
}
}

