#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(34);
    st.push(38);
    stack<int>temp;
    // printing in reverse order -> Empty in the stack
    while(st.size()){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    
    cout<<endl;
    //putting back the elements in the stack
    while(temp.size()){
        
        st.push(temp.top());
        cout<<temp.top()<<" ";

        temp.pop();
    }
    //cout<<st.top();
}