#include<iostream>
#include<stack>
using namespace std;
void DisplayRecursively(stack<int> &st){
    if(st.size()==0){
        cout<<"NULL"<<endl;
        return;
    }
    int x=st.top();
    st.pop();
    // DisplayRecursively(st);
    cout<<x<<" ";
    DisplayRecursively(st);
}
int main(){
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(34);
    st.push(38);
    DisplayRecursively(st);
    
}