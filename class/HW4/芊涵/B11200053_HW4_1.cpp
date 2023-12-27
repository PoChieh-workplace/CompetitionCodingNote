#include<iostream>

using namespace std;
int main(){
    long long int i=2,N;
    cin >> N;
    while(i*i<=N){
        if(N%i==0){
            cout << "No";
            return 0;
        }
        i+=1;
    }
    cout << "Yes";
    return 0;
}