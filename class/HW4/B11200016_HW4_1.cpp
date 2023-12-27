#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int a,N;
    cin >> N;
    int count = sqrt(N);
    if (N==2){
        cout << "Yes";
        return 0;
    }
    for(int a=2;a<count;a++){
        if(N%a==0){
            cout << "No";
            return 1;
        }
    }
    cout << "Yes";
    return 0;
}