/*  initializer list for input params */
#include<iostream>
#include<string>
using namespace std;

int PrintParam(std::initializer_list<string> params) {
	for(auto i:params) {
		cout<<"\t"<<i;
	}
	cout<<"\n";
	return 0;
}
int main() {
	string str1="shrikant";
	string str2="shruti";
	string str3="Gauthami";
	PrintParam({str1,str2,str3});
	PrintParam({str1,str2,str3,"noName"});

	std::initializer_list<string> listOfNames = {"abc","def","ghi","jkl","mno" "pqr","stu","vwx"};
	PrintParam(listOfNames);
	return 0;
}
