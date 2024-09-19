#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter row";
    cin>>m;
    int n;
    cout<<"enter coloumn ";
    cin>>n;
    int arr[m][n];
    cout<<"insert the element";
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    int max=INT_MIN;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<max;
}