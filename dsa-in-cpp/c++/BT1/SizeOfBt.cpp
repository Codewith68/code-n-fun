#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node *root){   
    if(root==NULL) return;
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}
int SizeOfTree(Node *root){
    if(root==NULL) return 0;
    return 1+SizeOfTree(root->left)+SizeOfTree(root->right);
}
int MaxValue(Node *root){
    if(root==NULL) return INT_MIN;
    return max(root->data,max(MaxValue(root->left),MaxValue(root->right)));
}
int MinVlaue(Node *root){
    if(root==NULL) return INT_MAX;
    int lmin=MinVlaue(root->left);
    int rmin=MinVlaue(root->right);
    return min(root->data,min(lmin,rmin));
}
int main(){
    Node *a=new Node(1);
    Node *b=new Node(2);
    Node *c=new Node(3);
    Node *d=new Node(4);
    Node *e=new Node(15);
    Node *f=new Node(6);
    Node *g=new Node(7);
    Node *h=new Node(8);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    e->left=f;
    c->left=g;
    c->right=h;
    display(a);
    cout<<endl;
    cout<<SizeOfTree(a)<<endl;
    cout<<MaxValue(a)<<endl;
    cout<<MinVlaue(a);
}