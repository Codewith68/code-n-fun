// in js functio are the first class citizen
//in js function can be return from a function and function can be passed as an argument to another function
function somefunction(){
    console.log(45+76);
    return function x(){
        return 10;
    }
}
console.log(somefunction());





function anotherexample(h){
    const k=h;
    console.log(k);
    console.log("called g1");

}
function hello(){
    console.log("fajfl");
    return 89;
}

anotherexample(hello());