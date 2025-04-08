#include<iostream>
using namespace std;
#include<stack>
bool isBalanced(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.empty() || st.top()!='('){
                return false;
            }
            st.pop();
        }
        else if(s[i]=='}'){
            if(st.empty() || st.top()!='{'){
                return false;
            }
            st.pop();
        }
        else if(s[i]==']'){
            if(st.empty() || st.top()!='['){
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
int main(){
    string s;
    cin>>s;
    if(isBalanced(s)){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    return 0;

}