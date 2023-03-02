class dog():
    """ 模擬小狗 """
    def __init__(self,name,age):    
        #為特殊方法 每創建一個新dog類別 都會自動運行
        """ 初始化屬性 """           
        #self不可少且必須位在形參之前 透過self 可以拜訪本身的屬性或方法
        self.name = name
        self.age = age
        self.ears = 2   
        #所有屬性皆需要有初始值 也可設定預設值如下
        #def __init__(self,name, age=20 )
        self.colors = 'red'

    def sit(self):
        """ 模擬小狗坐下 """
        print(self.name.title() + " is now sitting ")
    
    def roll_over(self):
        """ 模擬小狗打滾 """
        print(self.name.title() + " is now rolling ")
    
    def changecolors(self,color):   #實參加入self才能修改本身屬性
        self.colors = color

""" 
mydog = dog('willy',6)
print("the name of my dog is " + mydog.name)
# .name 調用屬性
mydog.sit()
mydog.roll_over()
# .sit() .roll_over() 調用方法

mydog.colors = 'green'    #訪問屬性並設定值
mydog.changecolors('blue')  #利用方法修改屬性
print(mydog.colors)

"""

class  Nose():
    """ 描述鼻子 """
    def __init__(self,size = 'small'):
        self.size = size
    def describesize(self):
        print("the nose size is " + str(self.size))

class poppy(dog):
    """ dog的子類 """
    def __init__(self, name, age):
        """ 初始化父類屬性 """  #父類又稱為superclass
        super().__init__(name, age)
        """ 子類的特有屬性 """
        self.colors = 'black'
        self.tail = 'short'
        self.nose =  Nose() #將另一類當成poppy的屬性 類似linked list 

    def describetail(self):
        """ 描述尾巴長度 """
        print(self.tail)
    
    def sit(self):
        """ 重寫父類的方法sit """
        print(self.name.title() + " dont want sit ")

"""
mypoppy = poppy('hank',1)
mypoppy.sit()
mypoppy.roll_over()
mypoppy.describetail()
mypoppy.sit()
"""