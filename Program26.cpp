/*
 * Vector Implementation in c++
 */
#include<iostream>
using namespace std;

const int _DEFAULT_VECTOR_SIZE_ = 4;

template<class T>
class Vector {
	private:
		T* m_Array;
		int m_Size;
		int m_reservedSize;
	public:
		Vector():m_Array(new T[_DEFAULT_VECTOR_SIZE_]),m_Size(0),m_reservedSize(_DEFAULT_VECTOR_SIZE_) {
			cout<<"\n[Info]: Vector default constructor";
		}

		//Create Vector with n elements
		Vector(int n):m_Array(new T[n]),m_Size(0),m_reservedSize(n) {
			cout<<"\n[Info]: Vector constructor of size : "<<n;
		}

		~Vector() {
			cout<<"\n[Info]: Deletion of Vector";
			delete [] m_Array;
		}
};

//Adding element to vector
template<class T>
void Vector::push_back(const T& value) {
	if(m_size == m_reservedSize) 
		m_reservedSize+=_DEFAULT_VECTOR_SIZE_;
	m_Array[size]=value;
	m_Size++;
}




