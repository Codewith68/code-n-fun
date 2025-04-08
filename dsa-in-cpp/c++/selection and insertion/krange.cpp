#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>=b) return a;
    else return b;
}
float min(float a,float b){
    if(a<=b) return a;
    else return b;
}
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    vector<int>v;
    cout<<"insert the elements ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    cout<<endl;
    float kmin=(float)(INT_MIN);
    float kmax=(float)(INT_MAX);
    bool flag=true;
    for(int i=0;i<=v.size()-1;i++){
        if(v[i]>=v[i+1])    kmin=max(kmin,(v[i]+v[i+1])/2.0);
            else kmax=min(kmax,(v[i]+v[i+1])/2-0);
            if(kmin>kmax) {
                flag=false;
                break;
            }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax)  {
        if(kmin-(int)kmin==0) cout<<"thare is only one value of k that is "<<kmin;
        else cout<<-1;
    }
    else {
        if(kmin-(int)kmin>0) kmin=(int)kmin+1;
        cout<<"range of k is : {"<<kmin<<","<<(int)kmax<<"}";
    }
}