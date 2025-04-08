#include<bits/stdc++.h>
using namespace std;
void permutation(string ans,string original,vector<string>&v){
    if(original.empty()){
        v.push_back(ans);
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        string rest=original.substr(0,i)+original.substr(i+1);
        permutation(ans+ch,rest,v);
    }
}
int main(){
    string str;
    cout<<"enter the string :"<<endl;
    getline(cin,str);
    cout<<endl;
    vector<string>v;
    sort(str.begin(),str.end());
    permutation("",str,v);
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
        cout<<endl;
    }
}
