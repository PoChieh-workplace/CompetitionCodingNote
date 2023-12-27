#include <iostream>
using namespace std;
int main(){
    int a,b,c,maxs,min1,min2;
    cin >> a >> b >> c;
    if (a>b){
        if(a>c){
            maxs=a;
            min1=b;
            min2=c;
        }
        else{
            maxs=c;
            min1=a;
            min2=b;
        }
    }
    else{
        if(b>c){
            maxs=b;
            min1=a;
            min2=c;
        }
        else{
            maxs=c;
            min1=a;
            min2=b;
        }
    }
    if(min1+min2<=maxs){
        cout << "Not a Triangle";
        return 0;
    }
    if(min1*min1+min2*min2<maxs*maxs){
        cout << "Obtuse angle";
    }
    else if(min1*min1+min2*min2==maxs*maxs){
        cout <<"Right angle";
    }
    else{
        cout <<"Acute angle";
    }
    return 0;
}