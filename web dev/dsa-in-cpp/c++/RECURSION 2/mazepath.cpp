#include<iostream>
#include<string>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er||sc>ec) return 0;
    if(sr==er&&sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways=rightways+downways;
    return totalways;
}
void printmaze(int row,int col,string s){
    if(row<1||col<1) return;
    if(row==1&&col==1){
        cout<<s<<endl;
        return;
    } 
    printmaze(row,col-1,s+'R');
    printmaze(row-1,col,s+'D');
}
int maze2(int row,int col){
    if(row<1||col<1) return 0;
    if(row==1&&col==1) return 1;
    int rightways=maze2(row,col-1);
    int downways=maze2(row-1,col);
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    // cout<<maze(1,1,5,5);
    cout<<maze2(5,5)<<endl;
    printmaze(5,5,"");
}