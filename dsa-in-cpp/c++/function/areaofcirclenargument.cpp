#include<iostream>
using namespace std;
float areaofcircle(int x){
    float area=3.14*x*x;
    return area;
}
int main(){
    int x;
    cout<<"enter radius";
    cin>>x;
 cout<<areaofcircle(x);
}