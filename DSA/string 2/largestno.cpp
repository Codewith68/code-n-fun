#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s[]={"0123","0023","456","00182","94053","002901"};
    int max=stoi(s[0]);
    string maxs=s[0];
    for(int i=0;i<=6-1;i++){
        int x=stoi(s[i]);
        if(x>max) {
            max=x;
            maxs=s[i];
        }
    }
    cout<<max<<" "<<maxs;
}