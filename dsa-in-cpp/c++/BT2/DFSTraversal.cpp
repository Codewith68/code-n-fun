#include<Iostream>
using namespace std;
class Node{ // this is a tree  node class
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void PreOrder(Node *root){
    if(root ==NULL){ // base case
        return;
    }
    cout<<root->data<<" ";// root
    PreOrder(root->left); // letf 
    PreOrder(root->right); //right
}
void InOrder(Node *root){
    if(root ==NULL){ // base case
        return;
    }
    InOrder(root->left); // letf 
    cout<<root->data<<" ";// root
    InOrder(root->right); //right
} 
void PostOrder(Node *root){
    if(root ==NULL){ // base case
        return;
    }
    PostOrder(root->left); // letf 
    PostOrder(root->right); //right
    cout<<root->data<<" ";// root
} 

int main(){
    Node *a=new Node(1);
    Node *b=new Node(2);
    Node *c=new Node(3);
    Node *d=new Node(4);
    Node *e=new Node(5);
    Node *f=new Node(6);
    Node *g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    PreOrder(a);
    cout<<endl;
    InOrder(a); 
    cout<<endl;
    PostOrder(a);


}
