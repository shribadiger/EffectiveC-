#include<iostream>
using namespace std;

class Helper {
	private:
		int x, y;
	public:
		Helper(int x, int y) {
			this->x=x;
			this->y=y;
		}

		Helper(int x, int y , char* info) {
			Helper* const helpObj = this;
			helpObj->x=x;
			helpObj->y=y;
			std::cout<<"\n Info: "<<info;
		}

		void printParams() {
			std::cout<<"\n X: "<<x<<" Y :"<<y<<"\n";
		}
};

int main() {
	Helper obj1(2,2);
	obj1.printParams();
	obj1.printParams();
	return 0;
}
