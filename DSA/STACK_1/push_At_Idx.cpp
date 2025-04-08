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
void pushAtidx(stack<int>&st,int idx,int val){
    if(idx==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtidx(st,idx-1,val);
    st.push(x);
}
int main(){
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(34);
    st.push(38);
    pushAtidx(st,2,100);
    print(st);
   
}