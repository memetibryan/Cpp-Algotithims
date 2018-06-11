/*Function overloading that is, use the same function name as the super class for the sub class to overwrite the output of the super class.*/

#include <iostream>
using namespace std;

#define pie 3.142

class Rectangle{
	public:
		float area(float a, float b){
			return a*b;
		}
};

class Circle: public Rectangle{
	public:
		float area(float a, float b, float c){
			return a*b*c;
		}
};

int main(){
	Rectangle rect;
	Circle c;
	cout << "Rectangle Area: " << rect.area(2.4, 8.2) << endl;
	cout << "Circle Area: " << c.area(pie, 5.8, 5.2);
	return 0;
}
