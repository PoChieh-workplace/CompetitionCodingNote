#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << (a>b?(a>c?a:c):(b>c?b:c));


    system("pause");
    return 0;
}