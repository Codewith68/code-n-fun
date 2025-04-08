
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
    void print(){
        cout<<this->name<<endl;
        cout<<this->age<<endl;
        cout<<this->runs<<endl;
    }
    int matches(){
        return this->runs/this->age;
    }
};
int main(){
    Cricket c("Virat",32,12000);
    c.print();
    cout<<c.matches();

}
