
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
class LinkedList { //User defined data structer 
public:
Node *head;
Node* tail;
int size;
LinkedList(){
    head=tail=NULL;
    size=0;
    }

    void InsertAtBegin(int data){ //O(1)
        Node *temp=new Node(data);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void GetSize(){
        cout<<size<<endl;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void Addcycle(int pos){
        Node *temp=head;
        Node *cycle;
        int index=0;
        while(temp->next!=NULL){
            if(index==pos){
                cycle=temp;
            }
            temp=temp->next;
            index++;
        }
        temp->next=cycle;
    }
    void findlength(){
        Node *slow=head;
        Node *fast=head;
        bool cycle=false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                cycle=true;
                break;
            }
        }
        if(cycle){
            int count=1;
            slow=slow->next;
            while(slow!=fast){
                slow=slow->next;
                count++;
            }
            cout<<count<<endl;
        }
        else cout<<"No cycle"<<endl;
    }

};
int main(){
    LinkedList ll;
    ll.InsertAtBegin(10);
    ll.InsertAtBegin(20);
    ll.InsertAtBegin(30);
    ll.InsertAtBegin(40);
    ll.InsertAtBegin(50);
    ll.Addcycle(3);
    ll.findlength();
    return 0;
}