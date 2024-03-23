#include<iostream>
using namespace std;
int main(){
    int i=2,N;
    cin >> N;
    while(i<N){ 
        if(N%i==0){ // 偵測 i 是否為 N 的因數
            cout << "No";
            return 0;
        }
        i+=1;
    }
    cout << "Yes";
    return 0;
}
