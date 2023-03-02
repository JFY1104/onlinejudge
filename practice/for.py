texts = ['a','b','c','d']   #list
for text in texts:
    print(text)

for value in range(1,5):    #印出數字1到4
    print(value)

numbers = list(range(1,5))  #利用range作為list的參數
print(numbers)

evennumbers = list(range(2,11,2))   #從2開始累加2 直到11
print(evennumbers)

squares = []
for valuea in range(1,11):
    square = valuea**2       # **n 表示n次方
    squares.append(square)
print(squares)

squares2 = [valueb**2 for valueb in range(1,11) ]   #上題簡寫 列表 = [表達式 for循環]
print(squares2)                                     #列表解析

digits = [1,2,3,4,5]
min(digits) #印出最小
max(digits) #印出最大值
sum(digits) #印出總和

animals = ['cat','dog','cow','horse']
print(animals[1:3]) #印出列表中指定位置的元素(1,2)
print(animals[1:]) #印出列表中指定位置的元素(1到末尾)
print(animals[:3]) #印出列表中指定位置的元素(開頭到2)
print(animals[-3:]) #印出列表中指定位置的元素(倒數三位)

for animal in animals[:2]:
    print(animal.title())

animalsIlike = animals[:] #複製列表
print(animalsIlike)

dimensions = (200,50) #tuple 元組 不可被修改的列表
dimensions = (400,100) #但可被重新定義覆蓋