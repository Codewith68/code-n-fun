let num=8;
let a=0;
let b=1;
console.log(a);
console.log(b);
let sum=0;
for(let i=0;i<=num;i++){
  sum=a+b;
  a=b;
  b=sum;
  console.log(b)
}
