#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    vector<int>v;
    cout<<"insert the elelment";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    int target;
    cout<<"enter the number that you want to search ";
    cin>>target;
    bool flag=false ;
    for(int i=0;i<=v.size()-1;i++){
        if(v[i]==target){
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"element is presemnt in the array ";
    else cout<<"element is not present in the array ";
}
