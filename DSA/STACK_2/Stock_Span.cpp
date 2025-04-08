#include<iostream>
using namespace std;
#include<stack>
#include<vector>
int main(){
int x;
cout<<"enter the size of the array";
cin>>x;
vector<int>v;
cout<<"inser the element into the array";
for(int i=0;i<x;i++){
    int s;
    cin>>s;
    v.push_back(s);
}
int n=v.size();
stack<int>st;
int pgi[n];
pgi[0]=1;
// using stack pop , ans , push
st.push(0);
for(int i=1;i<n;i++){
    // pop elements from the stack till the stack is not empty and the top element is less than the current element
    while(!st.empty() &&v[ st.top()]<=v[i])  st.pop();
    if(st.empty())  pgi[i]=-1;
    // mark the ans in the pge array
    else pgi[i]=st.top();
    pgi[i]=i-pgi[i];
    //push the array idx into the stack
    st.push(i);
}
for(int i=0;i<n;i++){
    cout<<v[i]<<"-->"<<pgi[i]<<endl;
}
// 2 5 9 3 1 12 6 8 7 
}