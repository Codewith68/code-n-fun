#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    vector<int>v;
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
int n;
cout<<"enter the no ";
cin>>n;
int count=0;
for(int i=0;i<=v.size()-1;i++){
    if(v[i]>n) count++;
}
cout<<"there is "<<count<<" element greater than the no "<<n;
}