#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&v1,vector<int>&v2,vector<int>&res){
    int i=0;
    int j=0;
    int k=0;
while(i<v1.size()&&j<v2.size()){
    if(v1[i]<=v2[j]) res[k++]=v1[i++];
    else res[k++]=v2[j++];
}
if(i==v1.size()){
    while(j<v2.size()) res[k++]=v2[j++];
}
if(j==v2.size()){
    while(i<v1.size()) res[k++]=v1[i++];
}
}
void mergeSort(vector<int>& res){
int s=res.size();
if(s==1) return;
int s1=s/2,s2=s-s/2;
vector<int> a(s1),b(s2);
for(int i=0;i<s1;i++){
    a[i]=res[i];
}
for(int i=0;i<s2;i++){
    b[i]=res[s1+i];
}
mergeSort(a); //here we use recursion
mergeSort(b);
merge(a,b,res);
a.clear();//  to reduce the search space for the space complexity
b.clear();
}
int main(){
  vector<int>v1={5,1,3,0,4,9,6};
  for(int i=0;i<=v1.size()-1;i++){
    cout<<v1[i]<<" ";
    }
    mergeSort(v1);
    cout<<endl;
for(int i=0;i<=v1.size()-1;i++){
    cout<<v1[i]<<" ";
    }
}
// it take o(nlogn) tc 
// it take 0(n) sp after using clear operation 




// ulthough it take tc=o(nlogn)
 //sc=o(nlogn)
