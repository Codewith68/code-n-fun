#include<iostream>
#include<stack>
using namespace std;
int solve(int v1,int v2,char oper){
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
    string s; 
    cout<<"enter the  expression";//postfix expression
    cin>>s;
    for(int i=s.length()-1;i>=0;i--){
        // check if s[i] is a digit (0->9)
        if(s[i]>=48 && s[i]<=57){// digit
            val.push(s[i]-'0');
        }
        else { //s[i] it is -> *,+,-,/
        // kamm akro
        int val1=val.top();
        val.pop();
        int val2=val.top();
        val.pop();
        int ans=solve(val1,val2,s[i]);
        val.push(ans);
        }
    }
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3;
}