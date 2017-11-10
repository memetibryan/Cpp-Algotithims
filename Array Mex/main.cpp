#include <iostream>
#include <string>
#include <sstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define nextline '\n'

using namespace std;

void ArrayMex () {
	cout << "Welcome to Array Mex!!.. by Bryan Memeti";
	cout << nextline;
	cout << "Enter an array of numbers and i will tell the smallest missing array";
	cout << nextline;
	cout << "Have Fun!!...Begin";
	cout << nextline;
	cout << "_________________________________________________________________________ \n";
}

int main() {
	ArrayMex (); //calls the arraymex function declared in the void above.
	int m = 1;
	int j = 0;
	int c = 0;
	int x = 1;
	int n;
	int arr[n];
	cout << "Enter Array size \n";
	cin >> n;
	for(j=0; j < n; j++) {
		cout << "Input number \n";
        cin >> arr[j];
    }
    while (m < n) {
    	if (arr[c] + x != arr[m]) {
			cout << arr[c] + 1;
			cout << ",";
		}
		c++;
		m++;
	}
	return 0;
}
