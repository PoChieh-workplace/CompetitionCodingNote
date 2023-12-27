#include<iostream>
using namespace std;
int main(){
    int N,tmp,n0=0,n1=0,n2=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>tmp;
        if(tmp%3==0){
            n0+=1;
        }
        else if(tmp%3==1){
            n1+=1;
        }
        else{
            n2+=1;
        }
    }
    cout<<n0<<" "<<n1<<" "<<n2;
    return 0;
}