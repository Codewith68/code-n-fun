#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> prefixarray(vector<int> &nums){
    for(int i=1;i<nums.size();i++) nums[i]+=nums[i-1];
  return nums;
}
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    vector<int>nums(x);
    for(int i=0;i<=x-1;i++){
        cin>>nums[i];
    }
    prefixarray(nums);
    for( auto x:nums){
        cout<<x<<" ";
    }
}