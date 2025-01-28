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
int pge[n];
pge[0]=-1;
// using stack pop , ans , push
st.push(v[0]);
for(int i=1;i<n;i++){
    // pop elements from the stack till the stack is not empty and the top element is less than the current element
    while(!st.empty() && st.top()<=v[i])  st.pop();
    if(st.empty())  pge[i]=-1;
    // mark the ans in the pge array
    else pge[i]=st.top();
    // push the array element into the stack
    st.push(v[i]);
}
for(int i=0;i<n;i++){
    cout<<v[i]<<"-->"<<pge[i]<<endl;
}
// 2 5 9 3 1 12 6 8 7 
}