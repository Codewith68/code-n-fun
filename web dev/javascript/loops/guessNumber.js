let random=Math.floor(Math.random()*100) + 1;
let guess=0;
let attempts=0;
while(guess!=random){
    guess=Number(prompt("Enter a number between 1 and 100"));
    attempts++;
    if(isNaN(guess) || guess<1 || guess>100){
        alert("Enter a valid number");
    }
    else if(guess<random){
        alert("Too low");
    }
    else if(guess>random){
        alert("Too high");
    }
    else{
        alert(`Correct! You took ${attempts} attempts`);
    }
}