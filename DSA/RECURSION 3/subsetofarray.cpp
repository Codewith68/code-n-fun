#include<bits/stdc++.h>
using namespace std;
void printarr(vector<int>&v,vector<int>v1,int idx){
    if(idx==v.size()){
          for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
          }
          cout<<endl;
    return;
    }
    printarr(v,v1,idx+1);
    v1.push_back(v[idx]);
    printarr(v,v1,idx+1);
}
int main(){
    int x;
    cout<<"enter the size of the array :";
    cin>>x;
    vector<int>v;
    cout<<"enter the elements :"<<endl;
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
   vector<int>v1;
    printarr(v,v1,0);
}