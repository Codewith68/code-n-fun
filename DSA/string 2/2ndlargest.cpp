#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a string ";
    getline(cin,s);
    char max1='!';
    char max2='!';
    for(int i=0;i<=s.size()-1;i++){
        if(max1<s[i]){
          max2=max1;
          max1=s[i];
        }
       else if(max2<s[i]&&max1!=s[i]) max2=s[i];
    }
    if(max2 =='!') cout<<"no larger element found";
    else cout<<max2<<" ";
    if(max1 =='!') cout<<"no second larger element found";
    else cout<<max1;
}