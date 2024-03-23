#include <iostream>
using namespace std;
int main(){
    int H,M;
    cin>>H>>M;
    if((0<=H&&H<12) || (H==12&&M==0)){
        cout<<1;
    }else if((12<=H&&H<18)||(H==18&&M==0)){
        cout<<2;
    }
    else if(18<=H&&H<23){
        cout<<3;
    }
    return 0;
}