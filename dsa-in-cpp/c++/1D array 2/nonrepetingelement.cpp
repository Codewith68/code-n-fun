#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of array ";
    cin>>x;
    vector<int>v;
    cout<<"insert the element ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    bool flag=false;
    for(int i=0;i<=v.size()-1;i++){
        flag=false;
        for(int j=0;j<=v.size()-1;j++){
            if(i==j) continue;
            if(v[i]==v[j]){
                flag=true ;
                break;
            }
        }
        if(flag==false ) {
            cout<<v[i];
            break;
        }
    }
}