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
    int minCost=0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
    }
    while(pq.size()>1){
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        pq.push(x+y);
        minCost+=(x+y);
    }
    cout<<minCost<<endl;
}