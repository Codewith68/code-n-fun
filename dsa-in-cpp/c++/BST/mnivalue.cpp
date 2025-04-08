#include<Iostream>
#include<queue>
#include<climits>
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
Node * construct(int arr[],int n){
    queue<Node *>q;
    Node *root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node *temp=q.front();
        q.pop();
        Node *l;
        Node *r;
        if(arr[i]!=INT_MIN)  l=new Node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN)  r=new Node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
void LevelOrderQueue(Node *root){ // BFS VVVIMPP
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
int MinVlaue(Node *root){
    if(root==NULL) return INT_MAX;
    int lmin=MinVlaue(root->left);
    int rmin=MinVlaue(root->right);
    return min(root->data,min(lmin,rmin));
}
int main(){
        // construct
    int arr[]={40,30,50,25,35,45,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node *root=construct(arr,n);
    LevelOrderQueue(root);
    cout<<MinVlaue(root);
}
