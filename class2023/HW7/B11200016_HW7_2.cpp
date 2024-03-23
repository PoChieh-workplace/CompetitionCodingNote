#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<bool> a(20000001,1);
    int c,l = 2,count = 0;
    cin >> c; 
    for(int i=2;i<4473;i++){
        if(a[i]){
            int k = 2*i;
            while(k<20000001){
                a[k] = 0;
                k+=i;
            }
        }
    }
    while(count != c){
        l+=1;
        if(a[l] && a[l+4]){
            count +=1;
        }
    }
    cout << l << ' ' << l+4;
    return 0;
}