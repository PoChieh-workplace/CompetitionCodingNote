#include<iostream>
using namespace std;

int main(){
    int x,y;        // 宣告座標 x,y
    cin >> x >> y;  // 輸入
    if (x>0){
        if(y>0) cout << "1" << '\n';       // x>0,y>0
        else cout << "4" << '\n';          // x>0,y<0
    }else{
        if(y>0) cout << "2" << '\n';       // x<0,y>0
        else cout << "3" << '\n';          // x<0,y<0
    }

    //系統暫停，extand terminal (提供資料用) 
    system("pause");
    return 0;
}