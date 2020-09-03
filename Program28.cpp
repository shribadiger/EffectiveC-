#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;


template<class C> void print(const string& s, const C& c) {
	cout<<s;
	for(const auto& e: c) {
		cout<<e<<" ";
	}
	cout<<endl;
}

int main() {

	//Number of elements in the vector
	const int elementCount = 9;

	//creating the vector and assign 1 to all elements to vector
	vector<int> v(elementCount,1);

	generate_n(v.begin()+2,
			elementCount+2,
			[=]()mutable throw()->int {
			int n = x+y;
			x=y;
			y=x;
			return n;
			});


