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

// Perform inorder traversal and store elements in a vector
void inorderTraversal(Node* root, vector<int>& inorder) {
    if (!root) return;
    inorderTraversal(root->left, inorder);
    inorder.push_back(root->data);
    inorderTraversal(root->right, inorder);
}

// Convert BST to Min Heap by replacing node values using inorder traversal result
void convertToMinHeap(Node* root, vector<int>& inorder, int& index) {
    if (!root) return;
    root->data = inorder[index++]; // Assign values in level-order fashion
    convertToMinHeap(root->left, inorder, index);
    convertToMinHeap(root->right, inorder, index);
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

// Convert BST to Min Heap
void BSTtoMinHeap(Node* root) {
    vector<int> inorder;
    inorderTraversal(root, inorder); // Get sorted elements
    int index = 0;
    convertToMinHeap(root, inorder, index); // Overwrite nodes with heap values
}

int main() {
    int arr[] = {4, 2, 6, 1, 3, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = construct(arr, n);
    
    cout << "Original Level Order: ";
    LevelOrderQueue(root);
    
    BSTtoMinHeap(root);
    
    cout << "After Converting to Min Heap: ";
    LevelOrderQueue(root);
    
    return 0;
}
