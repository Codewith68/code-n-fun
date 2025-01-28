#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    while(st.size()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(34);
    st.push(38);
    print(st);
    stack<int>gt;
    stack<int>rt;
    // empty st to gt
    while(st.size()){
        gt.push(st.top());
        st.pop();
    }
    //empty gt to rt
    while(gt.size()){
        rt.push(gt.top());
        gt.pop();
    }
    //empty rt to st
    while(rt.size()){
        st.push(rt.top());
        rt.pop();
    }
    print(st);
}