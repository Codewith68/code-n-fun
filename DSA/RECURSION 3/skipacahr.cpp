#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void sac(string ans,string original,int idx){
    // if(original.empty()){
    //     cout<<ans<<endl;
    //     return;
    // }
    // char ch=original[0];
    // if(ch=='a') sac(ans,original.substr(1));
    // else sac(ans+ch,original.substr(1);
    if(idx==original.length()) {
        cout<<ans;
        return;
    }
    char ch=original[idx];
if(ch=='a') sac(ans,original,idx+1);
else sac(ans+ch,original,idx+1);
}
int main(){
          string str;
          cout<<"enter the string ";
          getline(cin,str);
          cout<<str<<endl;
          sac("",str,0);
}