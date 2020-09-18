/* 
 * Object and class properties 
 */
#include<iostream>
using namespace std;

class Base {
	public:
		Base() {
			cout<<"\n Base Constructor\n";
		}

		~Base() {
			cout<<"\n Base Destructor\n";
		}

		void printMe() {
			std::cout<<"\n Base printMe invoked";
		}
};

class Derived: public Base {
	public:
		Derived() {
			cout<<"\n Derived Constructor\n";
		}

		~Derived() {
			cout<<"\n Derived Destructor\n";
		}

		void printMe() {
			std::cout<<"\n Derived printMe invoked";
		}
};

int main() {
	Base obj1;
	Derived obj2;

	obj1.printMe();
	obj2.printMe();

	obj1=obj2;
	cout<<"\n-------------\n";
	obj1.printMe();
	obj2.printMe();

	return 0;
}
