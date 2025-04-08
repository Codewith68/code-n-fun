#include<iostream>
#include<stack>
using namespace std;
string Rmoveduplicates(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(st.empty() || st.top()!=s[i]){
            st.push(s[i]);
        }
    }
    string ans="";
    while(!st.empty()){
        ans=st.top()+ans;
        st.pop();
    }
    return ans;

}
int main(){
    string s="aaabccdeeeggggeeffgr";
    cout<<s<<endl;
    cout<<Rmoveduplicates(s)<<endl;
    


}