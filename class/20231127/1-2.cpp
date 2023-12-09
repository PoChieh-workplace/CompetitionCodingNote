#include<iostream>
using namespace std;
int main(){
    int English,Math;
    cin >> English >> Math;
    if(English>=60&&Math>=60){
        cout << "A";
    }else if(English<60&&Math<60){
        cout << "C";
    }else{
        cout << "B";
    }

    system("pause");
    return 0;
}


