let str="subrata";
let freq={};
for(const val of str){
    if(freq[val]){
        freq[val]++;
    }
    else{
        freq[val]=1;
    }
}
console.log(freq);