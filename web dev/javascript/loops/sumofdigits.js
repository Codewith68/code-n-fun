const digits=156;
const result=sod(digits);
console.log("sum of digits are ",result)
function sod(n){
    let sum=0;
    while(n){
        sum+=n%10;
        n=Math.floor(n/10);
    }
    return sum;
}