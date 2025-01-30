#include<iostream>
#include<stack>
using namespace std;
string solve(string v1,string v2,char oper){
    // pre to in 
    // prefix is like *+AB
    string s="";
    s+=v1;
    s.push_back(oper);
    s+=v2;
    return s;
}
int main(){
    // we need two stack one for val and one for operator
    stack<string>val;
    string s; 
    cout<<"enter the  expression";//postfix expression
    cin>>s;
    for(int i=s.length()-1;i>=0;i--){
        // check if s[i] is a digit (0->9)
        if(s[i]>=48 && s[i]<=57){// digit
            val.push(to_string(s[i]-'0'));
        }
        else { //s[i] it is -> *,+,-,/
        // kamm akro
        string val1=val.top();
        val.pop();
        string val2=val.top();
        val.pop();
        string ans=solve(val1,val2,s[i]);
        val.push(ans);
        }
    }
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3;
}