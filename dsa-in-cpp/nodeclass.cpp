
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
void display(Node *head){
           Node *temp=head;
           while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
           }
           cout<<"NULL"<<endl;
}
int size(Node *head){
    Node *temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
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

void displayReverse(Node *head){
    if(head==NULL) {
        cout<<"NULL"<<" ";
        return;
    }
    displayReverse(head->next);
    cout<<head->data<<" ";
}
 void InsertAtEnd(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL) head=temp;
    else{
        Node *temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
}

int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    Node *e=new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;


displayRec(a);
display(a);
displayReverse(a);
cout<<endl;
InsertAtEnd(a,60);

cout<<"Size of linked list is: "<<size(a)<<endl;
      
}