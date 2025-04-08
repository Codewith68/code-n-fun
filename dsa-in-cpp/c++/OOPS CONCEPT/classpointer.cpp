#include<iostream>
using namespace std;
class Pokemon{
    public:
    string type;
    int attack;

    Pokemon(string type,int attack){
        // this->type=type;
        (*this).type=type; 
        this->attack=attack;
    }
};
void change(Pokemon* ptr){
   // (*ptr).attack=60;// always remember to use bracekts 
   ptr-> type="fire";
   ptr->attack=90;
} 
int main(){
  Pokemon pikachu("electric",80);
//   pikachu.attack=80;
//   pikachu.type="electric";
cout<<pikachu.type<<" "<<pikachu.attack<<endl;


change(&pikachu);
cout<<pikachu.type<<" "<<pikachu.attack<<endl;
//   Pokemon charizard("fire",120);
// //   charizard.type="fire";
// //   charizard.type=120; 
// cout<<charizard.attack<<" "<<charizard.type;


}
