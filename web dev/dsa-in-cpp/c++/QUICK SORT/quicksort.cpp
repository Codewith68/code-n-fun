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
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    //5,77,8,2,0,34,3,9348
   int pivotidx=partition(arr,si,ei);
    // 2 3 0 5 8 34 77 9348 
   quicksort(arr,si,pivotidx-1);
   quicksort(arr,pivotidx+1,ei);
}
int main(){
    int arr[]={5,77,8,20,10,34,31,9348};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}