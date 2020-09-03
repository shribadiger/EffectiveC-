#include<iostream>
#include<string>
using namespace std;
int main() {
	string s1;
	string s2=s1;
	string s3 = "shrikant";
	string s4(10,'A');

	cout<<"\n S1: "<<s1;
	cout<<"\n S2: "<<s2;
	cout<<"\n S3: "<<s3;
	cout<<"\n S4: "<<s4;


	// Operations on String 
	if(s1.empty()){
		std::cout<<"\n S1 string is empty"<<"\n";
	}

	std::cout<<"\n Size of String S4: "<<s4.size()<<"\n";

	std::cout<<"\n S3 + s4 : "<<s3+s4;

	return 0;
}
