#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number of rows of first matrix ";
    cin>>x;
    int y;
    cout<<"enter the number of columns of first matrix ";
    cin>>y;
    int a[x][y];
    cout<<"insert the element for the matrix 1";
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
    int p;
    cout<<"enter the number of rows of second matrix ";;
    cin>>p;
    int q;
    cout<<"enter the number of columns of second matrix ";
    cin>>q;
    if (y!=p){
        cout<<"matrix multiplication not possible ";
        return 0;
    }
    int b[p][q];
    cout<<"insert the element for the matrix 2";
    for (int i=0;i<p;i++){
        for (int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    int result[x][q];
    for (int i=0;i<x;i++){
        for (int j=0;j<q;j++){
            result[i][j]=0;
            for (int k=0;k<y;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"the resultant matrix is "<<endl;
    for (int i=0;i<x;i++){
        for (int j=0;j<q;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}