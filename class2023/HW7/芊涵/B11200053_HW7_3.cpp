#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin >> a;
    for(int i=0;i<a.length();i++){
        if(a[i]=='A'){
            cout << ".-" << ' ';
        }
        else if(a[i]=='B'){
            cout << "-..." << ' ';
        }
        else if(a[i]=='C'){
            cout << "-.-." << ' ';
        }
        else if(a[i]=='D'){
            cout << "-.." << ' ';
        }
        else if(a[i]=='E'){
            cout << "." << ' ';
        }
        else if(a[i]=='F'){
            cout << "..-." << ' ';
        }
        else if(a[i]=='G'){
            cout << "--." << ' ';
        }
        else if(a[i]=='H'){
            cout << "...." << ' ';
        }
        else if(a[i]=='I'){
            cout << ".." << ' ';
        }
        else if(a[i]=='J'){
            cout << ".---" << ' ';
        }
        else if(a[i]=='K'){
            cout << "-.-" << ' ';
        }
        else if(a[i]=='L'){
            cout << ".-.." << ' ';
        }
        else if(a[i]=='M'){
            cout << "--" << ' ';
        }
        else if(a[i]=='N'){
            cout << "-." << ' ';
        }
        else if(a[i]=='O'){
            cout << "---" << ' ';
        }
        else if(a[i]=='P'){
            cout << ".--." << ' ';
        }
        else if(a[i]=='Q'){
            cout << "--.-" << ' ';
        }
        else if(a[i]=='R'){
            cout << ".-." << ' ';
        }
        else if(a[i]=='S'){
            cout << "..." << ' ';
        }
        else if(a[i]=='T'){
            cout << "-" << ' ';
        }
        else if(a[i]=='U'){
            cout << "..-" << ' ';
        }
        else if(a[i]=='V'){
            cout << "..." << ' ';
        }
        else if(a[i]=='W'){
            cout << ".--" << ' ';
        }
        else if(a[i]=='X'){
            cout << "-..-" << ' ';
        }
        else if(a[i]=='Y'){
            cout << "-.--" << ' ';
        }
        else if(a[i]=='Z'){
            cout << "--.." << ' ';
        }
    }
    cout << '\b';
    return 0;
}