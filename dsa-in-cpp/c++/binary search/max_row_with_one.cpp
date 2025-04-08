#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cout<<"enter the row size ";
    cin>>a;
    int b;
    cout<<"enter the coloumn size ";
    cin>>b;
    vector<vector<int>>v(a,vector<int>(b));
      cout<<"insert the elements ";
      for(int i=0;i<=a-1;i++){
        for(int j=0;j<=b-1;j++)
        cin>>v[i][j];
      }
      int x=v.size();
      int y=v[0].size();
      int maxcount=0;
      int g=1;
      for(int i=0;i<=x-1;i++){
        int lo=0;
        int hi=y-1;
        int countones=0;
        int firstidx=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(v[i][mid]==g){
                if(v[i][mid]==0){
                    firstidx=mid;
                    break;
                }
                else if(v[i][mid-1]!=g){
                      firstidx=mid;
                    break;
                }
                else hi=mid-1;
            }
            else if(v[i][mid]<g) lo=mid+1;
            else hi=mid-1;
        }
        if(firstidx!=-1) countones=b-firstidx;
        cout<<countones<<endl;
        if(maxcount<countones){
             maxcount=countones;
             a=i;
           }   
      }
      cout<<a<<" "<<maxcount;
}