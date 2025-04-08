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
    for(int i=0;i<=v.size()-1;i++){
        for(int j=0;j<=v.size()-1-i;j++){
            if(v[j]>v[j+1]) swap(v[j],v[j+1]);
        }
    }
    cout<<endl;
    for(int i=(v.size()/2);i<=v.size()-1;i++){
       cout<<v[i]<<" ";
    }
}