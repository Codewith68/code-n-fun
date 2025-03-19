let AppleProduct={
    name:"apple 15 pro max",
    discount:70,
    isavalable:true,
};
let socialHandels={
    fb:10000,
    insta:7488,
    linkedin:324978,
    insta:8278,
};
console.log(AppleProduct);
console.log(socialHandels);

console.log(AppleProduct.name);
console.log(socialHandels.fb);

// object are mutable as we can modified our object
// form an boject we can acess the value by using the key but not the vicevesa



AppleProduct.price =100000;
console.log(AppleProduct); // add a new key value pair in the object
AppleProduct.price=90000;// modify the value of the key
console.log(AppleProduct);

delete AppleProduct.price;
console.log(AppleProduct);// delete the key value pair
// we can delete the key value pair by using the delete keyword