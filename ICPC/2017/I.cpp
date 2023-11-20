#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int count,x,y,dis = 0;
    cin >> count;
    cin >> x >> y;
    int max_x=x,max_y=y,min_x=x,min_y=y,sx=x,sy=y;
    for(int i=1;i<count;i++){
        int tmpx,tmpy;
        cin >> tmpx >> tmpy;
        max_x = tmpx>max_x?tmpx:max_x;
        min_x = tmpx<min_x?tmpx:min_x;
        max_y = tmpy>max_y?tmpy:max_y;
        min_y = tmpy<min_y?tmpy:min_y;
        dis += tmpx==x?abs(y-tmpy):abs(x-tmpx);
        x = tmpx;
        y = tmpy;
    }
    dis += sx==x?abs(y-sy):abs(x-sx);
    cout << dis - (max_x-min_x)*2 - (max_y-min_y)*2 << endl;
    system("pause");
}