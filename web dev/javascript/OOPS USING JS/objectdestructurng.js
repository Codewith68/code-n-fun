const product={
    Name:"Iphone 14 pro max",
    Price:189000,
    Category:"apple product"
};
const {Name,Price,category:sui}=product;
console.log(product);




// here we cant access category but can access sui as we **alias** the name category to sui