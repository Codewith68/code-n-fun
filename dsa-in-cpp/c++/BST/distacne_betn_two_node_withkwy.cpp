#include<Iostream>
#include<queue>
#include<climits>
#include<algorithm>
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
int rootToNode(Node *root,int k){
    if(!root) return 0;
    if(root->data ==k) return 0;
    if(root->data>k) return 1+rootToNode(root->left,k);
    return 1+rootToNode(root->right,k);
}
int distance(Node * root,int k1,int k2){
        if(!root) return 0;
        if(root->data >k1 && root->data >k2) return distance(root->left,k1,k2);
        if(root->data <k1 && root->data <k2) return distance(root->right,k1,k2);
        if(root->data >=k1 && root->data <=k2) return rootToNode(root,k1) +rootToNode(root,k2);
}
int main(){
        // construct
    int arr[]={40,25,50,20,30,45,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node *root=construct(arr,n);
    int k1=40,k2=45;
    if(k1>k2) swap(k1,k2);
    cout<<distance(root,k1,k2);

}
