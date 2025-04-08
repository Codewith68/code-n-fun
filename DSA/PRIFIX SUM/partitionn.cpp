#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void partition(vector<int> &v){
    int n=v.size();
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }
    int idx=-1;
    for(int i=1;i<n;i++){
        if(2*v[i]==v[n-1]){
            idx=i;
            break;
        }

    }
    if(idx!=-1) cout<<" Yes it can be  partition  after "<<idx;
    else cout<<"no it cant be partition";
}
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    partition(v);
    }
