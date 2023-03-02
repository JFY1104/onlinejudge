def greet_user(username):  # 函數名及接收的變數
    """此行寫函數定義"""  # shift alt A
    print("hello "+username.title()+"!")


greet_user('jack')


def describe_pet(pet_name, animal_type="dog"):  # 可指定預設值 這樣在傳遞實參時就可不提供
    """ 顯示寵物的信息 """
    print("\nI have a " + animal_type + ".")
    print("My " + animal_type + "s name is "+pet_name.title()+".")


describe_pet(pet_name='hank')  # 默認為dogs
describe_pet(pet_name='jamopki', animal_type='cat')
describe_pet('ian', 'cows')
# 以上三種皆能使用





def get_fornatted_name(firstname, lastname, middle_name=''):  # 有中間名時將其輸出
    """ 返回完整性名 """
    if middle_name:
        full_name = firstname + ' ' + middle_name + ' ' + lastname
    else:
        full_name = firstname + " " + lastname
    return full_name.title()


musician = get_fornatted_name('jimi', 'hendrix')
print(musician)
musician = get_fornatted_name('jimi', 'hendrix', 'hash')
print(musician)






def build_person(first_name, last_name, age=''):
    """ 返回一個字典 包含其中一個人的信息 """

    person = {'first': first_name, 'last': last_name}
    if age:  # 要寫在字典定義後
        person['age'] = age
    return person


musician = build_person('jimi', 'hendrix')
print(musician)
musician = build_person('jimi', 'hendrix', age=27)
print(musician)







def print_models(unprinted, complete):  # 將列表傳遞至函數中
    """ 
    模擬打印每個設計 直到全部印出
    打印完之後 將其移至列表中
    """
    while unprinted:
        current_design = unprinted.pop()

        print("printing model: " + current_design)
        complete.append(current_design)


def show_complete_design(complete_design):
    """ 顯示打印好的所有模型 """
    print("\n the following models have been printed: ")
    for completed_model in complete_design:
        print(completed_model)


unprinted_design = ['iphone case', 'robot pendant', 'dedecagedron']
completed_design = []


print_models(unprinted_design, completed_design)
# print_models(unprinted_design[:], completed_design)
# list_name[:] 可傳遞列表的副本 避免原列表被修改
show_complete_design(completed_design)







def make_pizza(size, *toppings):
    # 若想讓函數接收不同類型的實參 要將接收任意數量類型的實參放至最後
    # 傳遞任意數量的實參 利用*topping 創建一個名為topping的空元祖
    """ 打印顧客點的所有配料 """
    print("\nmaking " + str(size) + " feet pizza")
    for topping in toppings:
        print("- " + topping)


make_pizza(16, 'mushroom', 'green peppers', 'extra cheese')





def build_profile(first, last, **user_info):
    # **user_info 表創建一個名為user_info的空字典 並將收到的所有名稱
    #   key-value都封裝至此字典中
    """ 創建一個包含用戶所有信息的字典 """
    profile = {}
    profile['first_name'] = first 
    profile['last_name'] = last
    for key,value in user_info.items():
        profile[key] = value
    return profile

user_profile = build_profile('albert', 'einstein', location = 'princeton', 
 field = 'physics')
print(user_profile)

