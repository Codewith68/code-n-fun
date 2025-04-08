#include<iostream>
using namespace std;
int main(){
    int i=0;
while(i<26){
    cout<<"the ascii of "<<char(i+'A') <<" is "<< int(i+'A')<<endl;
    i++;
}
}