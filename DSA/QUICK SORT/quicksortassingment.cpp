#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void assignment( vector<int> &v){
      int idx1=-1;
      int idx2=-1;
    int n=v.size();
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            if(idx1==-1){
                idx1=i;
                idx2=i+1;
            }
            else idx2=i+1;
        }
    }
    swap(v[idx1],v[idx2]);
}
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    vector<int> v(x);
    for(int i=0;i<=x-1;i++){
        cin>>v[i];
    }
    assignment(v);
    for(auto x:v){
        cout<<x<<" ";
    }
}
