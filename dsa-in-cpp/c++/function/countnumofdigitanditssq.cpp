#include<iostream>
using namespace std;
int squreof(int &y){
       int z=y*y;
       // z*z;
       return z;
}
int nofdigits(int &x){
         int count=0;
         while(x){
              x/=10;
              count++;
         }
         return count;
}
int main(){
       int x;
       cout<<"enter a number ";
       cin>>x;
       int noofdigits=nofdigits(x);
       cout<<"no of digits is "<<noofdigits;
       cout<<endl;
       cout<<"squre of the number is "<<squreof(noofdigits);  
}