#include <iostream>
#include <string>
#include <sstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
#define pie 3.142
#define newline '\n'

string name;
string mystring;
double radius;

int main() {	
	/*Takes user name*/
	cout << "Enter your name please to proceed........ \n";
	cin >> name;
	
	/*Calculate area of a circle*/
	cout << "Enter radius to calculate the area \n";
//	getline (cin, mystring);
//	stringstream(mystring) >> radius;
	cin >> radius;
	cout << "Dear" << " " << name << ", " << "The area is";
	cout << newline;
	cout << pie * radius * radius;
	cout << newline;
	cout << newline;
	
// goto loop
	int n=100;
loop:
cout << n << ", ";
n--;
if (n>0) goto loop;
cout << "Hurrray! You did it \n";
	return 0;
}
