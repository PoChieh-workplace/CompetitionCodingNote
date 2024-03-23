#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    for(int i = (a+1)/2;i<=b/2;i++){
        cout << i*2 << " ";
    }
    cout << "\b";
    
    // system("pause");
    return 0;
}