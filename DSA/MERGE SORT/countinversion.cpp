#include<iostream>
#include<vector>
using namespace std;
// use of global variable
 int inversion(vector<int>&a,vector<int>&b){
    int count=0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
       if(a[i]>b[j]) {
        count+= (a.size()-i);
        j++;
       }
       else {
        // a[i]<=b[j]
        i++;
       }
    }
    return count;
 }
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];
    }
    if(i==a.size()){
        while(j<b.size()) res[k++]=b[j++];

    }
    if(j==b.size()){
        while(i<a.size()) res[k++]=a[i++];

    }
}
int mergeSort(vector<int>& v){
int s=v.size();
int c=0;
if(s==1) return 0;
int s1=s/2,s2=s-s/2;
vector<int>a(s1),b(s2);
for(int i=0;i<s1;i++){
      a[i]=v[i];
}
for(int i=0;i<s2;i++){
      b[i]=v[s1+i];
}
c+=mergeSort(a);
c+=mergeSort(b);
c+=inversion(a,b);
merge(a,b,v);
a.clear();
b.clear();
return c;
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
//    int count=0;
//    for(int i=0;i<=v.size()-2;i++){
//     for(int j=i;j<=v.size()-1;j++){
//         if(v[i]>v[j]) count++;
//     }
//    }
//    cout<<count;
cout<<mergeSort(v);
}