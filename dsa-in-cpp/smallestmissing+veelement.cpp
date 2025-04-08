#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    vector<int>v;
    cout<<"insert the element  ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    int n=1;
    bool flag=false;
    for(int i=0;i<=v.size()-1;i++){
        if(v[i]!=n){
            cout<<n<<endl;
            flag=true;
            break;
        }
        else n++;
    }
    if(!flag) cout<<n;
}