#include<iostream>
#include<vector>
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
    int lo=0;
    int hi=v.size()-1;
    int n;
    cout<<"enter the number ";
    cin>>n;
    bool flag=false;
         while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==n) {
            if(v[mid]==0){
                  flag=true;
                cout<<mid;
                break;
            }
           else if(v[mid-1]!=n){
                flag=true;
                cout<<mid;
                break;
            }
            else hi=mid-1;
        }
        else if(v[mid]<n) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false ) cout<<-1;
}