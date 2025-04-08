#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;
int main(){
    unordered_set<int> s;
    // insert in a random order
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(8);
    s.erase(3);
    int target=5;
    // s.find()-> it searches in the set and if it is not found them it return 
    // the last element
    if(s.find(target)!=s.end()){// target exits
        cout<<"exits"<<endl;
    }
    else{
        cout<<"doesnt exits";
    }
    cout<<s.size()<<endl;
    for(auto ele:s){
        cout<<ele<<" ";
    }

}