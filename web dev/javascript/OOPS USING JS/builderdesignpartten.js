class product{
    #name;
    #price;
    #description;
    constructor(builder){
        this.#name=builder.name;
        if(builder.price  >  0) this.#price=builder.price;
        else {
            return {};
        }
        this.#description=builder.description;
    }
    DisplayedProduct(){
        console.log("product Displayed",this.#name,this.#price,this.#description);
    }
    static get builder(){
        class builder{
            constructor(){
                this.name=""; // here it store the default value at start 
                this.price=0;
                this.description="";
            }
            setName(IncomingName){
                this.name=IncomingName;
                return this;
            }
            setPrice(IncomingPrice){
                this.price=IncomingPrice;
                return this;
            }
            setDescription(IncomingDescription){
                this.description=IncomingDescription;
                return this;
            }
            build(){
                return new product(this);
            }
        }
        return new builder;
    }
}
const b=product.builder
.setName("Laptop")
.setPrice(20000)
.setDescription("This is a laptop")
.build();
b.DisplayedProduct();
// const p= product.builder
