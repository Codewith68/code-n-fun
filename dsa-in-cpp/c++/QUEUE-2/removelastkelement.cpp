#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int>q;
    for(int i=1;i<=5;i++){
        q.push(i);
    }
    int k=3;
    int n=q.size();
    queue<int>temp;
    for(int i=1;i<=n-k;i++){
        temp.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        q.pop();
    }
    swap(q,temp);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    //TC=O(n)
    //SC=O(n)
}