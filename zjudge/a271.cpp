#include<iostream>
#include<string>
#include<sstream>
using namespace std;


int main(){
    int testtimes;
    cin >> testtimes;   
    cin.ignore();                       //輸入測資數目
    for(int i = 1 ; i <= testtimes ; i++){  //執行(測資數目)次
                            
        string first ,second ;              //first為xyzwnm ,second為每天吃的蘿蔔
        int hp=0;                           //hp為血量 debuff為中毒狀態
        int debuff=0;
        getline(cin,first);
        getline(cin,second);
        stringstream s1;
        string cutline;
        s1 << first;

        int parameter[7] = {0};             //用parameter[]接收 first切割後的字串
        int count = 1;                      //parameter[1]到parameter[6]分別接收xyzwnm
        while(s1 >> cutline){             
            parameter[count] = stoi(cutline);
            count ++;
        }

        s1.str("");
        s1.clear();
        cutline = "";
        cutline.clear();
        
        
        if(second == ""){                              //如果直接問第一天體重 就輸出m 並break
            cout << parameter[6] << 'g'  << endl;
            continue;    
        }

        hp += parameter[6];
        s1 << second;    
        while(s1 >> cutline){                          //將second分割 讀取吃了甚麼蘿蔔
            if(debuff > 0){
                hp -= (parameter[5]*debuff);           //先判斷有無中毒 先扣hp 再判斷是否死亡 
                if(hp <= 0){
                cout << "bye~Rabbit" << endl;
                break;
                }
            }
            
            if(stoi(cutline) == 1){                    //讀取到的字串1 2 3 4 分別對應
                hp += parameter[1];                    //紅 白 黃 黑 色的蘿蔔
            }
            else if(stoi(cutline) == 2){
                hp += parameter[2];
            }
            else if(stoi(cutline) == 3){
                hp -= parameter[3];
            }
            else if(stoi(cutline) == 4){               //若吃到黑色蘿蔔會給與中毒(debuff)並在
                hp -= parameter[4];                    //下一次(天)讀取字串時扣血
                debuff += 1;
            }

            if(hp <= 0){                                //如果吃完hp < 0 則輸出bye
                cout << "bye~Rabbit" << endl;
                break;
            }
            //cout << "hp now =" << hp <<endl;
        }
        if(hp > 0){                                     //讀取完全部天數所吃蘿蔔後
        cout << hp << 'g' << endl;}                     //若hp > 0 則輸出體重

    }
}