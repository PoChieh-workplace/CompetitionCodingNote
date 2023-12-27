#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a],c[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    for(int i=0;i<a;i++){
        cin>>c[i];
    }
    int count=0;
    for(int i=0;i<a;i++){
        if(b[i]==c[i]){
            count+=1;
        }
    }
    cout << count;
    return 0;
}