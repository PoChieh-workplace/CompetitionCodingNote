#include<iostream>
using namespace std;

double a(double c);

int main(){
    double c;
    cin >> c;
    cout << temper(c);
    return 0;
}

double a(double c){
    return c*1.8+32;
}