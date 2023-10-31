#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,L;
    while(cin >> a >> b >> c >> d >> L){
        if(a==0&&b==0&&c==0&&d==0&&L==0)
            break;
        int count = 0;
        for(int i=0;i<L+1;i++){
            if(!((a*i*i+b*i+c)%d))
                count+=1;
        }
        cout << count << "\n";
    }
}