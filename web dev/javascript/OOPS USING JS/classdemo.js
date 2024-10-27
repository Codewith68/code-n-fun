class product {
     


    // name;
    // Price;
    // Catagory;
    // Descripton;
    // Rating;

    constructor (productname,productprice,productcatagory,productdescription,productrating){
        this.name=productname;
        this.price=productprice;
        this.catagory=productcatagory;
        this.description=productdescription;
        this.rating=productrating;


    }

    addToCart(){
        console.log("product added to cart");
    }

    RemoveFromCart(){
        console.log("product Removed to cart");
    }

    DisplayProduct(){
        console.log("Product Displayed");
    }

    BuyProduct(){
        console.log("Product Bought");
    }
}
let iphone = new product("iphone 14 pro",12500,"mobile","something",4.5);
console.log(iphone);