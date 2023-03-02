import json

username = input("pls enter your name")

filename = 'username.json'
with open(filename,'w') as obj1:
    json.dump(username,obj1)
    print("we will remeber you "+username+" !")

with open(filename) as obj2:
    username2 = json.load(obj2)
    print("welcome back ! " + username2)
#以上分別為存入及讀取用戶名

""" 合併兩個程式 """
thefilename = 'user.json'
try:
    with open(thefilename) as obj3:
        username = json.load(obj3)
except FileNotFoundError:
    username = input("pls enter your username! ")
    with open(thefilename,'w') as obj3:
        json.dump(username,obj3)
        print("we will remember you when you come back "+username+" !")
else:
    print("welcome back ! "+username)


""" 重構 上方程式 """
def get_stored_username():
    """ 如果有用戶名就存取他 """
    filename = 'myusername.json'
   