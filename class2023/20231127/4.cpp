#include <iostream>
using namespace std;
int main()
{
    int a,b,n;
    cin >> a >> b >>n;
    int i=0,s=0;
    while(i<n){
        s+=(a+b*i);
        i+=1;
    }
    cout << s;
    return 0;
}