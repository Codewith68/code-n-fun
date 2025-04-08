#include<iostream>
#include<string>
using namespace std;
int toh(int x,string s,string h,string d){
    int step=0;
    if(x>=1){
        step+=toh(x-1,s,d,h);
        cout<<" move disk "<<s<<" to disk "<<d<<endl;
        step++;
        step+=toh(x-1,h,s,d);
    }
    return step;
}
int main(){
    int x;
    cout<<"ente the numbee :";
    cin>>x;
    cout<<toh(x,"A","B","c");
}