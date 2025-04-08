#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Solution {
    public:
        int lastStoneWeight(vector<int>& stones) {
            priority_queue<int> pq(stones.begin(),stones.end());
            while(pq.size()>1){
                int p1=pq.top(); // 1st maximum
                pq.pop();
                int p2=pq.top(); // 2nd maximum
                pq.pop();
                
                int sub=abs(p1-p2);
                if(sub!=0) pq.push(sub);
            }
            if(pq.size()==0) return 0;
            return pq.top();
        }
    };
    int main(){
        Solution s;
        vector<int> stones={2,7,4,1,8,1};
        int result=s.lastStoneWeight(stones);
        cout << "Last remaining stone weight: " << result << endl;

    }