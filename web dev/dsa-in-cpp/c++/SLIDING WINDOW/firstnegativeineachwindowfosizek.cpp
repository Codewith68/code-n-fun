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
    int p=-1;
    vector<int>ans (n-k+1);
    for(int i=0;i<k;i++){
        if(v[i]<0){
            p=i;
            break;
        }
    }
    if(p==-1) ans[0]=1;
    else ans[0]=v[p];
    // sliding window
    int i=1;
    int j=k;
    while(j<n){
        if(p>=i) ans[i]=v[p];
        else{
            p=-1;
            for(int x=i;x<=j;x++){
                if(v[x]<0) {
                    p=x;
                    break;
                }
            }
            if(p!=-1) ans[i]=v[p];
            else ans[i]=1;
        }
        i++;
        j++;
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
}