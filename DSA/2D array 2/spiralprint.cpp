#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter the row size";
    cin>>m;
    int n;
    cout<<"enter coloumn size";
    cin>>n;
    int a[m][n];
    cout<<"insert the elements";
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++)
        cin>>a[i][j];
    }
    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    int count=0;
    int totalelement=n*m;
    while(minr<=maxr&& minc<=maxc){
        for(int j=minc;j<=maxc&&count<totalelement;j++){
           cout<<a[minr][j]<<" ";
           count++;
        }
        minr++;
        for(int i=minr;i<=maxr&&count<totalelement;i++){
           cout<<a[i][maxc]<<" ";
           count++;
        }
        maxc--;
        for(int j=maxc;j>=minc&&count<totalelement;j--){
           cout<<a[maxr][j]<<" ";
           count++;
        }
        maxr--;
        for(int i=maxr;i>=minr&&count<totalelement;i--){
           cout<<a[i][minc]<<" ";
           count++;
        }
        minc++;
    }
}