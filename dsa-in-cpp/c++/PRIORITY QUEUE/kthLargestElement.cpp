#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    if (k > n) {
        cout << "Invalid input: k should be <= array size" << endl;
        return 1;
    }

    // Min-heap to store the k largest elements
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
        if (pq.size() > k) {
            pq.pop();  // Remove the smallest element to maintain k largest elements
        }
    }

    cout << "The " << k << "-th largest element is: " << pq.top() << endl;

    return 0;
}
