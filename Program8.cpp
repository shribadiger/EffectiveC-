#include<iostream>
using namespace std;
int main() {
	std::string str = "abcdefghijklmopqrstuvwxyz";
	for(auto i : str) {
		std::cout<<"|"<<i<<"|\t";
	}

	return 0;
}
