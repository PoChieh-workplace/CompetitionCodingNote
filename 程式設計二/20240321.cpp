#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class point{
private:
    int _x,_y;
public:
    point(int x,int y){_x=x;_y=y;}
    double len();
    point operator+(point);
    point operator-(point);
    bool operator> (point);
    bool operator< (point);
    bool operator==(point);
    bool operator>=(point);
    bool operator<=(point);

};
double len(){
    return sqrt(pow(this->_x,2)+pow(this->_y,2));
}
point point::operator+(point p){
    return point(this->_x+p._x,this->_y+p._y);
}
point point::operator-(point p){
    return point(p._x-this->_x,p._y-this->_y);
}
bool point::operator>(point p){
    return this->len()>p.len();
}
bool point::operator<(point p){
    return this->len()<p.len();
}
bool point::operator==(point p){
    return this->len()==p.len();
}
bool point::operator>=(point p){
    return this>p || this==p;
}
bool point::operator<=(point p){
    return this<p || this==p;
}


int main(){
    point a(3,2);
    point b(3,2);
    if(a)
}