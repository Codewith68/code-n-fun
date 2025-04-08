#include<iostream>
#include<stack>
using namespace std;
void DisplayRecursively(stack<int> &st){
    if(st.size()==0){
        return;
    }
    int x=st.top();
    st.pop();
    DisplayRecursively(st);
    cout<<x<<" ";
    st.push(x);
}
void pushAtbottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtbottom(st,val);
    st.push(x);
}
void reverse(stack<int>&st){
    if(st.size()==0){
        return;
    }
    int x=st.top();
    st.pop();
    reverse(st);
    pushAtbottom(st,x);
}
int main(){
    stack<int>st;
    // cout<<st.size()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(34);
    st.push(38);
    //DisplayRecursively(st);
    //pushAtbottom(st,1);
    DisplayRecursively(st);
    cout<<endl;
    reverse(st);
    DisplayRecursively(st);
}