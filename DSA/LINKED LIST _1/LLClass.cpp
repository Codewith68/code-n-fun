
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
    void InsertAtEnd(int data){ // O(1)
        Node *temp=new Node(data);
        if(size==0) head=tail=temp;
        else {
            tail->next=temp;
            tail=temp;
        }
        size++;
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
    void InsertAt(int data,int pos){ //O(n)
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
            temp1->next=temp;
            size++;
        }
    }
    int getIndexOf(int data){  //O(n)
        Node *temp=head;
        int index=0;
        while(temp!=NULL){
            if(temp->data==data) return index;
            temp=temp->next;
            index++;
        }
        return -1;
    }
    int getAtIdx(int idx){
        if(idx<0 || idx >=size){
                cout<<"invalid index";
                return -1;
            }
                else if(idx==0) return head->data;
                else if(idx==size-1) return tail->data;
            else {
                Node *temp=head;
                for(int i=0;i<idx;i++){
                            temp=temp->next;
                    }
                return temp->data;

            }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"Node is empty";
        }
        head=head->next;
        size--;
    } 
    void DeleteAtTail(){
        Node *temp=head;
        if(size==0){
            cout<<"Node is empty";
        }
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }  
    void DeleteAtIdx(int idx){
        if(size==0){
            cout<<"Node is empty";
        }
        else if(idx<0 || idx>=size) cout<<"invalid index";
        else if(idx==size-1) return DeleteAtTail();
        else if(idx==0) return deleteAtHead();
        else {
            Node *temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
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
};
int main(){
    LinkedList ll;// { }
    ll.InsertAtEnd(20); //{ 20 ->NULL}
    ll.display();
    ll.InsertAtEnd(30); //{ 20 ->30 ->NULL}
    ll.display();
    ll.InsertAtBegin(10); //{ 10 ->20 ->30 ->NULL}
    ll.display();
    ll.InsertAt(40,1); //{ 10 ->20 ->30 ->40 ->NULL}
    ll.display();
    cout<<ll.getIndexOf(30)<<endl;
    cout<<ll.getAtIdx(3)<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.DeleteAtTail();
    ll.display();
    ll.DeleteAtIdx(1);
    ll.display();
}