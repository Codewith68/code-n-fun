
#include<iostream>
using namespace std;
class Student{
public:
string name;
int rollNo;
float percentage;


 Student(string s,int r,float p){ //parameterized constructer
    cout<<"parameterized constructer call hua\n";
    name=s;
    rollNo=r;
    percentage=p;


 }
 Student(string n,int r){
    cout<<"parameterized constructer call hua\n";
    name=n;
    rollNo=r;
    percentage=0;
 }
    Student(){
        cout<<"default constructer call hua\n";
        name="no name";
        rollNo=0;
        percentage=0;
    }
};

int main(){
    Student s("Subrat",185,76.5);
    Student s2("Biraj",186);




//   Student s;
//     s.name="Subrat";
//     s.rollNo=185;
//     s.percentage=76.5;
  


//     Student b;
//     b.name="Biraj";
//     b.rollNo=186;
//     b.percentage=86.4;

    cout<<s.name<<endl;
    cout<<s.rollNo<<endl;
    cout<<s.percentage<<endl;


    cout<<s2.name<<endl;
    cout<<s2.rollNo<<endl;
    cout<<s2.percentage<<endl;


}
