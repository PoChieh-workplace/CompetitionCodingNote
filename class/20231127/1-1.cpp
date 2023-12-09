#include<iostream>
using namespace std;
int main(){
    int English,Math;
    cin >> English >> Math;
    cout << (English>=60?(Math>=60?"A":"B"):(Math>=60?"B":"C")) << '\n';
    
    system("pause");
    return 0;
}