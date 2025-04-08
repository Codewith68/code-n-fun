let grid=[[1,2,4,5],[3,4,5,6],[7,8,9,10]];
console.log(grid); // 1


let arr=Array(5)
for(let i=0;i<arr.length;i++){
    arr[i]=Array(5)
}
console.log(arr); // 2D array with undefined values



let arr1=Array(5)
for(let i=0;i<arr1.length;i++){
    let innerArr= new  Array(6).fill(34)
    arr1[i]=innerArr
}
console.log(arr1); // 2D array with 0 values
arr1[0][3]=100;
console.log(arr1); // 100