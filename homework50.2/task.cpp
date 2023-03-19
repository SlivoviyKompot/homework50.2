#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
	string name;
	string gender;
	int id;
	int age;
	double wage;

	void print() {
		cout << "Name: " << name <<
			"\nGender: " << gender <<
			"\nID: " << id <<
			"\nAge: " << age <<
			"\nWage: $" << wage << '\n';
	}
};

int main() {
	Employee Ann{ "Ann", "Female", 18, 4, 25.50 };
	Employee John{ "John", "Male", 21, 5, 30.00 };
	Employee Max{ "Max", "Male", 30, 6, 32.75 };
	Employee Jack{ "Jack", "Male", 26, 7, 35.00 };

	Ann.print();
	cout << endl;
	John.print();
	cout << endl;
	Max.print();
	cout << endl;
	Jack.print();

	return 0;
}