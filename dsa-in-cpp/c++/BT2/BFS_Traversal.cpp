#include<Iostream>
#include<queue>
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
void NthLevel(Node *root, int curr,int level){
    if(root ==NULL){ // base case
        return;
    }
    if(curr==level) {
        cout<<root->data<<" ";// root
        return;
    }
    NthLevel(root->left,curr+1,level); // letf 
    NthLevel(root->right,curr+1,level); //right
}
void NthLevelRev(Node *root, int curr,int level){
    if(root ==NULL){ // base case
        return;
    }
    if(curr==level) {
        cout<<root->data<<" ";// root
        return;
    }
    NthLevelRev(root->right,curr+1,level); //right
    NthLevelRev(root->left,curr+1,level); // letf 
}
int Levels(Node *root){
    if(root ==NULL){
        return 0;
    }
        return 1+max(Levels(root->left),Levels(root->right));
    }
void levelOrder(Node *root){
    int n=Levels(root);
    for(int i=1;i<=n;i++){
        NthLevelRev(root,1,i);
        cout<<endl;
    }
}
void LevelOrderQueue(Node *root){
    queue<Node* >q;
    q.push(root);
    while(!q.empty()){
        Node *temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }    
    cout<<endl;
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
    LevelOrderQueue(a);
    cout<<endl;

}
