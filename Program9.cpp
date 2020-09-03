#include<iostream>
#include<string>
using namespace std;

int main() {
	std::string str ="Hello Siemens @ 2020 not able to get # in !!!! over run !@#$%()";
        decltype(str.size()) punct_cnt = 0;

	for(auto i :str) {
		if(ispunct(i))
			++punct_cnt;
	}
	std::cout<<"\n"<<punct_cnt<<" punctuation charectors in "<<str<<"\n";
	return 0;
}
