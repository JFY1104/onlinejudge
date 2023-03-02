animals = ['cat', 'dog', 'horse', 'cow']
for animal in animals:
    if animal == 'cat':     # 運算符 == != <= >= < >
        print(animal.upper())
    else:
        print(animal.title())

age = 20
if age > 18 and age < 22:
    print("enough")
else:
    print("too young")

toppings = ['mushroom', 'onions', 'pineapple']
if 'mushroom' in toppings:      # 判斷元素是否在列表內 in / not in
    print("we have mushroom")
else:
    print("we dont have mushroom")

avaliable_texts = ['a', 'b', 'c', 'd', 'e', 'f', 'g']
requested_texts = ['c', 'z', 'f', 'a']
for text in requested_texts:
    if text in avaliable_texts:
        print("you want " + text + ".")
    else:
        print("sorry we dont have the text")

car = 'subaru'  # boolean 表達式
print("is car == 'subaru'? i predict true.")  # 在單(雙)引號中 為句子
print(car == 'subaru')  # 判斷式 輸出 true / false
print("\nis car =='audi'? ipredict false.")
print(car == 'audi')

myage = 20      # if-elif-else 結構
if age < 4:
    print("your cost = $0")
elif age > 4 and age < 18:
    print("your cost = $5")
elif age > 18 and age < 65:
    print("your cost = $0")
else:
    print("your cost = $10")
