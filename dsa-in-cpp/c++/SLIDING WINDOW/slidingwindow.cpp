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
    int n=v.size();
    int k;
    cout<<"enter the size of subarray ";
    cin>>k;
    int maxsum=0;
    int maxidx=0;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=v[i];
    }
    maxsum=sum;
    // sliding window
    int i=1;
    int j=k;
    while(j<n){
        sum+=v[j]-v[i-1];
        if(maxsum<sum){
            maxsum=sum;
            maxidx=i;
        }
        i++;
        j++;
    }
    // tc=O(n)
    cout<<maxsum<<endl;
    cout<<maxidx;

}