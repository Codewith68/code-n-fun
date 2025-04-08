#include<iostream>
#include<climits>
using namespace std;
#include<vector>
int main(){
    int x;
    cout<<"enter the size of array ";
    cin>>x;
    vector<int>v;
    cout<<"insert the elements ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
       v.push_back(s);
    }
    int n; 
    cout<<"'enter a number '";
    cin>>n;
    int idx=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==n) {
             idx=i;
        break;
        }
    }
    cout<<idx<<" ";
}