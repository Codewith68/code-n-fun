#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of row ";
    cin>>x;
    int y;
    cout<<"enter the size of the coloumn ";
    cin>>y;
    int a[x][y];
    cout<<"insert the elements" ;
    for(int i=0;i<=x-1;i++){
        for(int j=0;j<=y-1;j++){
            cin>>a[i][j];
        }
    }
    int maxsum=INT_MIN;
    int rowno=-1;
    for(int i=0;i<=x-1;i++){
        int sum=0;
        for(int j=0;j<=y-1;j++){
            sum+=a[i][j];
        }
        if(maxsum<sum) {maxsum=sum;
        rowno=i;
        }
    }
    cout<<"the row with maximum sum is"<<rowno;
}

