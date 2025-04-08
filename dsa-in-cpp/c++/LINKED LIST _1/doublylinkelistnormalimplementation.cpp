
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
void display(Node *head){
           Node *temp=head;
           while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
           }
           cout<<"NULL"<<endl;
}
void displayRec(Node *head){// using recursion
    Node *temp=head;
    if(temp==NULL){ // base case
        cout<<"NULL"<<endl;
        return;
    }
    cout<<temp->data<<" "; //kaam
    displayRec(temp->next);// call
}
void displayrev(Node *tail){// 
    while(tail!=NULL){
        cout<<tail->data<<" ";
        tail=tail->prev;
    }
}
int main(){
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    display(head);
    displayRec(head);
    displayrev(temp2);
}