#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "依序輸入 a1 b1 c1 a2 b2 c2: ";
    double a1, a2, b1, b2, c1, c2;
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    double deter = a1 * b2 - a2 * b1;

    if (deter == 0) {
        cout << "沒有單一解" << endl;
        system("pause");
        return 404;
    }

    double x = (c1 * b2 - c2 * b1) / deter;
    double y = (a1 * c2 - a2 * c1) / deter;

    cout << "解 x: " << x << "\n";
    cout << "解 y: " << y << endl;
    system("pause");

    return 0;
}