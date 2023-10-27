#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    vector<string> v;
    while(1){
        getline(cin,s);
        if(s.size()==1&&s[0]=='0')
            break;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                string t="";
                while(isalpha(s[i]))
                    t+=s[i++];
                i--;
                v.push_back(t);
                cout<<t;
            }
            else if(isdigit(s[i])){
                string t="";
                int x=0;
                while(isdigit(s[i]))
                    x=x*10+s[i++]-'0';
                i--;
                t=v[v.size()-x];
                v.erase(v.end()-x);
                v.push_back(t);
                cout<<t;
            }
            else
                cout<<s[i];
        }
        cout<<'\n';
    }
    for(auto e:v){
        cout<<e<<' ';
    }
}