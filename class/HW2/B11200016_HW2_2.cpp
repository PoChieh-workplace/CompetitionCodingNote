#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    for(cin >> a >> b;a<=b;a++){
        cout << pow(a,2) << " ";
    }
    cout << '\b';

    // system("pause");
    return 0;
}