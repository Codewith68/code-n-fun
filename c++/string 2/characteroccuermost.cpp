#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<" enter a string ";
    getline(cin,s);
    vector<int> v(26,0);
    for(int i=0;i<=s.length();i++){
        char ch=s[i];
        int ascii=(int)ch;
        v[ascii-97]++;
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(v[i]>max) max=v[i];
    }
    for(int i=0;i<26;i++){
        if(v[i]==max){
            int ascii=i+97;
            char ch=(char) ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }
}