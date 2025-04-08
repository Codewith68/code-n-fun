#include<Iostream>
#include<queue>
#include<climits>
#include<stack>
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
Node* findInorderSuccsesor(Node* root, int key) {
    stack<Node*> s;
    Node* curr = root;
    Node* prev = NULL;

    while (curr != NULL || !s.empty()) {
        while (curr != NULL) {
            s.push(curr);
            curr = curr->right;
        }
        curr = s.top();
        s.pop();
        if (curr->data == key) {
            return prev;
        }
        prev = curr;
        curr = curr->left;
    }
    return NULL; // Key not found
}
int main(){
        // construct
    int arr[]={10,5,20,2,8,15,25,INT_MIN,4,INT_MIN,INT_MIN,12,INT_MIN,INT_MIN,INT_MIN,3,INT_MIN,INT_MIN,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node *root=construct(arr,n);
    int key=12;
    Node * p=findInorderSuccsesor(root,key);
    if (p)
        cout << "successor of " << key << " is: " << p->data << endl;
    else
        cout << "No successor found for " << key << endl;
}
