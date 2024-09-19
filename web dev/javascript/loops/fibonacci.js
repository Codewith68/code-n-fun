function fibo(n){
   let a=0;
   let b=1;
   console.log(a);
   console.log(b);
   let sum=0;
  for(let i=1;i<n;i++){
    sum=a+b;
    a=b;
    b=sum;
    console.log(b);
  }
}



fibo(8);