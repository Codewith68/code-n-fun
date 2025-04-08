#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort(vector<int>&v){
    int no0=0;
    int noo=0;
    int notw=0;
    for(int i=0;i<=v.size()-1;i++){
        if(v[i]==0) no0++;
        else if(v[i]==1) noo++;
        else notw++;
    }
    for(int i=0;i<=v.size()-1;i++){
        if(i<no0) v[i]=0;
        else if(i<no0+noo) v[i]=1;
        else v[i]=2;
    }
    for(int i=0;i<=v.size()-1;i++) cout<<v[i]<<" ";
}
int main(){
    int x;
    cout<<"enter the sizze of the array ";
    cin>>x;
    vector<int>v;
    cout<<"insert the elements ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    sort(v);
}