function GCD(a,b){
    if (a==0) return b;
    return GCD(b%a,a);
}


console.log(GCD(24,28));