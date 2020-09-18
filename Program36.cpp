/*
 * checking the std::vector functions
 */
#include<iostream>
#include<vector>

using namespace std;

class Base {
	public:
		Base() {
			cout<<"\n Base constructor";
		}

		~Base() {
			cout<<"\n Base Destructor";
		}
};

int main() {
	std::vector<Base*> listOfBaseObjects;
	for(int i=0; i<8; i++) {
		Base* obj = new Base();
		listOfBaseObjects.push_back(obj);
	}

	std::cout<<"\n Now, clear the vector\n";
	listOfBaseObjects.clear();

	return 0;
}

