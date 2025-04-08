#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter the size os array";
    cin>>x;
    vector<int>v;
    cout<<"insert the elements ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    cout<<endl;
    for(int i=0;i<=v.size();i++){
        if(v[i]>v[i+1])swap(v[i],v[i+1]);
        i++;
    }
    for(int i=0;i<=v.size()-1;i++) 
    cout<<v[i]<<" ";
    bool flag=true;
    for(int i=0;i<=v.size()-1;i++){
        if(v[i]>v[i+1]) {
            flag=false;
            break;
        }
    }
    cout<<endl;
    if(flag==true) cout<<"array is almost sorted";
    else cout<<"array is not almost sorted";
}