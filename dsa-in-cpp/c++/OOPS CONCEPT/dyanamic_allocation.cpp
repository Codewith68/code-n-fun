#include<iostream>
using namespace std;

class Cricket{
    public:
    string name;
    int age;
    int runs;
    Cricket(string name,int age,int runs){
        this->name=name;
        this->age=age;
        this->runs=runs;
    }

};

int main(){
    Cricket c("Virat",32,12000);
    Cricket *c2=new Cricket("rohit sharma",35,78988);



int x=5;
int *ptr=new int(67);

cout<<*ptr<<endl;


cout<<c.runs<<endl;
cout<<c2->runs<<endl;
    

}
