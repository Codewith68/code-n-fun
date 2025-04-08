// This project uses the C++17 language standard.
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
class DLL{
    public:
    Node *head;
    Node *tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void InsertAtEnd(int data){
        Node *temp=new Node(data);
        if(head==NULL) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void InsertAtBegin(int data){
        Node *temp=new Node(data);
        if(head==NULL) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void InsertAt(int data,int pos){
        if(pos<0 || pos>size) return;
        if(pos==0) InsertAtBegin(data);
        else if(pos==size) InsertAtEnd(data);
        else{
            Node *temp=new Node(data);
            Node *temp1=head;
            for(int i=0;i<pos-1;i++){
                temp1=temp1->next;
            }
            temp->next=temp1->next;
            temp1->next->prev=temp;
            temp1->next=temp;
            temp->prev=temp1;
            size++;
        }
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
    void DeleteAtHead(){
        if(size==0){
            cout<<"Node is empty";
        }
        head=head->next;
        head->prev=NULL;
        size--;
    }
    void DeleteAtTail(){
        if(size==0){
            cout<<"Node is empty";
        }
        tail=tail->prev;
        tail->next=NULL;
        size--;
    }
    void DeleteAt(int pos){
        if(pos<0 || pos>=size) return;
        if(pos==0) DeleteAtHead();
        else if(pos==size-1) DeleteAtTail();
        else if(pos==size){
            Node *temp=head;
            for(int i=0;i<pos-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
        }
        else{
            Node *temp=head;
            for(int i=0;i<pos-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
        }
    }
    int getAt(int pos){
        if(pos<0 || pos>=size) return -1;
        Node *temp=head;
        for(int i=0;i<pos;i++){
            temp=temp->next;
        }
        return temp->data;
    }
    int getAtRec(Node *temp,int pos){
        if(temp==NULL) return -1;
        if(pos==0) return temp->data;
        return getAtRec(temp->next,pos-1);
    }
};
int main(){
    DLL d;
    d.InsertAtEnd(10);
    d.InsertAtEnd(20);
    d.InsertAtEnd(30);
    d.InsertAtEnd(40);
    d.InsertAtEnd(50);
    d.display();
    d.InsertAtEnd(339);
    d.display();
    // d.displayRev();
    // d.displayRec(d.head);
    // d.displayRevRec(d.tail);
    d.InsertAtBegin(5);
    d.display();
    d.InsertAt(15,2);
    d.display();
    d.DeleteAtHead();
    d.display();
    d.DeleteAtTail();
    d.display();
    d.DeleteAt(3);
    d.display();
    cout<<d.getAt(2)<<endl;
    return 0;
}
