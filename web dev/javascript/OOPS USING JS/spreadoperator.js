const product={
    Name:"Iphone 14 pro max",
    Price:189000,
    Category:"apple product"
};
const {Name,Price}=product;
//console.log(Category);




const purchasedproduct={
    order:"ufhqewul",
    date:13/5/1292,
    ...product
};
console.log(purchasedproduct);