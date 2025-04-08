#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class stack{
    private:
    Node *head;
    public:
    int size;
    stack(){
        head=NULL;
        size=0;
    }
    void push(int val){
       Node *temp=new Node(val);
       temp->next=head;
       head=temp;
       size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        //Node *temp=head;
        head=head->next;
        size--;
    }
    void top(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        cout<<head->data<<endl;
    }
    void print(Node *temp){ //recursive function to print the Normal stack
        if(temp==NULL){
            return;
        }
        print(temp->next);
        cout<<temp->data<<" ";

    }
    void display(){
        Node *temp=head;
        print(temp);
        cout<<endl;
    }
    int peek(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            return head->data;
        }
    }
    int isEmpty(){
        if(head==NULL){
            return 1;
        }
        return 0;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.display();
    st.pop();
    st.display();
    st.top();
    cout<<st.peek()<<endl;
    cout<<st.isEmpty()<<endl;
}