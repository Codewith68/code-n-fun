#include<iostream>
#include<climits>
using namespace std;
#include<vector>
vector<int>twosum(vector<int>&v,int target){
    int x=v.size();
    for(int i=0;i<=x-2;i++){
        for(int j=i+1;j<=x-1;j++){
            if(v[i]+v[j]==target)
            cout<<"["<<i<<","<<j<<"]";
        }
    }
   return{};
}
int main(){
    int x;
    cout<<"enter the size of array ";
    cin>>x;
    vector<int>v;
    cout<<"insert the elements ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
       v.push_back(s);
    }
    int m;
    cout<<"enter the target";
    cin>>m;
       twosum(v,m);
}