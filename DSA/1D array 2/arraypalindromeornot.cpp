#include<iostream>
#include<vector>
using namespace std;
bool is_palindrome(vector<int>&v){
    for(int i=0;i<=v.size()/2;i++){
        if(v[i]!=v[v.size()-1-i]) return false ;
    }
    return true;
}
int main(){
int x;
cout<<"enter the size of the array ";
cin>>x;
cout<<"instert the element ";
vector<int>v;
for(int i=0;i<=x-1;i++){
    int s;
    cin>>s;
v.push_back(s);
}
cout<<"is palindrome or not "<<is_palindrome(v);
}