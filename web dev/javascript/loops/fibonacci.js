let x=8;
let a=0;
let b=1;
let sum=0;
console.log(a,"\n",b);
for(let i=0;i<x;i++){
  sum=a+b;
  a=b;
  b=sum;
  console.log(sum);
}
