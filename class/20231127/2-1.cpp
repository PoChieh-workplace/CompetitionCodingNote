#include<iostream>
using namespace std;
int main(){
    int fee;
    cin >> fee;

    if (fee>=100){
        cout << fee*0.6;

    }else if (fee>=90){
        cout << fee*0.7;

    }else if (fee>=80){
        cout << fee*0.8;

    }else if (fee>=70){
        cout << fee*0.9;

    }else{
        cout << fee;
    }


    system("pause");
    return 0;
}


