#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    cout<<"insert the elements ";
    vector<int>v;
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    int lo=0;
    int hi=v.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==mid+1) lo=mid+1;
        else if(v[mid]==mid){
            if(v[mid-1]==mid){
                 cout<<mid;
                 break;
            } 
            else hi=mid-1;
        }
    }
}