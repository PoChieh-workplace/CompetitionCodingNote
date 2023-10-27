#include <iostream>
#include <string>
using namespace std;

int main(){
    int y,m,d;
    char da1,da2;
    cin >> y >> da1 >> m >> da2 >> d;
    if(y<2023 or (y==2023 && m<9) or (y==2023 && m==9 && d<17)){
        cout << "GOOD" << endl;
    }else{
        cout << "TOO LATE" << endl;
    }
    system("pause");
}

