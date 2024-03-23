#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int a[x][y];
    for (int z=0;z<x;z++){
        for(int b=0;b<y;b++){
            cin>>a[z][b];
        }
    }
    int k[y][x];
    for (int z=0;z<x;z++){
        for (int b=0;b<y;b++){
            k[b][x-z-1]=a[z][b];
        }
    }
    for (int z=0;z<y;z++){
        for(int b=0;b<x;b++){
            cout<<k[z][b]<<" ";
        }
        cout << '\n';
    }
    return 0;
}