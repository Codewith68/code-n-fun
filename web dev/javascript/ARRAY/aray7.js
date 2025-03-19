let arr=[3448952785,54,6544,256555,11,78];
let max=-1
let smax=-1

for(let i=0;i<arr.length;i++){
    if(max<arr[i]){
        smax=max;
        max=arr[i];
    }
    else if(smax<arr[i] && max!=arr[i]){
        smax=arr[i];
    }
}
console.log("largest element of the array is "+max);
console.log("second largest element of the array is "+smax);