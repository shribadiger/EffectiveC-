/* checking the const pointer functionality */
#include<iostream>
int main() {
	const int value = 100;
	const int *normalPointer = &value;
	std::cout<<"\n Value at Pointer : "<<*normalPointer;
	return 0;
}
