#include <iostream>
using namespace std;
int main(){
    short x,y;
    cin >> x >> y;
    short a[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<y;i++){
        for(int j=x-1;j>=0;j--){
            cout << a[j][i] << " ";
        }
        cout << "\b\n";
    }
    return 0;
}