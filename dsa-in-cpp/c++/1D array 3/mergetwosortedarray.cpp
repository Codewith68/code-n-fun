#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&v1,vector<int>&v2){
    int n=v1.size();
    int m=v2.size();
    vector<int>res(n+m);
     int i=n-1;
     int j=m-1;
     int k=m+n-1;
     while(i>=0&&j>=0){
        if(v1[i]>v2[j]){
            res[k]=v1[i];
            i--;
        }
        else{
            res[k]=v2[j];
            j--;
        }
        k--;
     }
     if(i<0){
        while(j>=0){
            res[k]=v2[j];
            j--;
            k--;

        }
     }
         if(j<0){
        while(i>=0){
            res[k]=v1[i];
            i--;
            k--;
        }
     }
     return res;
     
}
int main(){
    int x;
    cout<<"enter the size of the first array 1  ";
    cin>>x;
    cout<<"insert element for the first array";
    vector<int>v1;
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v1.push_back(s);
    }
    int y;
    cout<<"enter the size of the second array";
    cin>>y;
    cout<<"insert the element for the second array ";
    vector<int>v2;
    for(int i=0;i<=y-1;i++){
        int h;
        cin>>h;
        v2.push_back(h);
    }
vector<int>v=merge(v1,v2);
for(int i=0;i<=v.size()-1;i++){
    cout<<v[i]<<" ";
}
}
