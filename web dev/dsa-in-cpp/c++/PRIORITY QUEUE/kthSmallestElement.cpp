#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int x;
    cout << "Enter the size of the array: ";
    cin >> x;

    vector<int> v(x);
    cout << "Insert the elements: ";
    for (int i = 0; i < x; i++) {
        cin >> v[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    if (k > x) {
        cout << "Invalid input: k should be <= array size" << endl;
        return 1;  // Exit with error
    }

    // Max-heap to store the k smallest elements
    priority_queue<int> pq;

    for (int i = 0; i < x; i++) {
        pq.push(v[i]);
        if (pq.size() > k) {
            pq.pop();  // Remove the largest element to maintain k smallest elements
        }
    }

    cout << "The " << k << "-th smallest element is: " << pq.top() << endl;

    return 0;

    //tc=(nlogk);
}
