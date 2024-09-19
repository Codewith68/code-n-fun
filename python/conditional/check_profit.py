cost_price=int(input("enter the cost price "))
selling_price=int(input("enter the selling price "))
if cost_price>selling_price :
    print("seller has made loss and the seller has  ",cost_price-selling_price," of loss ")
elif selling_price>cost_price :
    print("seller has made profit and the seller has ",selling_price-cost_price," of profit")
else :
    print("seller has made no profit and no loss ")