#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    vector<int>v;
    cout<<"insert the element ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    cout<<"grratest element is "<<v[v.size()-1]<<endl;
    cout<<"second greatest element is "<<v[v.size()-2]<<endl;
    cout<<"third greatest element is "<<v[v.size()-3];
}