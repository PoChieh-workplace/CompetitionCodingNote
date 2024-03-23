#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void bubble_sort(int *arr,int length){
    for(int i = 0; i<length-1;i++){
        for(int j = 0;j<length-i-1;j++){
            if(arr[j]>arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main(){
    int i = 0,a,l[10000],ls[10000];
    string s;
    getline(cin,s);
    istringstream iss(s);

    while(iss >> a){
        l[i] = a;
        ls[i] = a;
        i++;
    }
    bubble_sort(ls,i);
    for(int j=0;j<i;j++){
        int k = 0;
        while(l[j]!=ls[k]){
            k++;
        }
        cout << k <<' ';
    }
    cout << '\b';
    return 0;
}