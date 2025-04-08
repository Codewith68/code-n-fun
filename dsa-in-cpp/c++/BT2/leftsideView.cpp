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
int Levels(Node *root){
    if(root ==NULL){
        return 0;
    }
        return 1+max(Levels(root->left),Levels(root->right));
    }
void levelOrder(Node *root){
    int n=Levels(root);
    for(int i=1;i<=n;i++){
        NthLevel(root,1,i);
        cout<<endl;
    }
}
void leftview(Node *root,vector<int> &ans,int level){
    if(root ==NULL){ // base case
        return;
    }
    ans[level]=root->data; 
    leftview(root->right,ans,level+1); //right
    leftview(root->left,ans,level+1); // letf
}

int main(){
        // construct
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,9,INT_MIN,INT_MIN,7,INT_MIN,INT_MIN,INT_MIN,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node *root=construct(arr,n);
    vector<int> ans(Levels(root),0);
    leftview(root,ans,0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}
