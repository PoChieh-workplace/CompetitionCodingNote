#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<bool> binary;
    int a;
    cin >> a;
    if(a==0){
        cout << "0" << '\n';
        return 0;
    }
    while(a!=0){
        binary.push(a%2);
        a/=2;
    }
    while(!binary.empty()){
        cout << binary.top();
        binary.pop();
    }
    cout << '\n';
    return 0;
}