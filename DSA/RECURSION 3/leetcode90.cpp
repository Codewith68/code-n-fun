#include<bits/stdc++.h>
using namespace std;
void helper(vector<vector<int>>&finalans,vector<int>&ans,vector<int>&v,int idx){
    finalans.push_back(ans);
    for(int i=idx;i<v.size();i++){
if(i!=idx && v[i]==v[i-1]) continue;
ans.push_back(v[i]);
helper(finalans,ans,v,i+1);
ans.pop_back();
}
}
vector<vector<int>> printduplicates(vector<int>&v){
  vector<vector<int>>finalans;
  vector<int>ans;
  sort(v.begin(),v.end());
  helper(finalans,ans,v,0);
  return finalans;
}
int main(){
    int x;
    cout<<"enter the size of the array :";
    cin>>x;
    vector<int>v;
    cout<<"enter the elements :";
    for(int i=0;i<=x-1;i++){
    int s;
    cin>>s;
    v.push_back(s);
    }
    vector<vector<int>>finalans= printduplicates(v);
    for(auto /*random*/ onedvector:finalans){
        for(auto i:onedvector) cout<<i<<" ";
        cout<<endl;
    }
    //tc=O(2*n*n*2)
    //sc=O(2*n)
}
