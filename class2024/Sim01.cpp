#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
class Point2D{
private:	
	int _x,_y;	
public:
	Point2D(){_x=0;_y=0;}
	Point2D(int x,int y){_x=x;_y=y;}
	Point2D add(Point2D p1);
	Point2D operator+(Point2D p1);
	void operator++();
	bool operator==(Point2D p1);
	bool operator> (Point2D p1);
	bool operator< (Point2D p1);
	void show();
	friend Point2D add(Point2D p1,Point2D p2);
	friend class line;
};

class line{
private:
	int length;
	Point2D _p1;
	Point2D _p2;
public:
	line(Point2D p1,Point2D p2){
		this->_p1 = p1;
		this->_p2 = p2;
	}
	double len();
};
Point2D Point2D::add(Point2D p1){
	Point2D temp;
	temp._x = this->_x + p1._x;
	temp._y = this->_y + p1._y;
	return temp;
	// return Point2D(this->_x + p1._x, this->_y + p1._y);
}
Point2D Point2D::operator+(Point2D p1){
	Point2D temp;
	temp._x = this->_x + p1._x;
	temp._y = this->_y + p1._y;
	return temp;
	//return Point2D(this->_x + p1._x, this->_y + p1._y);
}
void Point2D::operator++(){
	this->_x++;
	this->_y++;
}
bool Point2D::operator==(Point2D p1){
	return this->_x==p1._x && this->_y==p1._y;
}
bool Point2D::operator> (Point2D p1){
	return (pow(this->_x,2)+pow(this->_y,2) > pow(p1._x,2)+pow(p1._y,2));
}
bool Point2D::operator< (Point2D p1){
	return (pow(this->_x,2)+pow(this->_y,2) < pow(p1._x,2)+pow(p1._y,2));
}
void Point2D::show(){
	cout << "x=" << _x << ", y=" <<  _y << endl;
}
Point2D add(Point2D p1,Point2D p2){
	Point2D temp;
	temp._x = p1._x + p2._x;
	temp._y = p1._x + p2._x;
	return temp;
}



int main()
{
	Point2D p1(1,2), p2(3,4);
	// p3=p1.add(p2);
	// p4=add(p1,p2);
	// p5=p1+p2;
	if(p1==p2){
		cout << "p1=p1" << '\n';
	}else if(p1>p2){
		cout << "p1>p1" << '\n';
	}else if(p1<p2){
		cout << "p1<p1" << '\n';

	}
	p1.show();
	system("pause");
	return 0;	
} 
/*
x=4, y=6
x=4, y=6
*/
