#include<iostream>
#include<queue>
using namespace std;
class Queue{
    public:
    int front,rear;
    int arr[5];
    Queue(){
        front=-1;
        rear=-1;
        for(int i=0;i<5;i++){
            arr[i]=0;
        }
    }
    bool isEmpty(){
        if(front==-1 && rear==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if(rear==4){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int val){
        if(isFull()){
            cout<<"Queue is full"<<endl;
            return;
        }
        else if(isEmpty()){
            rear=0;
            front=0;
            arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else if(front==rear){
            arr[front]=0;
            front=-1;
            rear=-1;
        }
        else{
            arr[front]=0;
            front++;
        }
    }
    void frontElement(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Front element is "<<arr[front]<<endl;
    }
    void backElement(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Back element is "<<arr[rear]<<endl;
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();
    q.pop();
    q.display();
    q.frontElement();
    q.backElement();
    q.pop();
    q.display();
}