/* study of shared pointer*/

#include<iostream>
#include<memory>
#include<string>
using namespace std;


class Base {
	private:
		string m_Name;
		int m_age;
	public:
		Base():m_Name(""),m_age(0) {
			cout<<"\n Base constructor\n";
		}

		~Base() {
			cout<<"\n[Info]: Base Destructor\n";
		}

		//Getter functions
		string getName() {
			return m_Name;
		}

		int getAge() {
			return m_age;
		}

		//setter functions
		void setName(const std::string& iName) {
			m_Name = iName;
		}

		void setAge(const int& iAge) {
			m_age = iAge;
		}

};

int main() {
	//creating the Base Object
	Base* obj1 = new Base();
	obj1->setName("Shruti");
	obj1->setAge(28);

	std::cout<<"\n Name: "<<obj1->getName() << " " <<" Age: "<<obj1->getAge()<<endl;
        // After completion obj1 not deleted, so no destructor get called
	//
	// Now I am going to use the shared pointer  and It will call the destructor
	shared_ptr<Base> sharedObj1 = make_shared<Base>();
        Base *ptr = sharedObj1.get() ;

	delete ptr;
	std::cout<<"\n Use count of shared pointer: "<<sharedObj1.use_count()<<endl;



	return 0;
}
