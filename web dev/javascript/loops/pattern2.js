function pattern(x){
    for(let i=0;i<=x-1;i++){
        let stars="";
        for(let j=0;j<=i;j++) stars += "*";
        console.log(stars);
    }
}
pattern(5);
pattern(6);
pattern(4);
pattern(3);
