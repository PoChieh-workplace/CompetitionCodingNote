#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    int a[x][y];
    for (int z=0;z<x;z++){
        for (int b=0;b<y;b++){
            cin >> a[z][b];
        }
    }
    int c[x][y];
    for (int z=0;z<x;z++){
        for (int b=0;b<y;b++){
            int x_add=0,y_add=0;
            for(int i=0;i<x;i++){
                x_add+=a[i][b];
            }
            for(int i=0;i<y;i++){
                y_add+=a[z][i];
            }
            c[z][b] = (x_add/x)+(y_add/y);
        }
    }
    for (int z=0;z<x;z++){
        for (int b=0;b<y;b++){
            cout << c[z][b] << ' ';
        }
        cout << "\n";
    }
    return 0;
}