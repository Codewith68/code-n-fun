#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[],int si,int ei){
        int pivotele=arr[(si+ei)/2];
        int count=0;
        for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
           if(arr[i]<=pivotele) count++;
        }
        int pivotindex=count+si;
        swap(arr[(si+ei)/2],arr[pivotindex]);
        int i=si;
        int j=ei;
        while(i<pivotindex &&j>pivotindex){
            if(arr[i]<arr[pivotindex]) i++;
            if(arr[j]>arr[pivotindex]) j--;
            else if(arr[i]>arr[pivotindex] && arr[j]<arr[pivotindex]){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }// this is as like sort 0s and 1s 
        }
        return pivotindex;
}
int  kthsmallestele(int arr[],int si,int ei,int k){
   int pivotidx=partition(arr,si,ei);
   if(pivotidx+1==k) return arr[pivotidx];
   else if(pivotidx+1<k){
    return   kthsmallestele(arr,pivotidx+1,ei,k);}
    else return kthsmallestele(arr,si,pivotidx-1,k);
   
}
int main(){
    int arr[]={5, 1, 8, 2, 7, 6, 44, 42 };
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=6;
   cout<<kthsmallestele(arr,0,n-1,k);
}