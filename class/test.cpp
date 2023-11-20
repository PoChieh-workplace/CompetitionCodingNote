#include<iostream>
using namespace std;
int main(){
    double a1,a2,b1,b2,c1,c2,x,y,d;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    d=a1*b2-a2*b1;

    if(d==0){
        cout<<"error";
        return 0;
    }

    x=(c1*b2-c2*b1)/d;
    y=(a1*c2-a2*c1)/d;
    cout<< x <<" "<<y << '\n';
    return 0;
}