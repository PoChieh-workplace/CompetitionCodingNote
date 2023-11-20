#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main(){
    int t,count,infect;
    cin >> t;
    while(t!=0){
        cin >> count >> infect;
        deque<int> a;
        int dis[infect] = {};
        for(int i=0;i<infect;i++){
            cin >> dis[i];
        }
        sort(dis,dis+infect);

        a.push_back(abs(count-dis[infect-1]+dis[0])-1);
        for(int i=1;i<infect;i++){
            int tmp = dis[i]-dis[i-1]-1;
            if (tmp!=0){
                a.push_back(tmp);
            }
        }

        sort(a.begin(),a.end(),greater<int>());

        int ined = 0;
        int saved = 0;
        while(a.size()!=0){
            if(a.front()<=ined){
                break;
            }
            else if(a.front()-ined>1){
                saved+=(a.front()-ined-1);
            }else{
                saved+=1;
                break;
            }
            a.pop_front();
            ined+=4;

        }
        cout << count-saved << "\n";
        t-=1;
    }
}