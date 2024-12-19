function sod(n){
    let lastdigit=0;
    let sum=0;
    while(n){
        lastdigit=n%10;
        sum+=lastdigit;
        n=Math.floor(n/10);
    }
    return sum;
}
const n=7843217;
const result=sod(n);
console.log("sum of digits =",result);