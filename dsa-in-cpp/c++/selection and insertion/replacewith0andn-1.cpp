#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of the array ";
    cin>>x;
    int arr[x];
    cout<<"insert the elements ";
    for(int i=0;i<=x-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=x-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
//     vector<int>v(x,0);
//     int  n=0;
//     for(int i=0;i<=x-1;i++){
//     int min=INT_MAX;
//     int idx=-1;
//      for(int j=0;j<=x-1;j++){
//         if(v[j]==1) continue;
//         else{ 
//             if (arr[j]<min){
//             min=arr[j];
//             idx=j;
//         }
//     }
// }
//      arr[idx]=n;
//      v[idx]=1;
//      n++;
//     }
//     for(int i=0;i<=x-1;i++){
//         cout<<arr[i]<<" ";
//     }



// negative check;
int n=0;
for(int i=0;i<=x-1;i++){
    int min=INT_MAX;
    int idx=-1;
    for(int j=0;j<=x-1;j++){
        if(arr[j]<=0) continue;
        else if(min>arr[j]){
            min=arr[j];
            idx=j;
        }
    }
    arr[idx]=-n;
n++;
}
for(int i=0;i<=x-1;i++){
    arr[i]=-arr[i];
    cout<<arr[i]<<" ";
}
}