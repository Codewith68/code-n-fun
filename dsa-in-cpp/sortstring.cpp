#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="AZYZXBYDXJK";
    // cout<<"enter a stirng";
    // getline(cin,s);
    string ss="";
    for(int i=0;i<=s.size()-1;i++){
        if(s[i]>='X'){
        ss.push_back(s[i]);}
        cout<<ss[i]<<" ";
    }
    for(int i=0;i<=ss.size();i++){
        bool flag =true;
        for(int j=0;j<=ss.size()-i;j++){
            if(ss[j]>ss[j+1]){ swap(ss[j],ss[j+1]);
            flag=false;}
        }
        if(flag==true) break;
    }
    for(int i=0;i<=ss.size()-1;i++){
        cout<<ss[i]<<" ";
    }
}