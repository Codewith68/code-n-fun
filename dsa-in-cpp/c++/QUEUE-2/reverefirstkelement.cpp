#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void Display(queue<int>&q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);

    }
    cout<<endl;
}
void reversek(int k,queue<int>&q){
    stack<int>st;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    int n=q.size();
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
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
    Display(q);
    int k=2;
    reversek(k,q);
    Display(q);
    // reverese(q);
    // Display(q);
    // reverese(q);
    // Display(q);
}