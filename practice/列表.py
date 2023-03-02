text = ['a','b','c']
text.append('d') #在列表末尾添加元素
del text[1]      #刪除在1位置的元素
text.insert(1,'b') #在1的位置插入元素
popelement = text.pop(1) #彈出指定位置元素 預設為列表末尾
text.remove('a') #刪除指定的元素

animal = ['dogs','cats','birds']
animal.sorted() #將元素依照字母順序進行臨時排列
animal.sort() #將元素按照字母順序排列(不可逆)
animal.reverse() #將元素反轉
len(animal) #確定列表長度