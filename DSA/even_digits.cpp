#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    cout<<"insert the element ";
    vector<int>v;
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    int count=0;
    for(int i=0;i<=v.size()-1;i++){
        if(v[i]%2==0) count++;
    }
    cout<<count;
}