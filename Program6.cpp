#include<iostream>
using namespace std;
int main() {
	const int val = 100, &ref = val;
	auto b = val;
	std::cout<<"\n auto b  : "<<b; // it remove the const ness
	b = 109;
	std::cout<<"\n auto b  : "<<b;
        auto d = &val; //Pointer to val
	std::cout<<"\n Pointer Value : "<<*d;
	*d=1001;

	std::cout<<"\n Pointer Value : "<<*d; //Error: Assignment to Read Only value
	return 0;
}
