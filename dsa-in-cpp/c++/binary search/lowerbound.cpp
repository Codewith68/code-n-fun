#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    int x;
    cout<<"enter the size of the arrar";
    cin>>x;
    vector<int>v;
    cout<<"insert the elements";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    int lo=0;
    int hi=v.size()-1;
    int n;
    bool flag=false;
    cout<<"enter the number ";
    cin>>n;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==n){
            flag=true;
            cout<<v[mid-1];
            break;
        }
        else if(v[mid]<n) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<v[hi];

}
