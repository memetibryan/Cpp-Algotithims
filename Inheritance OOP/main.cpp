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
				
		char* name;
		int age;
		char* gender;
		
	protected:
		
	private:
};

class child: public Person{
	public:
		int setClinicNumber(int x){
			clinicNumber = x;
		}
		int clinicNumber;
};

class mother: public Person{
	public:
		void setId(int m){
			id = m;
		}
		int id;
};

class student: public Person{
	public:
		void getStudentId(int p){
			studentId = p;
		}
		int studentId;
};

class doctor: public Person{
	public:
		void decalareDoctorId(int h){
		doctorId = h;
	    }
	int doctorId;
};
	
int main() {
	int numb;
		
	cout << "Whose data do you want to Enter? \n" << "Enter (1) for child, (2) for doctor, (3) for mother or (4) for student :\n";
	cin >> numb;
	
	if (numb == 1){
	child child;
	cout << "Enter ClinicNumber of the Child : ";
	cin >> child.clinicNumber;
	cout << "Enter Age: ";
	cin >> child.age;
	cout << "____________________________________________ \n";
	cout << "Details of the Child :" << "\n\n";
	cout << "ClinicNumber : " << child.clinicNumber << "\n";
	cout << "Age : " << child.age;
	}
	
	if (numb == 2){
	doctor doctor;
	cout << "Enter DoctorId of the doctor :";
	cin >> doctor.doctorId;
	cout << "Enter Age: ";
	cin >> doctor.age;
	cout << "____________________________________________ \n";
	cout << "Details of the doctor :" << "\n\n";
	cout << "DoctorId :" << doctor.doctorId << "\n";
	cout << "Age : " << doctor.age;
	}
	
	if (numb == 3){
	mother mother;
	cout << "Enter National Id of the mother :";
	cin >> mother.id;
	cout << "Enter Age: ";
	cin >> mother.age;
	cout << "____________________________________________ \n";
	cout << "Details of the mother :" << "\n\n";
	cout << "National Id :" << mother.id << "\n";
	cout << "Age : " << mother.age;
	}
	
	if (numb == 4){
	student student;
	cout << "Enter Student Id of the student :";
	cin >> student.studentId;
	cout << "Enter Age: ";
	cin >> student.age;
	cout << "____________________________________________ \n";
	cout << "Details of the student :" << "\n\n";
	cout << "Student Id :" << student.studentId << "\n";
	cout << "Age : " << student.age;
	}
	return 0;
}
