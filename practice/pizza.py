def make_pizza(size, *toppings):
    # 若想讓函數接收不同類型的實參 要將接收任意數量類型的實參放至最後
    # 傳遞任意數量的實參 利用*topping 創建一個名為topping的空元祖
    """ 打印顧客點的所有配料 """
    print("\nmaking " + str(size) + " feet pizza")
    for topping in toppings:
        print("- " + topping)
