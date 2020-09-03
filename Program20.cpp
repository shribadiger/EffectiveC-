/* checking copy constrcutor */

#include<iostream>
#include<string.h>
using namespace std;

class String {
	private:
		char* m_Buffer;
		unsigned int m_size;
	public:
		String(const char* str) {
			m_size = strlen(str);
			m_Buffer = new char[m_size+1];
			memcpy(m_Buffer,str,m_size+1);
			m_Buffer[m_size]=0;
		}

		//Let add the destructor to delete the allocated memory
		//This leads to double deletion in obj2
		~String() {
			delete[] m_Buffer;
		} 

		//Now, I want to solve the double deletion problem
		// so defining the copy-constructor
		String(const String& other):m_size(other.m_size) {
			std::cout<<"\n Copy Constructor get called\n";
			m_Buffer = new char[m_size+1];
			memcpy(m_Buffer, other.m_Buffer, m_size+1);
		}

		char* GetBuffer() const {
			return m_Buffer;
		}

		char& operator [] (const unsigned int index) {
			return m_Buffer[index];
		}

                friend std::ostream& operator <<(std::ostream& ost, const String& strRef);
};

std::ostream& operator <<(std::ostream& ost, const String& strRef) {
	//ost<<strRef.GetBuffer();
	ost<<strRef.m_Buffer; // this If i don't want to use the GetBuffer() function, we make this as overloading function then use it 
	return ost;
}

int main() {
	String obj("Shrikant");
	std::cout<<obj<<std::endl;

	//let copy the object to another object
	String obj2 = obj;
	std::cout<<obj2<<std::endl;

	obj2[3]='R';

	std::cout<<obj<<std::endl;
	std::cout<<obj2<<std::endl;
	return 0;
}
