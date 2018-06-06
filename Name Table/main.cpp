#include <iostream>
using namespace std;

class Counter{
	public:
		int getIndex();
		int index;
};

int Counter::getIndex(){
	Counter();
	std::cout << "Enter your index to print to it:";
	std::cin >> index;
	while(index >= 0){
		for (int m = 0; m < index; m++){
			cout << "Bryan_Memeti" << " | ";
		}
	cout << index << endl;
	index = index -= 1;
	}
}

int main() {
	Counter counter;
	counter.getIndex();
	return 0;
}
//courtesy of Bryan Memeti
