#include<bits/stdc++.h>
using namespace std;
void stringduplicates(string s,string str,vector<string>&ans,bool flag){
    if(str==""){
        ans.push_back(s);
        return;
    }
    char ch=str[0];
    if(str.length()==1){
       if(flag==true) stringduplicates(s+ch,str.substr(1),ans,true);
       stringduplicates(s,str.substr(1),ans,true);
       return;
    }
    char dh=str[1];
    if(ch==dh){
         if(flag==true)stringduplicates(s+ch,str.substr(1),ans,true);
       stringduplicates(s,str.substr(1),ans,false);
    }
    else {
       if(flag==true)  stringduplicates(s+ch,str.substr(1),ans,true);
       stringduplicates(s,str.substr(1),ans,true);
    }
}
int main(){
    string str;
    cout<<"enter the string "<<endl;
    getline(cin,str);
    vector<string>v;
    stringduplicates("",str,v,true);
    for(int i=0;i<=v.size()-1;i++){
        cout<<endl<<v[i]<<endl;
    }
}
