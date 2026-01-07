#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter a number to find sum of digits: ";
cin>>x;
int count=0;
while(x){
    x/=10;
    count++;
}
cout<<"total digits is: "<<count;
return 0;
}