import pizza
#導入了名為pizza.py檔案的模塊 我們將能夠使用在此模塊中的所有函數
pizza.make_pizza(16,'mushroom','green peppers')

from pizza import make_pizza
#從模塊引入特定函數
#用此方法調用函數時就無需使用句點 只需指定其名稱如下
make_pizza(16, 'mushroom', 'green peppers')


from pizza import make_pizza as mp
#從模塊引入特定函數 並用as將函數名稱指定為mp

import pizza as p
#給pizza模塊指定別名p

from pizza import *
#可引入模塊中的所有函數 且無需使用句點表示法
