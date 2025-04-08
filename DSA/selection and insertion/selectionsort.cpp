#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter the size os array ";
    cin>>x;
 vector<int>v;
 cout<<"insert thr elements ";
 for(int i=0;i<=x-1;i++){
    int s;
    cin>>s;
    v.push_back(s);
 }
 cout<<endl;
 for(int i=0;i<=v.size()-2;i++){
    int min=INT_MAX;
    int idx=-1;
    for(int j=i;j<=v.size()-1;j++){
        if(v[j]<min){
            min=v[j];
            idx=j;
        }
    }
    swap(v[i],v[idx]);
 }
 cout<<endl;
 for(int i=0;i<=v.size()-1;i++){
    cout<<v[i]<<" ";
 }
}