function pattern(x){
    for(let i=0;i<=x-1;i++){
        let stars="";
        for(let j=1;j<x+1-i;j++) stars += "*";
        console.log(stars);
    }
}
pattern(5);
