/* implicit and explicit constructor*/
#include<iostream>
using namespace std;

class Base {
	public:
		int value;
		char* name;

		Base():name("Unknown"),value(0) {
			std::cout<<"\n Name: "<<name<<"\n Value: "<<value<<"\n";
		}
		Base(char* iname, int v=0):name(iname),value(v) {
			std::cout<<"\n Name: "<<name<<"\n Value: "<<value<<"\n";
		}
		Base(int v):name("Unknown"),value(v) {
			std::cout<<"\n Name: "<<name<<"\n Value: "<<value<<"\n";
		}
};
class AnotherBase{
	public:
		int value;
		char* name;

		/*AnotherBase():name("Unknown"),value(0) {
			std::cout<<"\n Name: "<<name<<"\n Value: "<<value<<"\n";
		}*/
		explicit AnotherBase(char* iname, int v=0):name(iname),value(v) {
			std::cout<<"\n Name: "<<name<<"\n Value: "<<value<<"\n";
		}
		explicit AnotherBase(int v):name("Unknown"),value(v) {
			std::cout<<"\n Name: "<<name<<"\n Value: "<<value<<"\n";
		}
};
int main() {
	Base obj1;
	Base obj2 = 1;
	Base obj3 = "Shruti";

	//AnotherBase obj4; /* Error: Explicit Qualifier end of input*/
	AnotherBase obj4; 
	AnotherBase obj5 = AnotherBase("Shrikant");

	return 0;
}
