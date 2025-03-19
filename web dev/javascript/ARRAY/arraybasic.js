const arr=[];// empty array
let arr2=["subrat",true,253,"palei"];
console.log(arr,arr2);
console.log(arr2[3]);// access an element by index
arr2[2]="jksda";
console.log(arr2[2]);
arr2[10]=9234;
console.log(arr2);// it store undefined at the empty space


let str="subrat";
str[0]="b";// it will not change the string
console.log(str);
// here the catch is in string we cant chnage the value so the string are immutable
// but in array we can change the value so array are mutable



let arrrrr=[1,2,3,4,5,6,7,8,9];
arrrrr[4]=341;// change the value at index 4
console.log(arrrrr);

