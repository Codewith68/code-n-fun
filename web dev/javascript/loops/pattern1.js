function pattern(x){
    for(let i=0;i<=x-1;i++){
        let stars="";
        for(let j=0;j<=x-1;j++) stars += "*";
        console.log(stars);
    }
}
console.log(pattern(4));