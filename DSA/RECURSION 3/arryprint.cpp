#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printarray(vector<int>&v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    printarray(v,idx+1);
}
int main(){
        int x;
        cout<<"enter the size of the array ";
        cin>>x;
        vector<int>v;
        cout<<"insert all the elements :"<<endl;
        for(int i=0;i<=x-1;i++){
            int s;
            cout<<"enter the element "<<i<<" ";
            cin>>s;
            v.push_back(s);
        }
        printarray(v,0);
        cout<<endl;
        // reverse(v.begin(),v.end());
        // for(int i=0;i<=v.size()-1;i++){
        //     cout<<v[i]<<" ";
        //         }
}