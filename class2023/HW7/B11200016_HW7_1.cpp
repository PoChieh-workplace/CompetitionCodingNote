#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string a,tok;
    getline(cin,a);
    stringstream ss(a);
    vector<int> lis;
    while(getline(ss,tok,' ')){
        lis.push_back(stoi(tok));
    }
    vector<int> sor(lis);
    sort(sor.begin(),sor.end());
    for(auto a:lis){
        for(int i=0;i<sor.size();i++){
            if (a==sor[i]){
                cout << i << ' ';
                break;
            }
        }
    }
    cout << '\b';
    return 0;
}