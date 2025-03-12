let amount=Number(prompt("enter the amount"));
if(isNaN(amount)) {
    console.log("please enter a valid number");
}
let dis=0
if(amount>0 && amount <=5000){
    dis=0
}
else if(amount>5001 && amount <=7000){
    dis=5
}
else if(amount>7001 && amount <=9000){
    dis=10
}
else {
    dis=20
}

console.log("you have to pay",amount-Math.floor((dis*amount)/100),"after discount of",dis,"%")