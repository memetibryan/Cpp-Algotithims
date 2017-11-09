#include <iostream>
#include <string>
#include <sstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	int m = 1;
	int n;
	int arr[n];
	int j =0;
	cout << "Enter Array size \n";
	cin >> n;
	for(j=0; j < n; j++) {
		cout << "Input number \n";
        cin >> arr[j];
    }
    for(j=0; j < n; j++) {
		if (arr[j]+1 != arr[m]) {
			m++;
			cout << arr[j] + 1;
		}
    }
	return 0;
}
