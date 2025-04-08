#include<iostream>
using namespace std;
int main(){
     int x;
     cout<<"enter row number ";
     cin>>x;
     int y;
     cout<<"enter coloumn number ";
     cin>>y;
     for(int i=1;i<=y;i++) cout<<"* ";
     cout<<endl;
     for(int i=2;i<=x-1;i++){
          cout<<"* ";
          for(int j=1;j<=y-2;j++) cout<<"  ";
          cout<<"* ";
          cout<<endl;
     }
    for(int i=1;i<=y;i++) cout<<"* ";

}