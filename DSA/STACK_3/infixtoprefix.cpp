#include<iostream>
#include<stack>
using namespace std;
int prio(char c){
    if(c=='+' || c=='-'){
        return 1;
    }
else return 2;
}
string eval(string v1,string v2,char oper){
    // we have to  store the prefix  result in string
    // prefix is ->op,val1.val2
    string ans="";
    ans.push_back(oper);
    ans+=v1;
    ans+=v2;
    return ans;
}
int main(){
    // we need two stack one for val and one for operator
    stack<string>val;
    stack<char>op;
    string s; 
    cout<<"enter the infix expression";//infix expression
    cin>>s;
    for(int i=0;i<s.length();i++){
        // check if s[i] is a digit (0->9)
        if(s[i]>=48 && s[i]<=57){// digit
            val.push(to_string(s[i]-'0'));
        }
        else { //s[i] it is -> *,+,-,/,(,)
        if(op.empty()) op.push(s[i]);
        else if(s[i]=='(') op.push(s[i]);
        else if(op.top()== '(') op.push(s[i]);
        else if(s[i]==')'){
            while(op.top()!='('){
                string v2=val.top();
                val.pop();
                string v1=val.top();
                val.pop();
                char oper=op.top();
                op.pop();
                string ans=eval(v1,v2,oper);
                val.push(ans);
            }
            op.pop();
        }
        else if(prio(s[i])> prio(op.top())){
            op.push(s[i]);
        }
        else{ // priority(s[i])<=prio(op.top())
            while(!op.empty() && prio(s[i])<=prio(op.top())){
                string v2=val.top();
                val.pop();
                string v1=val.top();
                val.pop();
                char oper=op.top();
                op.pop();
                string ans=eval(v1,v2,oper);
                val.push(ans);
            }
            op.push(s[i]);
        }

        }
    }
    // the opetaor stack is not empty
    // so make it empty
    while(!op.empty()){
        string v2=val.top();
        val.pop();
        string v1=val.top();
        val.pop();
        char oper=op.top();
        op.pop();
        string ans=eval(v1,v2,oper);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3<<endl;
}