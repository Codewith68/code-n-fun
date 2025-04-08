#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    vector<int>v;
    cout<<"insert the elements ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    //sort(v.begin(),v.end());
    int lo=0;
    int hi=v.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==mid) lo=mid+1;
         else {
            ans=mid;
            hi=mid-1;
         }
    }
    cout<<ans<<" ";
}