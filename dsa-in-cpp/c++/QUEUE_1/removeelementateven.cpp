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
void reverese(queue<int>&q){
    stack<int>st;
    // now empty the queue into the stack
    while(!q.empty()){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    //wmpty the stack into queue
    while(!st.empty()){
        int x=st.top();
        st.pop();
        q.push(x);
    }
}
void removeAtEven(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
       if(i%2!=0){
        int x=q.front();
        q.push(x);
       }
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
    q.push(6);
    Display(q);
    removeAtEven(q);
    Display(q);

}