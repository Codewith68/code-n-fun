#include<bits/stdc++.h>
using namespace std;
void subarray(vector<int> &v,vector<int>v1,int idx){
    if(idx==v.size()){
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subarray(v,v1,idx+1);
    if(v1.size()==0||v[idx-1]==v1[v1.size()-1]){
        v1.push_back(v[idx]);
    subarray(v,v1,idx+1);
    }
}
int main(){
    int x;
    cout<<"enter the size of the array  :";
    cin>>x;
    cout<<"insert the elements ";
    vector<int>v;
    for(int i=0;i<=x-1;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }
    // for(int i=0;i<x;i++){
    //     for(int j=i;j<x;j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<v[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    vector<int>v1;
    subarray(v,v1,0);
}
// this code only work on unique elements 