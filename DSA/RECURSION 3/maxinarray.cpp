#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void maxArray(vector<int>&v,int idx,int max){
    if(idx==v.size()) {
        cout<<"largest ellement is"<<max<<" ";
        return;
    }
    if(max<=v[idx]) max=v[idx];
     maxArray(v,idx+1,max);
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
    maxArray(v,0,INT_MIN);
}