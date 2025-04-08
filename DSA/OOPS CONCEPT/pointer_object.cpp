
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
void change(Cricket *c){
        //  (*c).runs=77777;
        c-> runs=7777; // (*c).runs=77777;
}
int main(){
    Cricket c("Virat",32,12000);
    Cricket *p=&c;

    change(&c);


    cout<<c.runs<<endl;
    cout<<p->runs<<endl;


    p->age=45;
    cout<<c.age<<endl; //   IMP a->b == (*a).b
    cout<<p->age<<endl;

}
