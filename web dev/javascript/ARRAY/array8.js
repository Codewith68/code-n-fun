let arr=[-1,2,3,-5,-6,8,-22,-67,9,8];
let i=0;
let j=0;
while(i<=arr.length-1){
    if(arr[i]<0){
        let temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
    }
    i++;
}
console.log(arr);