#include<iostream>
using namespace std;

int main(){
    int a,c=1;
    for(cin >> a;a>0;a--){
        c*=a;
    }
    // Attention！ In math,(0!)=1.
    cout << c << '\n';
    return 0;
}