#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s[]={"subrat","sabita","biranchi","rupashree"};
    int n=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<=n-1;i++)
    cout<<s[i]<<endl;
    cout<<endl;
        for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
                flag=false;
            } 
        }
    if(flag==true) break;
    }

    
   for(int i=0;i<=n-1;i++){
    cout<<s[i]<<endl;
   }
}