#include <iostream>
#include <queue>
using namespace std;
int main(){
    int L,tmp,count=0;
    cin >> L;
    queue<int> a;
    for(int i=0;i<L;i++){
        cin >> tmp;
        a.push(tmp);
    }
    while(!a.empty()){
        cin >> tmp;
        if(tmp==a.front()){
            count +=1;
        }
        a.pop();
    }
    cout << count;
    return 0;
}