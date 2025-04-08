#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    vector<int>v;
    cout<<"insert the elemnts ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    int n=1;
    int lo=0;
    int hi=v.size()-1;
    int firstidx=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==n){
            if(v[mid]==0){
                firstidx=mid;
                break;
            }
          else if(v[mid-1]!=n){
                firstidx=mid;
                break;
            }
               else {
                hi=mid-1;
               }
        }
        else if(v[mid]<n) lo=mid+1;
        else hi=mid-1;
    }
    if(firstidx==-1) cout<<0;
    else cout<<v.size()-firstidx;
}