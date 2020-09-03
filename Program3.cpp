/* checking the reference and pointer and reference to pointer*/
#include<iostream>
using namespace std;

int main() {
	int val=100;
	int *ptrInt;
	int *&RefInt = ptrInt;
	RefInt = &val;
	std::cout<<"\n Normal Value : "<<val;
	std::cout<<"\n Reference Value : "<<RefInt;
	std::cout<<"\n Pointer Address : "<<ptrInt;
	std::cout<<"\n Pointer Value : "<<*ptrInt;

	cout<<"\n Dereferencing the pointer\n";
	*ptrInt = 0;
	std::cout<<"\n Normal Value : "<<val;
	return 0;
}
