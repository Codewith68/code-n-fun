#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v1){
    int x=v1.size();
    for(int i=0;i<=x-1;i++){
        cout<<v1[i]<<" ";
    }
}
int main(){
    int x;
    cout<<"enter the size of the array  ";
    cin>>x;
    vector<int>v1;
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v1.push_back(s);
    }
display(v1);
cout<<endl;
vector<int>v2(v1.size());
for(int i=0;i<=v2.size()-1;i++){
    v2[i]=v1[v2.size()-1-i];
}
display(v2);
}