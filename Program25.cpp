/*
 * complete and incomplete type checking
 */

#include<iostream>
using namespace std;

class Base {
	private:
		int m_x, m_y;
	public:
		static Base obj1; //Static will allow the incomplete type
		Base* basePtr; //Point also allow incomplete type
		Base obj3; //Error: Oridary members should have the complete type
		// this will not compile
};

int main() {
	Base obj1;
	return 0;
}
