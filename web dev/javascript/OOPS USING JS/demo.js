class s{
    #name;
    #surname;
    constructor(name,surname){
          this.#name=name;
          this.#surname=surname;
    }
    getname(){
        return this.#name;
    }
    setname(name){
        this.#name=name;
    }
    getsurname(){
        return this.#surname;
    }
    setsurname(surname){
        this.#surname=surname;
    }
}

const p=new s();
p.name="sunrat";
console.log(p.name);
p.surname="palei"
console.log(p.surname);
