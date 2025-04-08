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
void HorLevel(Node *root,int &minLevel,int &maxLevel,int level){
     if(root ==NULL){ // base case
        return;
    }
    minLevel=min(minLevel,level);
    maxLevel=max(maxLevel,level);
    HorLevel(root->left,minLevel,maxLevel,level-1); // letf 
    HorLevel(root->right,minLevel,maxLevel,level+1); //right
}
void topView(vector<int> &top,Node * root,int level){
    if(root==NULL) return;
    if(top[level]==INT_MIN) top[level]=root->data;
    topView(top,root->left,level-1);
    topView(top,root->right,level+1);
}
void bottomView(vector<int> &top,Node * root,int level){
    if(root==NULL) return;
    top[level]=root->data;
    bottomView(top,root->left,level-1);
    bottomView(top,root->right,level+1);
}
int main(){
        // construct
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,9,INT_MIN,INT_MIN,7,INT_MIN,INT_MIN,INT_MIN,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node *root=construct(arr,n);
    levelOrder(root);
    int minLevel=0;
    int maxLevel=0;
    HorLevel(root,minLevel,maxLevel,0);
    // cout<<minLevel<<" "<<maxLevel;



    
    int horLevel=maxLevel-minLevel+1;
    vector<int> top(horLevel,INT_MIN);
    topView(top,root,-minLevel);
    for(int i=0;i<top.size();i++){
        cout<<top[i]<<" ";
    }
    cout<<endl;




    vector<int> bottom(horLevel,INT_MIN);
    bottomView(bottom,root,-minLevel);
    for(int i=0;i<bottom.size();i++){
        cout<<bottom[i]<<" ";
    }

}
