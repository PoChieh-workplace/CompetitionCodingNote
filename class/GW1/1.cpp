#include <iostream>
using namespace std;

int main(){
    int start,end,sum;
    cin >> start >> end;
    sum = start;
    while(end>sum){
        start+=1;
        sum+=start;
    }
    cout << start;
    return 0;
}