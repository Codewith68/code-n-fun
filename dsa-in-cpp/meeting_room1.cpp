#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Definition of Interval
class Interval {
public:
    int start, end;
    Interval(int start, int end) {
        this->start = start;
        this->end = end;
    }
};

class Solution {
public:
    bool minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.size()==0) return true;
        vector<int> start, end;
        
        for (const auto& i : intervals) {
            start.push_back(i.start);
            end.push_back(i.end);
        }
        
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        
        int res = 0, count = 0, s = 0, e = 0;
        while (s < intervals.size()) {
            if (start[s] < end[e]) {
                s++;
                count++;
            } else {
                e++;
                count--;
            }
            res = max(res, count);
        }
        return res==1;
    }
};

// Main function to test the solution
int main() {
    vector<Interval> intervals = {
        Interval(7, 10),
        Interval(2, 4)
    };

    Solution sol;
    bool result = sol.minMeetingRooms(intervals);
    
    cout << (result ? "Can attend all meetings" : "Cannot attend all meetings") << endl;

    return 0;
}
