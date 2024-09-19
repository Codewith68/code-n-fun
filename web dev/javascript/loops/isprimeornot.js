function isPrime(x){
    for(let i=2;i<=x-1;i++){
        if(x%i==0) return false;
    }
    return true;
}
console.log(isPrime(37));