alien = {'color': 'green', 'points': 5}  # 字典(鍵key-值value)
print(alien['color'])
print(alien)  # 印出整個字典

alien['height'] = 170  # 添加值
alien['weight'] = 40  # 添加值
print(alien)

print("the alien color is " + alien['color'])
alien['color'] = 'red'  # 修改外星人的顏色
print("the alien color is " + alien['color'])

dog = {}  # 創建空字典
dog['color'] = 'yellow'
dog['feet'] = 4

del dog['color']  # 刪除字典中的 鍵-值
print(dog)

favoritelanguage = {  # 儲存類似對象的字典
    'jack': 'python',
    'nancy': 'c',
    'jen': 'cpp',
}

for name, language in favoritelanguage.items():  # 在for中依次將name&language對應至字典中並印出
    print('\nname: ' + name)  # item()
    print('language: ' + language)

for Name in favoritelanguage.keys():  # 依次印出key值
    print(Name.title())  # keys()

for Name in favoritelanguage:  # 遍曆字典時系統默認將輸出key
    print(Name.title())

for value in favoritelanguage.values():
    print(value.title())  # 用values()可讀取字典中的值

for value in set(favoritelanguage.values()):  # 用set()可剔除重複的值
    print(value.title())

# 遍曆字典時 字典只注重 key-value 因此返回順序不一
for name in sorted(favoritelanguage.keys()):  # sorted可獲得特定順序排列的字典
    print(name.title())

alien1 = {'color': 'red', 'points': 3}
alien2 = {'color': 'green', 'points': 4}
alien3 = {'color': 'blue', 'points': 5}

aliens = [alien1, alien2, alien3]  # 用列表表示字典的集合
print(aliens)

pizza = {
    'crust': 'thick',
    'topping': ['mushroom', 'extra cheese'],    #將列表寫在字典中
}
print("you order the " + pizza['crust'] + "pizza")
print("and the topping with")
for topping in pizza['topping']:
    print("\t"+topping)


