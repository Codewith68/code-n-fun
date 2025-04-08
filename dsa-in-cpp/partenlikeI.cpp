#include<iostream>
using namespace std;
#include<climits>
int main(){
    int m;
    cout<<"enter row size and coloumn ";
    cin>>m;
    int a[m][m];
    cout<<"insert the elements";
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>a[i][j];
        }
    }
      for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            if(i==m/2||j==m/2)  cout<<a[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}