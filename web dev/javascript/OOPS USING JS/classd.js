class product{
    #name;
    #price;
    catagory;
    description;
    rating;
    constructor(productname,productprice,productcatagory,productdescription,productrating){
        this.#name=productname;
        this.#price=productprice;
        this.catagory=productcatagory;
        this.description=productdescription;
        this.rating=productrating;
    }
    displayProduct(){
        console.log("Product Displayed",this.#name,this.#price,this.catagory,this.description,this.rating);
    }
    setprice(p){
        if(p<0){
            console.log("Price cannot be negative");
        }
        else this.#price=p;
    }
    getprice(){
        return this.#price;
    }
}
let obj=new product("iphone 14 pro",12500,"mobile","something",4.5);
obj.displayProduct();
obj.setprice(48379);
obj.displayProduct();
console.log(obj.getprice());
//console.log(obj.#name); // This will throw an error because #name is private
