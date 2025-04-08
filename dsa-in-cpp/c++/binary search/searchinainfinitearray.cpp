#include<iostream>
using namespace std;
#include<vector>
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    vector<int>v;
    cout<<"insert he elements ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    int lo=0;
    int hi=1;
    int target;
    cin>>target;
    while(v[hi]<target){//binary search is basically to reduce the search space
    //  so first we have to find the range of the target array then we can directly applay the binary search ont he range array
        lo=hi;
        hi*=2;
    }
    cout<<lo<<" "<<hi;
    cout<<endl;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==target){
            flag=true;
            break;
        }
        else if(v[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    if(flag) cout<<"element exits";
    else cout<<"element not present in the aarry ";
}