#include<iostream>
using namespace std;
class Student{
public:
string name;
int rollNo;
float percentage;
};


int main(){
  Student s;
    s.name="Subrat";
    //s.rollNo=185;
    s.percentage=76.5;
    cin>>s.rollNo;


    Student b;
    b.name="Biraj";
    b.rollNo=186;
    b.percentage=86.4;

    cout<<s.name<<endl;
    cout<<s.rollNo<<endl;
    cout<<s.percentage<<endl;


    cout<<b.name<<endl;
    cout<<b.rollNo<<endl;
    cout<<b.percentage<<endl;


}
