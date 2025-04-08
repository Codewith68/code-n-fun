#include <iostream>
#include <vector>

using namespace std;

// as smae as DOWNHEPIFY IN THE MAXHEAP
// Function to heapify a subtree rooted at index 'i' in an array of size 'n'
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;      // Assume root is the largest
    int left = 2 * i + 1; // Left child index
    int right = 2 * i + 2;// Right child index

    // If left child exists and is greater than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child exists and is greater than the current largest
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root, swap and continue heapifying
    if (largest != i) {
        swap(arr[i], arr[largest]); // Swap root with largest
        heapify(arr, n, largest);   // Recursively heapify the affected subtree
    }
}

// Function to perform Heap Sort on the given array
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Step 1: Build a Max Heap (rearrange the array)
    for (int i = n / 2 - 1; i >= 0; i--)  // Start from last non-leaf node
        heapify(arr, n, i);

    // Step 2: Extract elements one by one from heap
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]); // Move current largest element (root) to end
        heapify(arr, i, 0);   // Heapify reduced heap
    }
}

// Function to print an array
void printArray(const vector<int>& arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

// Driver Code
int main() {
    vector<int> arr = {82323474, 8491249, 3783892, 782374839, 40}; // Input array

    cout << "Original array: ";
    printArray(arr);
    //heapify(arr,arr.size(),0);

    heapSort(arr); // Sort the array using Heap Sort

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
// TC=O(nlogn);
// SC=O(1);
