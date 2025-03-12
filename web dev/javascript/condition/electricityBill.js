let unit=Number(prompt("enter the unit"));
if(isNaN(unit)) {
    console.log("please enter a valid number");
}
let bill=0;
if(unit>400){
    bill=(unit-400)*13
    unit=400
}
if(unit>200 && unit<=400){
    bill+=(unit-200)*8
    unit=200
}
if(unit>100 && unit<=200){
    bill+=(unit-100)*6
    unit=100
}
bill+=unit*4
console.log("your bill is",bill)
