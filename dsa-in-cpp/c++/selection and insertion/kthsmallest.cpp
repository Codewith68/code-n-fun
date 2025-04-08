#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
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
    int k;
    cout<<"enter the kth value ";
    cin>>k;
    for(int i=0;i<=k-1;i++){
        int min=INT_MAX;
        int idx=-1;
        for(int j=i;j<=v.size()-1;j++){
            if(min>v[j]){
                min=v[j];
                idx=j;
            }
        }
         swap(v[i],v[idx]);
    }
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v[k-1];
}