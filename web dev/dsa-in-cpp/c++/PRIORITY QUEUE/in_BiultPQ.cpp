#include<iostream>
#include<queue>
using namespace std;
int main(){
    vector<int> arr = {3, 5, 1, 10, 2, 7, 6, 4, 8, 9};
    priority_queue<int,vector<int>,less<int> > Maxheap; //MaxHeap
    priority_queue<int,vector<int> ,greater<int> > hp; //MinHeap
    priority_queue<int,vector<int> ,less<int> > Maxhpvector(arr.begin(),arr.end());
    priority_queue<int,vector<int> ,greater<int> > Minhpvector(arr.begin(),arr.end());
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);

 cout<<hp.top()<<endl;
 cout<<Maxhpvector.top()<<endl;
 cout<<Minhpvector.top()<<endl;
}
