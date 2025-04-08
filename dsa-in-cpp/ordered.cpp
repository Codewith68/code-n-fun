#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    // set<int>s;
    // s.insert(3);
    // s.insert(4);
    // s.insert(2);
    // for(auto x: s){
    //     cout<<x<<' ';
    // }
    map<string,int>m;
    m["sunrat"]=20;
    m["jina"]=30;
    m["tik"]=10;
    for(auto x:m){
        cout<<x.first<<","<<x.second<<" ";
    }
}