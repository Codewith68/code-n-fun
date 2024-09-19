x=int(input("enter the rows "))
for i in range(1,x+1) :
    print(" "*(x-i),end=" ")
    for j in range(1,2*i) :
        print(j,end="")
    print()    