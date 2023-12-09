#include<iostream>
using namespace std;

int main(){
    int a,b,k;
    cin >> a >> b;
    if (b>a){
        k = b;
        b = a;
        a = k;
    }
    while(a%b){
        k = b;
        b = a%b;
        a = k;
    }
    cout << b;
    system("pause"); 
    return 0;
}