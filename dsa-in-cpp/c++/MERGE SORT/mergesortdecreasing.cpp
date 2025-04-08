#include<iostream>
using namespace std;
#include<vector>
void merge(vector<int>&v1,vector<int>&v2,vector<int>&res){
    int i=0;
    int j=0;
    int k=0;
while(i<v1.size()&&j<v2.size()){
    if(v1[i]>=v2[j]) res[k++]=v1[i++];
    else res[k++]=v2[j++];
}
if(i==v1.size()){
    while(j<v2.size()) res[k++]=v2[j++];
}
if(j==v2.size()){
    while(i<v1.size()) res[k++]=v1[i++];
}
}




void mergeSort(vector<int>&v){
    int s=v.size();
    if(s==1) return;
    int s1=s/2,s2=s-s/2;
    vector<int>a(s1),b(s2);
    for(int i=0;i<s1;i++){
        a[i]=v[i];
}
for(int i=0;i<s2;i++){
        b[i]=v[s1+i];
}
mergeSort(a);
mergeSort(b);
merge(a,b,v);
a.clear();
b.clear();
}
int main(){
    int x;
    cout<<"entr the size of the array ";
    cin>>x;
    vector<int>v;
    cout<<"insert the element ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    mergeSort(v);
    cout<<endl;
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}