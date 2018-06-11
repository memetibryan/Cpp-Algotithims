/*Encapsulation...making private data public for use outside the class the are in*/

#include <iostream>
using namespace std;

class Summation{
	private:
		int length;
		int width;
	public:
		int area(int a,int b){
			length = a;
			width = b;
			return a * b;
		}
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Summation s;
	cout << "The Sum is: " << s.area(20, 5) << endl;
	return 0;
}
