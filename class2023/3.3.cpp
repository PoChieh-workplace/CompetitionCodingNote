#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int edge[3];
    cin >> edge[0] >> edge[1] >> edge[2];
    sort(edge,edge+3);

    if(edge[0]+edge[1]<=edge[2]){
        cout << "Not a Triangle" << '\n';
        return 1;
    }

    int tri[2] {pow(edge[2],2),(pow(edge[0],2)+pow(edge[1],2))};
    
    if(tri[0]>tri[1]){
        cout << "Obtuse angle" << '\n';
    }else if(tri[0]==tri[1]){
        cout << "Right angle" << '\n';
    }else{
        cout << "Acute angle" << '\n';
    }

    return 0;
    
}