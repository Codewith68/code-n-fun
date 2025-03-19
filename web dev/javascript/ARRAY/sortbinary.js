function swap(i,j){
    let temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
}
let arr=[0,1,1,1,0,0,1,0,1,0,0,0,1,0,];
let i=0;
let j=arr.length-1;
while(i<j){
    if(arr[i]==1){
       swap(i,j);
        j--; //Move j left after swapping
    }
    else {
        i++; // move i right if its alredy 0
    }
}
console.log(arr);
