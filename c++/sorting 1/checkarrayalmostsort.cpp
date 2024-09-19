#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
     int x;
    cout<<"enter the size of array";
    cin>>x;
    vector<int>v;
    cout<<"insert the elements ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
vector<int>v1(v.size());
for(int i=0;i<=v.size()-1;i++){
    v1[i]=v[i];
}
for(int i=0;i<=v.size();i++){
    bool flag=true;
    for(int j=0;j<=v.size()-i;j++){
        if(v[j]>v[j+1]) swap(v[j],v[j+1]);
        flag=false;
    }
    if(flag==true) break;
}
for(int i=0;i<=v.size()-1;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
bool flag=true;
for(int i=0;i<=v1.size()-1;i++){
    if(i==0){
        if(v1[i]!=v[i]&&v1[i]!=v[i+1]) {
            flag=false;
            break;
        }
    }
     if(i==v1.size()-1){
        if(v1[i]!=v[i]&&v1[i]!=v[i-1]) {
            flag=false;
            break;
        }
    }
    else 
    if(v1[i]!=v[i]&&v1[i]!=v[i-1]&&v1[i]!=v[i+1]){
        flag=false;
            break;
    }
}
}