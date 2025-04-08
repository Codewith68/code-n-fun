#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a atring";
    getline(cin,s);
    int count=0;
    int ans=0;
    for(int i=0;i<=s.size()-1;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') count++;
        else{
             ans+=count*(count+1)/2;
        count=0;
        }
    }
    ans+=count*(count+1)/2;
    cout<<ans<<" ";
}