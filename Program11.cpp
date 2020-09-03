#include<iostream>
#include<vector>
using namespace std;
 
int main() {
	vector<int> vList = {1,2,3,4,5,6,7,8,9};
	
	vector<int>::const_iterator itr = vList.begin();

	for(;itr != vList.end();itr++) {
		std::cout<<"\n Only Read: "<<*itr;
		*itr=100;
	}
	return 0;
}
