#include <iostream>
using namespace std;
int main(){
    short x,y;
    cin >> x >> y;
    pair<short,short> av[x][y];
    fill(&av[0][0],&av[0][0] + x*y,make_pair(0,0));
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            short tmp;
            cin >> tmp;
            for(int k=0;k<x;k++){
                av[k][j].first+=tmp;
            }
            for(int k=0;k<y;k++){
                av[i][k].second+=tmp;
            }
        }
    }
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cout << av[i][j].first/x+av[i][j].second/y << " ";
        }
        cout << "\b\n";
    }
    return 0;
}