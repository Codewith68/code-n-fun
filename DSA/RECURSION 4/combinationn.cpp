#include<bits/stdc++.h>
using namespace std;
void combination(vector<int>&v,vector<int>ans,int idx,int target){
    if(target==0){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            return;
    }
    if(target<0) return;
        for(int i=idx;i<v.size();i++){
            ans.push_back(v[i]);
            combination(v,ans,i,target-v[i]);
            ans.pop_back();
        }
}
int main(){
       int x;
       cout<<"enter the size of the array :";
       cin>>x;
       vector<int>v;
       cout<<"insert the elements :";
       for(int i=0;i<x;i++){
        int y;
        cout<<"enter the "<<i<<" elements :";
        cin>>y;
        v.push_back(y);
       }
       int target;
       cout<<"enter the target :";
       cin>>target;
       vector<int>ans;
       combination(v,ans,0,target);
}