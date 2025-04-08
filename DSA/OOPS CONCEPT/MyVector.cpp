
#include<iostream>
using namespace std;
class Vector{
    int *arr;
    int cs;
    int ms;
    public:
    Vector(){
        cs=0;
        ms=1;
        arr=new int[ms];
    }
    void push_back(int data){
        if(cs==ms){
            int *oldArr=arr;
            arr=new int[2*ms];
            ms=2*ms;
            for(int i=0;i<cs;i++){
                arr[i]=oldArr[i];
            }
            delete [] oldArr;
        }
        arr[cs++]=data;
    }
    void pop_back(){
        if(cs>0){
            cs--;
        }
    }
    int size(){
        return cs;
    }
    int capacity(){
        return ms;
    }
    int operator[](int i){
        return arr[i];
    }
    ~Vector(){
        delete [] arr;
    }

};

int main(){
    Vector v;
    for(int i=0;i<5;i++){
        v.push_back(i*i);
    }
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    return 0;
  
}
