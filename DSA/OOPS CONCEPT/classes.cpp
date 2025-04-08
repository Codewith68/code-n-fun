#include<iostream>
using namespace std;
class student{ // user defind data type
public:
    string Name;
    int rollNo;
    float Percentage;
    student(){

    }
    student(int n,string s){
        rollNo=n;
        Name=s;
    }
    student(int n,string s,float p){
        Percentage=p;
        rollNo=n;
        Name=s;
    }
    student(string s,int d,float p){
        Percentage=p;
        rollNo=d;
        Name=s;
    }
};
int main(){
    // student s;
    // s.Name="subrat";
    // s.rollNo=185;
    // s.Percentage=76.5;

    student s("subrat",185,76.5);// instance of the class/object
    // cout<<s.Name<<endl;
    // s.Name="harsh";


    //student s(185,"su br");
     cout<<s.Name<<endl;
     cout<<s.rollNo<<endl;
     cout<<s.Percentage<<endl;







// student s={"subrat",185,85.4};
// cout<<s.Percentage;




//     cout<<s.Name<<endl;
//     student b;
//     b.Name="biraj";
//     b.rollNo=186;
//     b.Percentage=86.4;
//     cout<<s.Name<<endl;
//     cout<<b.Name<<endl;





//     student z=s;
//     z.Name="zex";
//     cout<<z.Percentage<<endl;
//     cout<<z.Name<<endl;
//     cout<<z.rollNo;
}