#include<iostream>
using namespace std;

int main(){
    int a;
    int b[5][4];
    for(int i = 0;i<5;i++){
        for(int j=0;j<4;j++){
            b[i][j] = i*j;
        }
    }
    cout << b[2][2];
    return 0;
}