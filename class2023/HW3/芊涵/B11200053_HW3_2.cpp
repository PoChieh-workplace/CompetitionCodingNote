#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int result=N;
    while(N!=1){
        N-=1;
        result*=N;
    }
    cout << result;
    return 0;
}