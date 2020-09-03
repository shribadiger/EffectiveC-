#include<iostream>
using namespace std;

int main() {
	const int value = 100;
	int c_value = value; // top-level const is ignored
	int *const ptr = &c_value; 
	std::cout<<"\n Before value: "<<*ptr<<" : "<<c_value<< " : " <<value<<"\n";
        *ptr = 0;
	std::cout<<"\n After value: "<<*ptr<<" : "<<c_value<< " : " <<value<<"\n";
       	

	return 0;
}

