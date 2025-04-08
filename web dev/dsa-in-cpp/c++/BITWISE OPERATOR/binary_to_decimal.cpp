#include<iostream>
using namespace std;
int binary_to_decimal(string s){
    int n=s.size();
    int result=0;
    for(int i=0;i<n;i++){
        char ch=s[i];
        int num=ch-'0';
        result+=num*(1<<(n-i-1));
    }
    return result;
}
int main(){
    string str="001101";
    cout<<binary_to_decimal(str);
    return 0;

}