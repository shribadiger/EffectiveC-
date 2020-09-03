#include<iostream>
#include<string>
using namespace std;

typedef string::size_type sz;

string screen(sz ht=20, sz wd=20, char bg= ' ') {
	std::cout<<"\n SCREEN : "<<ht<<":"<<wd<<":"<<bg<<"\n";
	return "success";
}

int main() {
	string window;
	window = screen();
	window = screen(66);
	window = screen(66,77);
	window = screen(88,99,'*');
	window = screen('?');

	//Error case only trailing argument support
	//window = screen(,,'?');
	//
	return 0;
}
