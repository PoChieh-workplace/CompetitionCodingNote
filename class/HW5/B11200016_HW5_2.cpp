#include <iostream>
using namespace std;

int main(){
    int N,tmp,a[3] {0,0,0};
    cin >> N;
    for(;N>0;N--){
        cin >> tmp;
        a[tmp%3]+=1;
    }
    cout << a[0] << " " << a[1] << " " << a[2];
    return 0;
}