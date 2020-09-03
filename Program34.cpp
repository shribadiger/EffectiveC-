/* Pointer Like class implementation*/
#include<iostream>
#include<string>
#include<memory>

using namespace std;

class HasPointer {
	public:
		HasPointer(const std::string &refStr = std::string()):
			strPointer(new std::string(refStr)),value(0),refCounter(new std::size_t(1)) {
				std::cout<<"\n HasPointer Constructor\n";
			}

		//Copy-Constructor 
		HasPointer(const HasPointer& refObject):
			strPointer(refObject.strPointer),value(refObject.value),refCounter(refObject.refCounter) {
				++*refCounter;
				std::cout<<"\n HasPointer Copy Constructor\n";
			}
		HasPointer& operator = (const HasPointer& refObject) {
			//Increment the RHS Object counter, becuase it assigned to new Object
			++*refObject.refCounter;
			if(--*refCounter == 0){ //decrement the LHS object counter
				delete strPointer;
				delete refCounter;
			}
			strPointer = refObject.strPointer;
			value = refObject.value;
			refCounter = refObject.refCounter;
			
			return *this;
		}

		//Destructor should handle properly
		~HasPointer() {
			if(--*refCounter == 0) {
				delete strPointer;
				delete refCounter;
			}
		}

		std::size_t getReferenceCount() {
			return *refCounter;
		}

	private:
		std::string *strPointer;
		int value;
		std::size_t *refCounter;
};

int main() {
	HasPointer obj1;
	HasPointer obj2(obj1);
	HasPointer obj3 = obj1; // this will again call copy constructor
	obj3=obj2;
	std::cout<<"\n Reference Count of OBJ1 : "<<obj1.getReferenceCount();
	std::cout<<"\n Reference Count of OBJ2 : "<<obj2.getReferenceCount();
	std::cout<<"\n Reference Count of OBJ3 : "<<obj3.getReferenceCount();
	return 0;
}
