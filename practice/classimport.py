from my_class import dog

mydog = dog('jack',5)
mydog.sit()

from my_class import dog,poppy\
#引入多個類

import my_class
mynewdog = my_class.poppy("hach",7)
#導入整個模塊 再用句點訪問需要的類別

from my_class import *
#導入所有類
