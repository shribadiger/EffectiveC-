/* constexpr validation*/
#include<iostream>
using namespace std;
const int size() {
	const int SIZE = sizeof(int);
	return SIZE;
}
int main() {
	const int value=100;
	constexpr int rumTimeValue = value + 100;
	std::cout<<"\n RunTime value : "<<rumTimeValue;
	constexpr int size_run = const_cast<int>(size());
	std::cout<<"\n Size: "<<size_run;
	return 0;
}

