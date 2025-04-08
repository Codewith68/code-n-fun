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
bool flag=false;
for(int i=0;i<=v.size()-2;i++){
    if(v[i]==v[i+1]){
        flag=true;
        break;
    }
}
if(flag==true) cout<<"array contain duplicates ";
    else cout<<"array does not contain duplicates ";
}