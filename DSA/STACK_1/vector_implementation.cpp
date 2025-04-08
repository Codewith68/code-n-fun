#include<iostream>
#include<vector>
using namespace std;
class stack{
    public:
    vector<int>v;
    void push(int val){
        v.push_back(val);
    }
    int pop(){
        int x=v[v.size()-1];
        v.pop_back();
        return x;
    }
    int peek(int index){
        return v[v.size()-1-index];
    }
    int stackTop(){
        return v[v.size()-1];
    }
    int isEmpty(){
        if(v.size()==0){
            return 1;
        }
        return 0;
    }
};
int main(){
stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
cout<<st.peek(2)<<endl;
cout<<st.stackTop()<<endl;
cout<<st.isEmpty()<<endl;
}