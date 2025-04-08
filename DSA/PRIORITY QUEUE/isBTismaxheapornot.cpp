#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

// Definition of a tree node
class Node {
public:
    int data;
    Node *left, *right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to check if a given binary tree satisfies Max Heap property
bool isMaxHeap(Node* root) {
    if (!root) return true;
    queue<Node*> q;
    q.push(root);
    bool nullChildEncountered = false;
    
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        // Check left child
        if (temp->left) {
            if (nullChildEncountered || temp->left->data > temp->data) 
                return false;
            q.push(temp->left);
        } else {
            nullChildEncountered = true; // Once a NULL child is found, all subsequent nodes must be leaf nodes
        }
        
        // Check right child
        if (temp->right) {
            if (nullChildEncountered || temp->right->data > temp->data) 
                return false;
            q.push(temp->right);
        } else {
            nullChildEncountered = true;
        }
    }
    return true;
}

// Construct a binary tree from given array
Node* construct(int arr[], int n) {
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1, j = 2;
    while (!q.empty() && i < n) {
        Node* temp = q.front();
        q.pop();
        
        // Create left and right children based on array values
        Node* l = (arr[i] != INT_MIN) ? new Node(arr[i]) : NULL;
        Node* r = (j != n && arr[j] != INT_MIN) ? new Node(arr[j]) : NULL;
        temp->left = l;
        temp->right = r;
        
        // Push non-null children into queue
        if (l) q.push(l);
        if (r) q.push(r);
        
        i += 2;
        j += 2;
    }
    return root;
}

// Print level-order traversal of the tree
void LevelOrderQueue(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
    cout << endl;
}

int main() {
    int arr[] = {16, 9, 8, 7, 6, 5, 4}; // Example of a Max Heap
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = construct(arr, n);
    
    cout << "Level Order Traversal: ";
    LevelOrderQueue(root);
    
    if (isMaxHeap(root)) {
        cout << "The given binary tree is a Max Heap." << endl;
    } else {
        cout << "The given binary tree is NOT a Max Heap." << endl;
    }
    
    return 0;
}
