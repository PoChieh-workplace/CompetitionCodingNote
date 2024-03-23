#include <iostream>
using namespace std;
struct point{
    int x;
    int y;
};
struct rect {
    struct point p1;
    struct point p2;
};
int main()
{
    struct square s = { { 2, 6 }, { 6, 10 } };
    cout << area(s) << endl;
    return 0;
}
