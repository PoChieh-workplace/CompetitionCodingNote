#include <iostream>
#define int long long
using namespace std;

signed main(){
    int n,c1,n1,c2,n2;
    while (cin >> n)
    {
        if(n==0)return 0;
        cin >> c1 >> n1 >> c2 >> n2;
        pair<int,int> fc,ec;
        bool swap = false;
        if ((float)c1/(float)n1<(float)c2/(float)n2){
            fc ={c1,n1};
            ec ={c2,n2};
        }else{
            fc ={c2,n2};
            ec ={c1,n1};
            swap = true;
        }
        bool end = false;
        for(int i=n/fc.second;i>=0;i--){
            int last = n-i*fc.second;
            if (last%ec.second==0){
                if(swap)cout << last/ec.second << " " << i << "\n";
                else cout << i << " " << last/ec.second << "\n";
                end = true;
                break;
            }
        }
        if(!end)cout << "failed" << "\n";
    }
}

