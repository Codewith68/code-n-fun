#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enyer the size of the array ";
    cin>>x;
    cout<<"insert the elements ";
    vector<int>v;
    for(int i=0;i<=x-1;i++){
      int s;
      cin>>s;
      v.push_back(s);
    }
    for(int i=0;i<=v.size()-1;i++){
        int j=i;
        while(j>=1&&v[j]<v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
    }
    for(int i=0;i<=v.size()-1;i++) cout<<v[i]<<" ";
     cout<<endl;
    // making array into number
    int n=0;
    for(int i=0;i<=v.size()-1;i++){
        n*=10;
        n+=v[i];
    }
  cout<<n<<endl;
//  making the second smallest array
for(int i=v.size()-1;i>=0;i--){
    if(v[i]!=v[i-1]){
        swap(v[i],v[i-1]);
        break; 
    } 
}
 for(int i=0;i<=v.size()-1;i++) cout<<v[i]<<" ";
cout<<endl;
// making 2nd smallest array into number
int y=0;
for(int i=0;i<=v.size()-1;i++){
        y*=10;
        y+=v[i];
    }
     cout<<y<<endl;
    // sum of minimum two number
 cout<<"minimum sum is "<<n+y;
 }