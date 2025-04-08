#include<iostream>
#include<stack>
using namespace std;
int prio(char c){
    if(c=='+' || c=='-'){
        return 1;
    }
else return 2;
}
int eval(int v1,int v2,char oper){
    if(oper=='+'){
        return v1+v2;
    }
    else if(oper=='-'){
        return v1-v2;
    }
    else if(oper=='*'){
        return v1*v2;
    }
    else if(oper=='/'){
        return v1/v2;
    }
}
int main(){
    // we need two stack one for val and one for operator
    stack<int>val;
    stack<char>op;
    string s; 
    cout<<"enter the infix expression";//infix expression
    cin>>s;
    for(int i=0;i<s.length();i++){
        // check if s[i] is a digit (0->9)
        if(s[i]>=48 && s[i]<=57){// digit
            val.push(s[i]-'0');
        }
        else { //s[i] it is -> *,+,-,/
        if(op.empty() || prio(s[i])> prio(op.top())){
            op.push(s[i]);
        }
        else{ // priority(s[i])<=prio(op.top())
            while(!op.empty() && prio(s[i])<=prio(op.top())){
                int v2=val.top();
                val.pop();
                int v1=val.top();
                val.pop();
                char oper=op.top();
                op.pop();
                int ans=eval(v1,v2,oper);
                val.push(ans);
            }
            op.push(s[i]);
        }

        }
    }
    // the opetaor stack is not empty
    // so make it empty
    while(!op.empty()){
        int v2=val.top();
        val.pop();
        int v1=val.top();
        val.pop();
        char oper=op.top();
        op.pop();
        int ans=eval(v1,v2,oper);
        val.push(ans);
    }
    cout<<val.top()<<endl;
}