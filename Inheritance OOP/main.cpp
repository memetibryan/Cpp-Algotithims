#include <iostream>
using std::cout;
using std::cin;

class Person {
	public:
		void setName(char* n){
			name = n;
		}
		void setAge(int a){
			age = a;
		}
		void setGender(char* g){
			gender = g;
		}
	protected:
		char* name;
		int age;
		char* gender;		
};

class child: public Person{
	public:
		void setClinicNumber(int x){
			clinicNumber = x;
		}
		int clinicNumber;
};

class mother: protected Person{
	private:
		void setId(int m){
			id = m;
		}
		int id;
};

class student: public Person{
	private:
		void getStudentId(int p){
			studentId = p;
		}
		int studentId;
};

class doctor: public Person{
	void decalareDoctorId(int h){
		doctorId = h;
	}
	int doctorId;
};
int main() {
	child child;
	child.setClinicNumber(36);
	cout << "Age of the Child is: "<< child.clinicNumber;
	return 0;
}
