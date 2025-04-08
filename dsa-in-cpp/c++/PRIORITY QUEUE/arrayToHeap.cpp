#include <iostream>
#include <vector>

using namespace std;

class Heap {
private:
    vector<int> heap; // Stores the heap elements
    bool isMaxHeap;   // Determines if it's a Max Heap or Min Heap

    // Heapify-down function to maintain heap property
    void heapify_down(int index) {
        int size = heap.size();
        while (true) {
            int left = 2 * index + 1; // Left child index
            int right = 2 * index + 2; // Right child index
            int extreme = index; // Assume current index is the largest/smallest

            // Condition for Max Heap (>) or Min Heap (<)
            if (left < size && ((isMaxHeap && heap[left] > heap[extreme]) || (!isMaxHeap && heap[left] < heap[extreme]))) {
                extreme = left;
            }
            if (right < size && ((isMaxHeap && heap[right] > heap[extreme]) || (!isMaxHeap && heap[right] < heap[extreme]))) {
                extreme = right;
            }
            if (extreme != index) { // If swap is needed
                swap(heap[index], heap[extreme]);
                index = extreme; // Move down to continue heapify
            } else {
                break; // Heap property is satisfied
            }
        }
    }

    // Heapify-up function to maintain heap property after insertion
    void heapify_up(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if ((isMaxHeap && heap[index] > heap[parent]) || (!isMaxHeap && heap[index] < heap[parent])) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else {
                break; // Heap property is satisfied
            }
        }
    }

public:
    // Constructor: Converts a given array into a heap
    Heap(vector<int>& arr, bool isMaxHeap) {
        this->heap = arr;
        this->isMaxHeap = isMaxHeap;
        int startIdx = (heap.size() / 2) - 1; // Start heapify from the last parent node

        // Heapify process (O(n) complexity)
        for (int i = startIdx; i >= 0; i--) {
            heapify_down(i);
        }
    }

    // Inserts a new element into the heap
    void push(int value) {
        heap.push_back(value); // Add element to the end
        heapify_up(heap.size() - 1); // Restore heap property
    }

    // Removes and returns the top element from the heap
    int pop() {
        if (heap.empty()) {
            throw out_of_range("Heap is empty!"); // Handle empty heap case
        }
        int topValue = heap[0]; // Store the top element
        heap[0] = heap.back(); // Move last element to root
        heap.pop_back(); // Remove last element
        if (!heap.empty()) heapify_down(0); // Restore heap property if elements remain
        return topValue; // Return removed element
    }

    // Returns the top element without removing it
    int peek() {
        if (heap.empty()) {
            throw out_of_range("Heap is empty!");
        }
        return heap[0];
    }

    // Display the heap
    void display() const {
        cout << "[ ";
        for (int val : heap) {
            cout << val << " ";
        }
        cout << "]\n";
    }

    // Checks if the heap is empty
    bool is_empty() {
        return heap.empty();
    }
};

int main() {
    vector<int> arr = {3, 5, 1, 10, 2, 7, 6, 4, 8, 9};

    cout << "Original array:\n[ ";
    for (int val : arr) cout << val << " ";
    cout << "]\n";

    // Convert to Max Heap
    Heap maxHeap(arr, true);
    cout << "Max Heap:\n";
    maxHeap.display();

    // Insert new elements
    cout << "Adding 15 to Max Heap...\n";
    maxHeap.push(15);
    maxHeap.display();

    cout << "Adding 20 to Max Heap...\n";
    maxHeap.push(20);
    maxHeap.display();

    // Remove elements
    cout << "Removing elements from Max Heap:\n";
    while (!maxHeap.is_empty()) {
        cout << "Popped: " << maxHeap.pop() << "\n";
        maxHeap.display();
    }

    // Convert to Min Heap
    Heap minHeap(arr, false);
    cout << "\nMin Heap:\n";
    minHeap.display();

    // Insert new elements
    cout << "Adding -5 to Min Heap...\n";
    minHeap.push(-5);
    minHeap.display();

    cout << "Adding 0 to Min Heap...\n";
    minHeap.push(0);
    minHeap.display();

    // Remove elements
    cout << "Removing elements from Min Heap:\n";
    while (!minHeap.is_empty()) {
        cout << "Popped: " << minHeap.pop() << "\n";
        minHeap.display();
    }

    return 0;
}
