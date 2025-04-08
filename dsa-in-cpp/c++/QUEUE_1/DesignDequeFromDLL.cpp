#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node *prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
class Deque{
    public:
    Node *head;
    Node *tail;
    int s;
    Deque(){
        head=tail=NULL;
        s=0;
    }
    void pushback(int data){
        Node *temp=new Node(data);
        if(head==NULL) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        s++;
    }
    void pushfront(int data){
        Node *temp=new Node(data);
        if(head==NULL) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        s++;
    }
    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void displayRev(){
        Node *temp=tail;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<"NULL"<<endl;
    }
    void displayRec(Node *temp){
        if(temp==NULL){
            cout<<"NULL"<<endl;
            return;
        }
        cout<<temp->data<<" ";
        displayRec(temp->next);
    }
    void displayRevRec(Node *temp){
        if(temp==NULL){
            cout<<"NULL"<<endl;
            return;
        }
        cout<<temp->data<<" ";
        displayRevRec(temp->prev);
    }
    void popfront(){
        if(s==0){
            cout<<"Node is empty";
        }
        head=head->next;
        head->prev=NULL;
        s--;
    }
    void popback(){
        if(s==0){
            cout<<"Node is empty";
        }
        tail=tail->prev;
        tail->next=NULL;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return head->data;
    }
    int rear(){
        if(s==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return tail->data;
    }
    int size(){
        return s;
    }
    bool isEmpty(){
        return s==0;
    }
};
int main(){
    Deque dq;
    dq.pushback(1);
    dq.pushback(2);
    dq.pushback(3);
    dq.pushback(4);
    dq.pushback(5);
    dq.pushfront(6);
    dq.pushfront(7);
    dq.pushfront(8);
    dq.pushfront(9);
    dq.display();
    dq.displayRev();
    dq.popfront();
    dq.popback();
    dq.display();
    dq.displayRev();
    cout<<dq.front()<<endl;
    cout<<dq.rear()<<endl;
    cout<<dq.size()<<endl;
    cout<<dq.isEmpty()<<endl;
    return 0;
}