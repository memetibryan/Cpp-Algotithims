#include <iostream>
using std::cout;

class Area{
	public:
		double calculateArea();
		Area();
	
	public:
		double area;
		double length;
		double width;
};

Area::Area(){
	
}

double Area::calculateArea(){
	cout << "Enter the Length : ";
	std::cin >> length;
	cout << "Enter the Width : ";
	std::cin >> width;
	area = length * width;
	return area;
}

int main() {
	Area area;
	area.length;
	area.width;
	cout << "Area is : " << area.calculateArea();
	return 0;
}
