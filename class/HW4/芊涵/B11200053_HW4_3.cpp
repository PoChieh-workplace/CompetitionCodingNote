#include <iostream>
using namespace std;
int main(){
    char a;
    cin >> a;
    if (a>='a'&&a<='z'){
        cout << "Lowercase letter";
    }else if(a>='A'&&a<='Z'){
        cout << "Uppercase letter";
    }else{
        cout << "Not a letter";
    }
    return 0;
}