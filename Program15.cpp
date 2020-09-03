/* overloading and const*/
#include<iostream>
using namespace std;

void isValidCallBack(int& value) {
	std::cout<<"\n Yes. Integer"<<"\n";
}

void isValidCallBack(const int& value) {
	std::cout<<"\nNo. Ref Integer\n";
}
int main() {
 int value = 100;
 const int val = 200;

 int &valRef = value;
 isValidCallBack(value);
 isValidCallBack(const_cast<int>(val));
 isValidCallBack(valRef);

 return 0;
}
