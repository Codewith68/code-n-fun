function pattern(x){
    for(let i=0;i<=x-1;i++){
        let stars="";
        for(let j=1;j<=x-i;j++) stars+=" ";
        for(let k=1;k<=i;k++) stars+="*";
        console.log(stars);
    }
}
// pattern(3);

// pattern(4);

pattern(5);
