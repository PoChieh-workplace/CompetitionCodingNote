#include <iostream>
using namespace std;
int main(){
    char a;
    cin >> a;
    switch (a)
    {
    case 'a' ... 'z':
        cout << "Lowercase letter";
        break;
    case 'A' ... 'Z':
        cout << "Uppercase letter";
        break;
    default:
        cout << "Not a letter";
        break;
    }
    return 0;
}