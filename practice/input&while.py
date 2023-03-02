""" name = input("pls input your name: ")
print("hello " + name + " !")

sentense = "pls"
sentense += " enter your name: "
name = input(sentense)  # 可以將多行的提示儲存在變數中
print("hi " + name)

message = ""  # 可當用戶輸入quit時退出
while message != 'quit':
    message = input(sentense)
    print(message + "\n")

active = True  # 此行為flag 可以讓程序在滿足某些條件時停止
while active:
    message = input(sentense)

    if message == "quit":
        active = False
    else:
        print(message)

while True:
    message = input(sentense)

    if message == "quit":
        break   # break可退出當前循環

currentnum = 0
while currentnum < 10:
    currentnum += 1
    if currentnum % 2 == 0:
        continue        #continue可在數字是偶數時返還到循環開頭 藉此可只印出奇數
    print(message) """

unconfirm = ['alice', 'brian' ,'candace']
confirm = []

while unconfirm:    #while unconfirm裡還有元素就繼續執行
    current = unconfirm.pop()   #從列表末尾pop出元素

    print("verifying user: " + current.title())
    confirm.append(current)        #將元素加入列表中

print("the following user have been confirm")
for user in confirm:
    print(user.title())



pets = ['dogs', 'horses', 'cows', 'cats', 'rabbits']
print(pets)

while "cats" in pets:   #移除列表中特定元素
    pets.remove('cats')

print(pets)




