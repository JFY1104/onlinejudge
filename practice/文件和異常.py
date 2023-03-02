with open('pi.digits.txt') as file_object:
    contents = file_object.read()
    print(contents)
# open('要打開的文件名稱') with在不用訪問文件時自動關閉
# 取代了close()
# 若文件不在同個資料夾 可用相對/絕對路徑尋找ex open('text_files\filename.txt')

filename = 'pi.digits.txt'
with open(filename) as file_object:
    for line in file_object:
        print(line)
#       print(line.rstrip())

filename2 = 'pi.digits2.txt'
with open(filename2, 'w') as file_object:
    file_object.write("i love programming")
# 'w'寫入 'r'讀取 'a'附加    若寫入檔案不存在 將自動建立

with open(filename2, 'a') as file_object:
    file_object.write("i love reading")
#附加模式會將內容添加到文件末尾 而不是取代


""" 使用try-except代碼塊檢測異常 """
while True:
    number = input("enter the number enter q to quit")
    if number == 'q':
        break
    number2 = input("enter the second number")
    try:
        answer = int(number)/int(number2)
    except ZeroDivisionError:
        print("you cant divide by zero ")
    else:
        print(answer)
#若try中的代碼無問題 將直接跳過except部分
#try-except 可修改報錯訊息 讓用戶無法看見traceback
#可使用 pass 跳過輸出訊息



with open('pi.digits.txt') as file_object:
    contents = file_object.read()
    print(len(contents.split()))
#指出有多少string

def count_words(filename):
    """ 計算文件包含多少單詞 """
    try:
        with open(filename) as obj1:
            contents = obj1.read()
    except FileNotFoundError:
            print("sorry "+ filename+ " is not found")
    else:
            words = contents.split()
            num_words = len(words)
            print( filename +" has "+ num_words +" words ")

