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

    // Min-heap to store the k largest elements
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int>ans;
    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
        if (pq.size() > k) {
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}