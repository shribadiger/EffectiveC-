#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

void print(int val) {
	std::cout<<"\nValue : "<<val;
}

void ForEach(const std::vector<int> myVector, std::function<void(int)>& func) {
	for(auto i: myVector)
		func(i);
}

int main() {
	std::vector<int> myVector= {1,2,3,4,5};
	auto lamda = [](int value) mutable { std::cout<<"Value: "<<value<<std::endl; };


	//calling the function with lamda expression
	ForEach(myVector,lamda);

	//[=] --> indicate the passing the params(value) as value based pass
	auto lamda1 = [&](int value){ std::cout<<"Value: "<<value<<std::endl;};
	ForEach(myVector,lamda1);

	//[&] --> indicate the pass by reference
	auto lamda2 = [&](int value){ std::cout<<"Value: "<<value<<std::endl;};
	ForEach(myVector,lamda2);

	return 0;
}
