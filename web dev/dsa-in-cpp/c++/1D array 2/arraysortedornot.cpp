#include<iostream>
#include<vector>
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
    bool flag=true;
    for(int i=0;i<=v.size()-2;i++){
            for(int j=i+1;j<=v.size()-1;j++){
                if(v[j]<v[i]){ flag=false;
                break;
                }
            }
        if(flag==true) continue;   
    }
    if(flag==true) cout<<"array is sorted ";
    else cout<<"array is not sorted";
}