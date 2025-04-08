#include<iostream>
using namespace std;
int main(){
       float radius;
       cout<<"enter the radius";
       cin>>radius;
       float pi=3.1415;
       float area=pi*radius*radius;
       float cir =2*pi*radius;
       cout<<area<<endl<<cir<<endl;
       if(area>cir){
        cout<<"area is greater than cir";
       }
       else cout<<"cir is greater than area";
}