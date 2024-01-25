#include<iostream>
#include<cmath>
using namespace std;
class Point
{
private:
	int x1;
	int y1;
	int x2;
	int y2;

public:
	 Point() {
		 x1 = 0;
		 y1 = 0; 
		 x2 = 0;
		 y2 = 0;
	}
	 int getx()
	 {
		 return x1;
	 }
	 int gety()
	 {
		 return y1;
	 }
	 void setx(int X)
	 {
		 x1 = X;
	 }
	 void sety(int Y)
	 {
		 y1 = Y;
	 }
	 int getx2()
	 {
		 return x2;
	 }
	 int gety2()
	 {
		 return y2;
	 }
	 void setx2(int X2)
	 {
		 x2 = X2;
	 }
	 void sety2(int Y2)
	 {
		 y2 = Y2;
	 }
	 int distance()
	 {
		 return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	 }
};



int main()
{
	Point p;
	p.setx(2);
	p.sety(5);
	p.setx2(4);
	p.sety2(3);
	cout << "Distance between two points:"<<p.distance();
}