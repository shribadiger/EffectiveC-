#include<iostream>
#include<string>
#include<memory>
using namespace std;

class Base {
	public:
		int x;
		int y;
		Base():x(0),y(0) {
			std::cout<<"\n Base constructor\n";
		}

		~Base() {
			cout<<"\n Base Destructor\n";
		}

		void print() {
			std::cout<<"\n No data to print\n";
		}
};

int main() {
	Base* obj = new Base();
	std::shared_ptr<Base> ptr(obj);
	std::shared_ptr<Base> ptr2=ptr;
	std::cout<<"\n Before Use Count : "<<ptr.use_count();
	ptr.reset();
	std::cout<<"\n After Use Count : "<<ptr.use_count();
	std::shared_ptr<Base> ptr3=ptr;
	std::cout<<"\n After Use Count : "<<ptr.use_count();
	ptr2->print();
	ptr3->print();
	return 0;
}
