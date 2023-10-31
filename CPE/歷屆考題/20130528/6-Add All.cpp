#include <iostream>
#include <queue>
using namespace std;
int main(){
    int count;
    while(cin>>count){
        // 0時結束
        if (count==0)break;
        
        // 堆疊資料結構，使用優先權佇列要處理最小資料，反轉佇列排序
        priority_queue<int, vector<int>,greater<int>> pq;
        for(int i=0;i<count;i++){
            int a;
            cin >> a;
            pq.push(a);
        }
        int sum =0;
        // 不斷合計最小兩值並替換
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