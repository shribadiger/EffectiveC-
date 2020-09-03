#include<iostream>
using namespace std;

class Helper {
	private:
		int m_x, m_y;
	public:
		Helper(int x, int y) {
			m_x=x;
			m_y=y;
		}
		//This below function works fine
		int getX() const {
			std::cout<<"\n Returning the X value:"<<m_x;
			return m_x;
		}
		//let make the class as const class
		int getXX() const {
			//m_x=100; //Error: read-only object can not be changes in the const function
			std::cout<<"\n Returning the X value:"<<m_x;
			return m_x;
		}
};
/*
//Error: const CV_QUALIFIER error not able to declare the cosnt in outside class.
int additionOfTwo(int x,int y) const {
	return x+y;
} 
*/

int main() {
    const int MAX_AGE=90;
    int *ptr = new int; //creating the pointer in heap
    *ptr = 100; //change the value of the pointer
    std::cout<<"\n Pointer Content:"<<*ptr;
    ptr =const_cast<int*>(&MAX_AGE);
    *ptr = 80;
    std::cout<<"\n After change the value:"<<*ptr;
    std::cout<<"\n Const value :"<<MAX_AGE;

    //now verify the const pointer in c++
    int const* ptr2 = new int;
    //*ptr2=100; //Error: Assignment of read-only location *ptr2. 
    /*
     * above statement makes the pointer content as constant, you can not change the value.
     */
     //To make the pointer as const then as below

     int* const ptr3 = new int;
     *ptr3 = 400;   
     std::cout<<"\n Trying to access the pointer:"<<*ptr3;
     //in case if i want to change the value in the pointer location
     //ptr3 = (int*)&MAX_AGE; //Error: assignment of read-only variable ptr3


     Helper obj1(90,90);
     std::cout<<"\n Main X:"<<obj1.getX();

     std::cout<<"ADD : "<<additionOfTwo(10,20);
    return 0;
}
