#include <iostream>
using namespace std;

double temperature_from_c_to_f(double c){
    return c*1.8+32;
}

int main(){
    double c;
    cin >> c;
    cout << temperature_from_c_to_f(c) << '\n';
    return 0;
}