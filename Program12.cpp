#include<iostream>
using namespace std;

int main() {
	unsigned char bits = 'A';
	std::cout<<"\n Bits : "<<bits<<"\n";
	bits=bits>>8;
	std::cout<<"\n Bits : "<<bits<<"\n";
	return 0;
}
