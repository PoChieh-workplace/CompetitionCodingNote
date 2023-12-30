#include <iostream>
using namespace std;

int A[3][3] = {
    {1,8,2},
    {4,7,0},
    {8,8,9}
};

int main(){
    int sum=0;
    for(int i=0;i<2;i++){
        sum+=A[i][i];
    }
    return 0;
}