#include <iostream>
#include <vector>

using namespace std;

class MaxHeap {
private:
    vector<int> heap; // Vector to store heap elements

    // Restores the heap property by moving an element up
    void heapify_up(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2; // Calculate parent index
            if (heap[index] > heap[parent]) { // If child is greater than parent, swap
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
            int left = 2 * index + 1; // Left child index
            int right = 2 * index + 2; // Right child index
            int largest = index; // Assume current index is the largest

            if (left < size && heap[left] > heap[largest]) {
                largest = left; // Update largest if left child is greater
            }
            if (right < size && heap[right] > heap[largest]) {
                largest = right; // Update largest if right child is greater
            }
            if (largest != index) { // If largest is not the current index, swap
                swap(heap[index], heap[largest]);
                index = largest; // Move down to the largest index
            } else {
                break; // Heap property is satisfied
            }
        }
    }

public:
    MaxHeap() {
        // Default constructor initializes an empty heap
    }
    
    // Inserts a new element into the heap
    void push(int value) {
        heap.push_back(value); // Add element to the end
        heapify_up(heap.size() - 1); // Restore heap property
    }

    // Removes and returns the maximum element from the heap
    int pop() {
        if (heap.empty()) {
            throw out_of_range("Heap is empty"); // Handle empty heap case
        }
        int max_value = heap[0]; // Store max value
        heap[0] = heap.back(); // Move last element to root
        heap.pop_back(); // Remove last element
        heapify_down(0); // Restore heap property
        return max_value; // Return the removed max element
    }

    // Returns the maximum element without removing it
    int peek() {
        if (heap.empty()) {
            throw out_of_range("Heap is empty"); // Handle empty heap case
        }
        return heap[0]; // Return the top element
    }
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
    MaxHeap hp;
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

    cout << "Top element: " << hp.peek() << endl; // Expected: 30
    while (!hp.is_empty()) {
        cout << "Popped: " << hp.pop() << endl; // Remove elements one by one
        hp.display();
    }
    return 0;
}
