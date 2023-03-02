import json

number = [2,3,6,4,7,33]

filename = 'numbers.json'
with open(filename,'w') as obj1:
    json.dump(number,obj1)
#dump(要存儲的數據,可儲存數據的對象)


number2 = [3,2,546,3,23]

with open(filename) as obj2:
    number2 = json.load(obj2)
print(number2)

#以上為共享數據的簡單方法

