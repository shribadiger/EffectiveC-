#include<iostream>
#include<assert.h>
using namespace std;
int main(){
	string str ="shrikant";
	assert(str.size() > 0);
		std::cout<<__FILE__<<" matching in assert"<<"\n";
		std::cout<<"\n LINE: "<<__LINE__;
		std::cout<<"\n TIME: "<<__TIME__;
		std::cout<<"\n DATE: "<<__DATE__;
	

	return 0;
}
