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
void Display(Node *root){
    if(root ==NULL){
        return;
    }
    cout<<root->data<<" ";
    Display(root->left);
    Display(root->right);
}
int ProductOfTreeDisplay(Node *root){
    if(root ==NULL){
        return 1;
    }
    return root->data*ProductOfTreeDisplay(root->left)*ProductOfTreeDisplay(root->right);
}
int main(){
    Node *a=new Node(1);
    Node *b=new Node(2);
    Node *c=new Node(3);
    Node *d=new Node(4);
    Node *e=new Node(5);
    Node *f=new Node(6);
    Node *g=new Node(789);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    Display(a);
    cout<<endl;
    cout<<ProductOfTreeDisplay(a);    
}