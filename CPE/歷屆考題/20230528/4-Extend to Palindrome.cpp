
#include<iostream>
#define int long long
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(0),cout.tie(0);
    int a,b,c,d;
    string s;
    while(cin>>s){
        a=-1;
        int i = s.size() - 1;
        for (int f = i; f >= 0; f--)
        {
            b = 0;
            while (s[i - b] == s[f + b])
            {
                if (b == (i - f))
                {
                    if (b > a)
                    {
                        a = b;
                        c = f;
                        d = i;
                    }
                    break;
                }
                b++;
            }
            }
        if((a+1)==s.size()){
            cout << s << '\n';
        }else if((d+1)==s.size()){
            cout << s;
            for (int i = c - 1; i >= 0; i--)
                cout << s[i];
            cout << '\n';
        }else{
            cout << s;
            for (int i = s.size() - 2; i >= 0; i--)
                cout << s[i];
            cout << '\n';
        }
    }
}
