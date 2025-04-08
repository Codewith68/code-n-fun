
#include<iostream>
using namespace std;

class Car{
public:
string name;
int price;
int seats;


};
void print(Car c){   // pass by value
    cout<<c.name<<endl;
    cout<<c.price<<endl;
    cout<<c.seats<<endl;
}
void change(Car &c){ // pass by reference
    c.name="BMW";
}
int main(){
         Car c1; // instance of the class/object
        c1.name="Audi";
        c1.price=1000000;
        c1.seats=5;
  print(c1); // pass by value
  change(c1); // pass by reference
  print(c1); // pass by value

}