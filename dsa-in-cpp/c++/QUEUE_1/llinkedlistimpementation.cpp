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
class Queue { //User defined data structer 
public:
Node *head;
Node* tail;
int s;
Queue(){
    head=tail=NULL;
    s=0;
    }
    void push(int data){ // O(1)
        Node *temp=new Node(data);
        if(s==0) head=tail=temp;
        else {
            tail->next=temp;
            tail=temp;
        }
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Queue is empty"<<endl;
        }
        Node *temp=head;
        head=head->next;
        s--;
        delete temp; // wastage nahi ho rahi
    }
    void GetSize(){
        cout<<s<<endl;
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
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    int size(){
        return s;
    }
    bool isEmpty(){
        return s==0;
    }
};
int main(){
    // ADANTAGE
    // 1: unlimited size
    //2: natural,its like ll implementation
    //3: front and rear pointer
    //4: front->pop, rear->push
    //5: front->head, rear->tail
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();
    q.pop();
    q.display();
    q.pop();
    q.display();
    // DISADVANTAGE
    // 1: wastage of memory
    
}