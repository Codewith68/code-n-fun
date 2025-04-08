#include<bits/stdc++.h>
using namespace std;
void subsets(string s,string str,int idx){
    if(idx==str.length()) {
        cout<<s<<endl;
        return;
    }
        subsets(s,str,idx+1);
        char ch=str[idx];
        subsets(s+ch,str,idx+1);
}
void sobset(string s,string original){
    if(original.empty()){
        cout<<s<<endl;
        return;
    }
    char ch=original[0];
    sobset(s,original.substr(1));
    sobset(s+ch,original.substr(1));
}
void storesubset(string ans,string str,vector<string>&v,int idx){
               if(idx==str.length()) {
             v.push_back(ans);
             return;
               }
    char ch=str[idx];
        storesubset(ans,str,v,idx+1);
        storesubset(ans+ch,str,v,idx+1);
}
int main(){
    string str;
    cout<<"enter the string :";
    getline(cin,str);
//subsets("",str,0);
vector<string> v;
 //sobset("",str);
 storesubset("",str,v,0);
 for(int i=0;i<=v.size()-1;i++){
    cout<<v[i]<<endl;
 }
}