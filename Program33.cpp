#include<iostream>
#include<string>
using namespace std;

class HasPointer {
	public:
		HasPointer(const std::string &s = std::string()):strPtr(new std::string(s)),value(0){
			cout<<"\nValue Like Constructor\n";
		}

		HasPointer(const HasPointer& obj):strPtr(new std::string(*obj.strPtr)),value(0) {
			cout<<"\nValue Like Copy Constructor\n";
		}

		HasPointer& operator = (HasPointer& ref) {
			this->strPtr = new std::string(*ref.strPtr);
			this->value = ref.value;
			cout<<"\n Copy Assignment Constructor\n";
		}

		~HasPointer() {
			cout<<"\n Destructor\n";
			delete strPtr;
		}
	private:
		std::string *strPtr;
		int value;
};

int main() {
	HasPointer obj("Shrikant");
	HasPointer *obj2 = new HasPointer("Shrikant");

	delete obj2;

	return 0;
}
