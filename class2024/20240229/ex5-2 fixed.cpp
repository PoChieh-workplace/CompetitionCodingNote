#include <iostream>
#include <cmath>
using namespace std;
struct point{
    int x;
    int y;
};
struct rect {
    struct point p1;
    struct point p2;
    int area(){
        return abs(p1.x-p2.x)*abs(p1.y-p2.y);
    }
};

int main()
{
    struct rect s = { { 2, 6 }, { 6, 10 } };
    cout << s.area() << endl;
    return 0;
}
