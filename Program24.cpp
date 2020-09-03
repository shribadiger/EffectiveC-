/*
 * calling the constructor inside the constructor
 */
#include<iostream>
using namespace std;

class Base {
	private:
		int x,y;
		Base(int x, int y) {
			std::cout<<"\n Multi Param";
			this->x = x;
			this->y = y;
		
		}
	public:
		Base(int x) {
			std::cout<<"\n Single Param";
			*this = Base(x,890);
			delete this;
		}
		void printInfo() {
			std::cout<<"\nX:"<<x<<"\nY:"<<y;
		}

};

int main() {
	Base obj1(200);
	obj1.printInfo();

	return 0;
}


