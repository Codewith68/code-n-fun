function pattern(x){
    for(let i=0;i<=x-1;i++){
        let stars="";
        for(let j=0;j<x-i;j++) stars += "*";
        console.log(stars);
    }
}
pattern(5);
