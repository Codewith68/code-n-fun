let x=89125123597;
let r=0;
let last;
while(x){
    last=x%10;
    r*=10;
    r+=last;
    x=Math.floor(x/10);
}
console.log(r)