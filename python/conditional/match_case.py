num1=int(input("enter  first number  "))
num2=int(input("enter second  number  "))
operator=input("enter the oerator ")
match operator:
    case "+" :
        print(num1+num2)
    case "-" :
        print(num1-num2)
    case "*" :
        print(num1*num2)
    case "/" :
        print(num1/num2)   
    case _ :
        print("enter  a valid operator ")         
        