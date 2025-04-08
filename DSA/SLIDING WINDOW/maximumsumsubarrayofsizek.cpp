#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int x;
    cout<<"enter the sizeof the array ";
    cin>>x;
    vector<int> v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int maxidx=-1;
    int n=v.size();
    int k;
    cout<<"enter the size of subarray ";
    cin>>k;
    int maxsum=INT_MIN;
    for(int i=0;i<n-k+1;i++){// total operation =n-k+1
        int sum=0;
        for(int j=i;j<=i+k-1;j++){ // total operation k times
             sum+=v[j];
        }
        if(maxsum<sum){
            maxsum=sum;
            maxidx=i;
        }
    }
    // total no of operation=(n-k+1)+k
    // tc=O(n*k) and here  k is not constant 
    cout<<maxsum<<endl;
    cout<<maxidx;

}