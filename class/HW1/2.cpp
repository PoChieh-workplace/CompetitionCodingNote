#include<iostream>
using namespace std;

int main(){
    int hours,minetes;              // 宣告時與分
    cin >> hours >> minetes;        // 輸入時間

    // 方法一
    int mcount = hours*60+minetes;  // 記錄總分鐘數
    if(mcount<=720){                // 12:00 以前 早上
        cout << "1" << '\n';
    }else if(mcount<=1080){         // 12:01~18:00 下午
        cout << "2" << '\n';
    }else{                          // 18:01 以後 晚上
        cout << "3" << '\n';
    }
    //系統暫停，extand terminal (提供資料用) 
    system("pause");
    return 0;
}
//方法二
// switch (hours*60+minetes){
// case 0 ... 720:
//     cout << "1" << '\n';
//     break;
// case 721 ... 1080:
//     cout << "2" << '\n';
//     break;
// case 1081 ... 1440:
//     cout << "3" << '\n';
//     break;
// default:
//     cout << "error" << '\n';
//     break;
// }
