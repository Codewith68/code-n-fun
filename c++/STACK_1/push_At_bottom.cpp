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
   
    cout<<endl;
    stack<int>temp;
    // pushing 1 at the bottom of the stack
    while(st.size()){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    st.push(1);
    while(temp.size()){
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
    print(st);
    
}