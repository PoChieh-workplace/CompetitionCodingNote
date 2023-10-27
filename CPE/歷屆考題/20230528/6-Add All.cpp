#include <iostream>
#include <queue>
using namespace std;
int main(){
    int count;
    while(cin>>count){
        if (count==0)break;
        priority_queue<int, vector<int>,greater<int>> pq;
        for(int i=0;i<count;i++){
            int a;
            cin >> a;
            pq.push(a);
        }
        int sum =0;
        while(pq.size()!=1){
            int tmp = pq.top();
            pq.pop();
            tmp+=pq.top();
            pq.pop();
            pq.push(tmp);
            sum+=tmp;
        }
        cout << sum << "\n";
    }
}