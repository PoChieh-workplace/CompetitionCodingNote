#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    double o = pow(a,2)+2*a*b+pow(b,2);
    cout << o << '\n';
    
    //系統暫停，extand terminal (提供資料用) 
    system("pause");
    return 0;
}