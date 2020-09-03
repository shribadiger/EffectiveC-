/* Delegration of the constructor*/
#include<iostream>
#include<string>
using namespace std;

class Employee {
	private:
		std::string name;
		int age;
		int salary;
	public:
		Employee():name("Unknown"),age(0),salary(0) {
			std::cout<<"\n Defualt constructor\n";
		}

		Employee(const std::string& strName, int iage, int isalary):name(strName),age(iage),salary(isalary) {
			std::cout<<"\n Parameterized construtor 1";
		}

		Employee(const std::string& strName):Employee(strName,0,0) {
			std::cout<<"---> Delegate Constructor 1\n";
		}

		Employee(int iage) : Employee("Unknown",iage,0) {
			std::cout<<"---> Delegate Constructor 2\n";
		}
};

int main() {
	Employee obj1;
	Employee obj2("Shrikant");
	Employee obj3(25);

	return 0;
}

