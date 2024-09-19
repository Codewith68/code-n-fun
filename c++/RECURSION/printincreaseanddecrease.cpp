#include <iostream>
using namespace std;
void print(int x,int n){
    if(x>n)return;
    cout<<x<<" ";//assingnment 1
    print(x+1,n);
    if(x>1) cout<<x-1<<" ";
}
void prrint(int i,int n){
   if(i>=n){
    cout<<n<<" ";
    return;
   }
   cout<<i<<" ";
   prrint(i+1,n);
   cout<<i<<" ";
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    prrint(1,n);
    cout<<endl;
    print(1,n);
}
// tc  is O(n) and sc is O(n+1) t.e O(n)