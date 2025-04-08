#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void Display(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);

    }
    cout<<endl;
}
void reorder(queue<int>&q){
    stack<int>st;
    int n=q.size();
    // pop first half of the elements and push them into stack
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // push the elements from stack to queue
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    // pop the 2nd  half of the elements and push them to the end of the queue
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    //most imp interleave the elements of stack and queue
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
// reverse the queue using stack;
while(q.size()>0){
    st.push(q.front());
    q.pop();
}
while(!st.empty()){
    q.push(st.top());
    st.pop();
}
}
int main(){
    queue<int>q;
    //push -> insertion happens only at the back/rear TC=O(1)
    //pop -> only happens at the front TC=O(1)
    //front->top we an acess the front of the queue
    //size,empty return the size of the queue
    //back we can also accsess the rear element 
    //empty if(empty) return true ,  else return false 
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    Display(q);
    reorder(q);
    Display(q);
}