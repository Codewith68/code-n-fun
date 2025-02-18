#include<iostream>
#include<unordered_map>
#include<set>
using namespace std;
int main(){
    unordered_map<string,int>m;
    // pair<string,int>p1;
    // p1.first="subrat";
    // p1.second=45;
    //m.insert(p1);
    m["subrat"]=73; //easy to apply
    m["jina"]=4;
    m["jasmine"]=23;
    m["bhartee"]=56;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size();
    cout<<endl;
    m.erase("subrat");
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    cout<<m.size();
    cout<<m["jina"];
}