#include<iostream>
using namespace std;

int main(){
    int a,b,n;
    cin >> a >> b >> n;
    int sum = a;
    while(--n){
        sum += a+n*b;
    }
    cout << sum;
    // system("pause");
    return 0;
}