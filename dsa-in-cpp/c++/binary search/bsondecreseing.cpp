#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
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
int target;
cout<<"enter he target ";
cin>>target;
int lo=0;
int hi=v.size()-1;
bool flag=false;
while(lo<=hi){
    int mid=lo+(hi-lo)/2;
    if(v[mid]==target) {
        flag=true;
        break;
    }
    else if(v[mid]<target) hi=mid-1;
    else lo=mid+1;
}
if(flag==true) cout<<"element exits";
else cout<<"elelmet not present in the array ";
}