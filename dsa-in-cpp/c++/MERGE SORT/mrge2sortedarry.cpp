#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&v1,vector<int>&v2,vector<int>&res){
    int i=0;
    int j=0;
    int k=0;
while(i<v1.size()&&j<v2.size()){
    if(v1[i]<v2[j]) res[k++]=v1[i++];
    else res[k++]=v2[j++];
}
if(i==v1.size()){
    while(j<v2.size()) res[k++]=v2[j++];
}
if(j==v2.size()){
    while(i<v1.size()) res[k++]=v1[i++];
}
}
int main(){
    int x;
    cout<<"entr the size of the 1st array ";
    cin>>x;
    int y;
    cout<<"enter the size of the 2nd array ";
    cin>>y;
    vector<int> v1;
    cout<<"enter the element to the 1st array ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v1.push_back(s);
    }
    vector<int> v2;
    cout<<"enter the element to the 2nd array ";
    for(int i=0;i<=y-1;i++){
        int s;
        cin>>s;
        v2.push_back(s);
    }
    int m=v1.size();
    int n=v2.size();
    vector<int>res(m+n);
    merge(v1,v2,res);
for(int i=0;i<=res.size()-1;i++){
    cout<<res[i]<<" ";
}
}
