function IsPrimrorNot(num){
    let isPrime=true;
    for(let i=2;i<num;i++){
        if(num%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        return "Prime";
    }
    else{
        return "Not Prime";
    }
}

console.log(IsPrimrorNot(17));