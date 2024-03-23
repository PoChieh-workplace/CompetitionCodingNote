#include <iostream>
using namespace std;
struct point{
    int x;
    int y;
};
struct square {
    struct point p1;
    struct point p2;
};

int area(struct square s){
    return abs(s.p1.x-s.p2.x)*abs(s.p1.y-s.p2.y);
};

int main()
{
    struct square s = { { 2, 6 }, { 6, 10 } };
    cout << area(s) << endl;
    return 0;
}
