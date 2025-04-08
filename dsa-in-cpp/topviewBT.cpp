#include<Iostream>
#include<queue>
#include<climits>
#include<unordered_map>
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
void topview(Node *root){
    unordered_map<int,int>m; // <level,root->data>
    queue<pair<Node *,int> > q; // <Node ,level>
    pair<Node *,int> r;
    r.first=root;
    r.second=0;
    q.push(r);
    while(q.size()>0){
        Node *temp=(q.front()).first;
        int level=(q.front()).second;
        q.pop();
        if(m.find(level)==m.end()){
            m[level]=temp->data;
        }
        if(temp->left!=NULL){
            pair<Node *,int>p;
            p.first=temp->left;
            p.second=level-1;
            q.push(p);
        }
        if(temp->right!=NULL){
            pair<Node *,int>p;
            p.first=temp->right;
            p.second=level+1;
            q.push(p);
        }
    }
        int minlevel=INT_MAX;
        int maxlevel=INT_MIN;
        for(auto x:m){
            int level=x.first;
            minlevel=min(minlevel,level);
            maxlevel=max(maxlevel,level);
        }
        for(int i=minlevel;i<=maxlevel;i++){
            cout<<m[i]<<" ";
        }
        cout<<endl;
}
int main(){
        // construct
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node *root=construct(arr,n);
    LevelOrderQueue(root);
    topview(root);
}
