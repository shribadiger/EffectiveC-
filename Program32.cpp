#include<iostream>
#include<memory>

using namespace std;

class Base {
	public:
		Base() {
			cout<<"\n BASE CONTRUCTOR \n";
		}

		~Base() {
			cout<<"\n BASE DESTRUCTOR\n";
		}
};

//Deletor as function object
class Deletor {
	public:
		void operator()(Base* ptr) {
			std::cout<<"\n Functional Deletor Operation\n";
			delete [] ptr;
		}
};

//Deletor function
void deletor(Base* ptr) {
	cout<<"\n BASE DELETOR FUNCTION INVOKE\n";
//	delete [] ptr;
}

int main() {

	//Passing the deletor function
	std::shared_ptr<Base> ptr(new Base[12], deletor);

	//try with functional opeations
	std::shared_ptr<Base> ptr2(new Base[6], Deletor());

	//try with lambda function
	std::shared_ptr<Base> ptr3(new Base[6], [](Base* ptr) {
			std::cout<<"\n Lambda function for deletor";
			delete [] ptr;
			});
	return 0;
}
