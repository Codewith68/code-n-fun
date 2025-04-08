#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int maxArray(vector<int>&v,int idx){
    if(idx==v.size()) return INT_MIN;
    return max(v[idx],maxArray(v,idx+1));
}
int main(){
    int x;
    cout<<"enter the size of the array :";
    cin>>x;
    vector<int> v;
    cout<<"insert the elements :"<<endl;
    for(int i=0;i<=x-1;i++){
        int s;
        cout<<"enter the element "<<i+1<<": ";
        cin>>s;
        v.push_back(s);
    }
    cout<<maxArray(v,0);
}