#include<iostream>
using namespace std;
int main(){
     int arr[]={4,4,57,3,3,10,10,1,1};
     int n=sizeof(arr)/sizeof(arr[0]);
     int res=0;
     for(int i=0;i<n;i++){
        res=res^arr[i];
     }
     cout<<res<<"\n";
}