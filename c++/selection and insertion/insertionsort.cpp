#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of array";
    cin>>x;
    cout<<"insert the elements ";
    vector<int>v;
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=1;i<=v.size()-1;i++){
        int j=i;
        while(j>=1&&v[j]<v[j-1]){
             swap(v[j],v[j-1]);
             j--;
        }
    }
    for(int i=0;i<=v.size()-1;i++) cout<<v[i]<<" ";
     }