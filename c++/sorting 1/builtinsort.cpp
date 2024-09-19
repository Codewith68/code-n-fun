#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of array";
    cin>>x;
    vector<int>v;
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
   // reverse(v.begin(),v.end());
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}