#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;                            // 宣告 (int) a,b
    cin >> a >> b;                      // 輸入 a,b
    double o = pow(a,2)+2*a*b+pow(b,2); // 計算 a^2+2*a*b+b^2 並賦值給 (double) o
    cout << o << '\n';                  // 輸出 0
    
    //系統暫停，extand terminal (提供資料用) 
    system("pause");
    return 0;
} 