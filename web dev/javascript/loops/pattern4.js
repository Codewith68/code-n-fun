function pattern(x){
    for(let i=0;i<=x-1;i++){
        let stars="";
        for(let j=1;j<=x-i;j++) stars+=" ";
        for(let k=1;k<=2*i-1;k++) stars+="*";
        console.log(stars);
    }
    for(let i=0;i<=x-1;i++){
        let stars="";
        for(let j=1;j<=i;j++) stars+=" ";
        for(let k=1;k<=2*(x-i)-1;k++) stars+="*";
        console.log(stars);
    }
}
pattern(5);
