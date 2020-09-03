#include<iostream>
using namespace std;

class Base {
	private:
		int m_x;
		int m_y;
	public:
		/*
		 * This will createt the ambiguous constructor error
		 
		//Base()=default; 
		*/
		Base(int x=0,int y=0) {
			std::cout<<"\n Parameterized constructor\n";
		}
		/*
		 * Below constructor create abmbigous with all other constructors
		Base(int x=0) {
			std::cout<<"\n Another constructor\n";
		}
                */
};

int main() {
	Base obj1;
	Base obj2(2,3);
	Base obj3(2);
	return 0;
}
