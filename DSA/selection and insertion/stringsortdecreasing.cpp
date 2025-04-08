#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    // bubble sort
    string s="AZYZXBYJXK";
    string ss="";
    for(int i=0;i<=s.size()-1;i++){
        if(s[i]>='X') ss.push_back(s[i]);
    }
    for(int i=0;i<=ss.size();i++){
        bool flag=true;
        for(int j=0;j<=ss.size()-i;j++){
            if(ss[j]<ss[j+1]){
             swap(ss[j],ss[j+1]);
            flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<=ss.size()-1;i++){
        cout<<ss[i]<<" ";
    }
    }
    
