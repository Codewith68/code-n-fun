#include<iostream>
#include<stack>
#include<vector>
using namespace std;
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
int nge[n];
nge[n-1]=-1;
// using stack pop , ans , push 
st.push(v[n-1]);
for(int i=n-2;i>=0;i--){
    // pop elements from the stack till the stack is not empty and the top element is less than the current element
    while(!st.empty() && st.top()<=v[i])  st.pop();
    if(st.empty())  nge[i]=-1;
    else nge[i]=st.top();
    st.push(v[i]);
}
for(int i=0;i<n;i++){
    cout<<v[i]<<"-->"<<nge[i]<<endl;
}
// 2 5 9 3 1 12 6 8 7 
}
