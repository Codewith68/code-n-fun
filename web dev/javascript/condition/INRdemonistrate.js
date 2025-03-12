let num=50;
if(num>=500){
    console.log("500 notes is",Math.floor(num/500));
    num%=500;
}
if(num>=200){
    console.log("200 notes is",Math.floor(num/200));
    num%=200;
}
if(num>=100){
    console.log("100 notes is",Math.floor(num/100));
    num%=100;
}
if(num>=50){
    console.log("50 notes is",Math.floor(num/50));
    num%=50;
}
if(num>=20){
    console.log("20 notes is",Math.floor(num/20));
    num%=20;
}
if(num>=10){
    console.log("10 notes is",Math.floor(num/10));
    num%=10;
}
if(num>=5){
    console.log("5 notes is",Math.floor(num/5));
    num%=5;
}
if(num>=2){
    console.log("2 notes is",Math.floor(num/2));
    num%=2;
}
if(num>=1){
    console.log("1 notes is",num);
}