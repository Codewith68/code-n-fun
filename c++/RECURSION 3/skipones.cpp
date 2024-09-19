#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void  removone(vector<int>&v,vector<int>&v1, int idx){
    if(idx==v.size()) {
        for(int i=0;i<=v1.size()-1;i++){
            cout<<v1[i]<<" ";
        }
        return;
    }
    int n=v[idx];
if(n==1) removone(v,v1,idx+1);
else {
    v1.push_back(n);
    removone(v,v1,idx+1);
}
}
int main(){
   int x;
   cout<<"enter the size of the array  " ;
   cin>>x;
    vector<int>v;
    cout<<"enter the elements ";
   for(int i=0;i<=x-1;i++){
    int s;
    cin>>s;
    v.push_back(s);
   } 
   vector<int>v1;
   removone(v,v1,0);
}