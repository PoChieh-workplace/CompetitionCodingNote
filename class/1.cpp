#include<iostream>
using namespace std;

void one(){
    double count;
    cin >> count;
    cout << (count>=60?100:(count>=30?70:50));
    system("pause");
}
int main(){
    one();
}
