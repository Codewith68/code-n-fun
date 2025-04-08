#include <iostream>
#include <vector>

using namespace std;

class MinHeap { //  MinHeap
private:
    vector<int> heap; // Vector to store heap elements

    // Restores the heap property by moving an element up
    void heapify_up(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2; // Calculate parent index
            if (heap[index] < heap[parent]) { // If child is smaller than parent, swap
                swap(heap[index], heap[parent]);
                index = parent; // Move up to parent index
            } else {
                break; // Heap property is satisfied
            }
        }
    }

    // Restores the heap property by moving an element down
    void heapify_down(int index) {
        int size = heap.size();
        while (true) {
            int left = 2 * index + 1;  // Left child index
            int right = 2 * index + 2; // Right child index
            int smallest = index;      // Assume current index is the smallest

            // Check if left child is smaller
            if (left < size && heap[left] < heap[smallest]) {
                smallest = left;
            }
            // Check if right child is smaller
            if (right < size && heap[right] < heap[smallest]) {
                smallest = right;
            }

            if (smallest != index) { // If smallest is not the current index, swap
                swap(heap[index], heap[smallest]);
                index = smallest; // Move down to the smallest index
            } else {
                break; // Heap property is satisfied
            }
        }
    }

public:
    MinHeap() {
        // Default constructor initializes an empty heap
    }
    
    // Inserts a new element into the heap
    void push(int value) {
        heap.push_back(value); // Add element to the end
        heapify_up(heap.size() - 1); // Restore heap property
    }

    // Removes and returns the minimum element from the heap
    int pop() {
        if (heap.empty()) {
            throw out_of_range("Heap is empty"); // Handle empty heap case
        }
        int min_value = heap[0]; // Store min value
        heap[0] = heap.back(); // Move last element to root
        heap.pop_back(); // Remove last element
        heapify_down(0); // Restore heap property
        return min_value; // Return the removed min element
    }

    // Returns the minimum element without removing it
    int peek() {
        if (heap.empty()) {
            throw out_of_range("Heap is empty"); // Handle empty heap case
        }
        return heap[0]; // Return the top element
    }

    // Displays the heap
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
    MinHeap hp; //  MinHeap
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);

    hp.display();

    cout << "Top element: " << hp.peek() << endl; // Expected: -1 (smallest element)
    while (!hp.is_empty()) {
        cout << "Popped: " << hp.pop() << endl; // Remove elements one by one
        hp.display();
    }
    return 0;
}
