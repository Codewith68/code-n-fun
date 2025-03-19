function printSubArray(arr){
    let n=arr.length;
    for(let i=0;i<n;i++){
        for(let j=i;j<n;j++){
            let subArray=[];
            for(let k=i;k<=j;k++){
                subArray.push(arr[k]);
            }
            console.log(subArray);
        }
    }

}
let arr=[1,2,3,4];
printSubArray(arr);