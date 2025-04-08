#include<iostream>
using namespace std;
class stack{
    private:
    int size;
    int top;
    int *s;
    public:
    stack(){
        size=10;
        top=-1;
        s=new int[size];
    }
    stack(int size){
        this->size=size;
        top=-1;
        s=new int[size];
    }
    void push(int val){
        if(top==size-1){
            cout<<"Stack is full"<<endl;
        }
        else{
            top++;
            s[top]=val;
        }
    }
    int pop(){
        int x=-1;
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            x=s[top];
            top--;
        }
        return x;
    }
    int peek(int index){
        int x=-1;
        if(top-index+1<0){
            cout<<"Invalid index"<<endl;
        }
        else{
            x=s[top-index+1];
        }
        return x;
    }
    int stackTop(){
        if(top==-1){
            return -1;
        }
        return s[top];
    }
    int isEmpty(){
        if(top==-1){
            return 1;
        }
        return 0;
    }
    int isFull(){
        if(top==size-1){
            return 1;
        }
        return 0;
    }
    void display(){
        for(int i=top;i>=0;i--){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.display();
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.isEmpty()<<endl;
    cout<<st.isFull()<<endl;
    return 0;
}