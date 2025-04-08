#include<iostream>
#include<stack>
using namespace  std;
void  RemovekthElement(int k,stack<int>&st){
  stack<int>temp;
  k--;
  while(k--){
    temp.push(st.top());
    st.pop();
  }
   st.pop();
   while(!temp.empty()){
       st.push(temp.top());
       temp.pop();
   }
}
// TC=O(k);
// SC=O(k);
int main(){
    stack<int>st;
    for(int i=0;i<10;i++){
        st.push(i);
    }
    RemovekthElement(4,st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
