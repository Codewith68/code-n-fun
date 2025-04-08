#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter the row size of the first matrix ";
    cin>>x;
    int y;
    cout<<"enter the coloumn size of the first matrix ";
    cin>>y;
    int a1[x][y];
    cout<<"insert elements for the first matrix ";
    for(int i=0;i<=x-1;i++){
        for(int j=0;j<=y-1;j++){
            cin>>a1[i][j];
        }
    }
    int m;
    cout<<"enter the row size of the second matrix";
    cin>>m;
    int n;
    cout<<"enter the coloumn size of the second matrix";
    cin>>n;
    int a2[m][n];
    cout<<"insert the element for second matrix";
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>a2[i][j];
        }
    }
    if(y==m)
   { int res[x][n];
    for(int i=0;i<=x-1;i++){
        for(int j=0;j<=n-1;j++){
            res[i][j]=0;
        for(int k=0;k<=m-1;k++){
            res[i][j]+=a1[i][k]*a2[k][j];
        }
    }
    }
    cout<<endl;
     for(int i=0;i<=x-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }}
    else cout<<"matrix multiplication not possible ";
}