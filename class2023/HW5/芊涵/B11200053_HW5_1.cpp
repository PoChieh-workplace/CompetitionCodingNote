#include<iostream>

using namespace std;
int main(){
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    
    cout<<a[N-1];
    for(int i=N-2;i>=0;i--){
        cout<<" "<<a[i];
    }
    return 0;
}