#include<iostream>
using namespace std;
class Pokemon{
    private:
    int attack;
    public:
    string type;
    void set(int val){ // setter to set value
        attack=val;
    }
    int get(){// getter to get value
        return attack;
    }
};
int main(){
 Pokemon pikachu;
 pikachu.type="electric";
 cout<<pikachu.type<<endl;
 pikachu.set(80);
  cout<<pikachu.get();
}
