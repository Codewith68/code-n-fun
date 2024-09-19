num=int(input("enter the number "))
if num%5==0 or num%3==0 :
    if num%15==0 :
        print(num," is divisible by all of three ")
    else :
        print(num," is divisuble by 5 or 3 but not 15 ")