#include <iostream>

using namespace std;

class Person{
    private:
        int grade;
    public:
	friend void print(Person person);
        void setGrade(int a);
};

void Person::setGrade(int a){
    grade = a;
}

class Student: public Person{
	void print(Person person);
};

void print(Person person){
    cout << "Enter student grade:" << endl;
    cin >> person.grade;
	if (person.grade >= 50){
		cout << "The student has PASSED";
	}
	else{
		cout << "The student has FAILED";
	}
}

int main()
{
    Person person;
    Student student;
    print(person);
    return 0;
}
