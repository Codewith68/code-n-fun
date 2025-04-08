#include<iostream>
using namespace std;
class Bike{
   public:
   int TyerSize;
   int enginesize;



   Bike (int TyerSize,int enginesize){ // constructer 
    this->TyerSize=TyerSize;
    this->enginesize=enginesize;
   }

   ~Bike(){
      cout<<"destrocter call hua\n";
   }




};
int main(){
    Bike tvs(12,311);

    Bike Honda(34,342);

    Bike RoyalEinfield(14,343);
bool flag =true;
if(flag==true){ // desctrocter use to free up the dunamically array or object ETC;
      Bike bajaj(15,9122);
      cout<<bajaj.TyerSize<<" "<<bajaj.enginesize<<endl;
}
    cout<<tvs.TyerSize<<" "<<tvs.enginesize<<endl;
    cout<<Honda.TyerSize<<" "<<Honda.enginesize<<endl;
    cout<<RoyalEinfield.TyerSize<<" "<<RoyalEinfield.enginesize<<endl;

}
