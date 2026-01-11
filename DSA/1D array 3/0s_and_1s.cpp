#include<iostream>
#include<vector>
using namespace std;
int sort(vector<int> &v){
int e=v.size();
int i=0;
int j=e-1;
while(i<j){
    if(v[i]==0) i++;
    else if(v[j]==1) j--;
    else{
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
return 0;
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
    cout<<"the array is ";;
    for(int i=0;i<=x-1;i++){
        cout<<v[i]<<" ";
    }
    sort(v);
    cout<<"\nthe sorted array is ";
    for(int i=0;i<=x-1;i++){
        cout<<v[i]<<" ";
    }
}