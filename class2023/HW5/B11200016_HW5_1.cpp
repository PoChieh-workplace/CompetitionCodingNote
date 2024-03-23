#include<iostream>
#include<stack>
using namespace std;

int main(){
    int N,tmp;
    stack<int> a;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> tmp;
        a.push(tmp);
    }
    while(!a.empty()){
        cout << a.top() << " ";
        a.pop();
    }
    cout << '\b';
    return 0;
}