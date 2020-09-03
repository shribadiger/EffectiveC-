#include<iostream>
#include<vector>
using namespace std;
using std::vector;

int main() {
	//List Initialization
	vector<string> articles = {"name1", "name2","name3"};

	//Creating the specific number of elements in list
	vector<string> sales_ID(10,"XYZ123");

	std::cout<<"\nList of Articles :";
	for(int i=0;i<articles.size();i++) {
		std::cout<<"\n"<<articles[i];
	}
	std::cout<<"\nList of Numbers:";
	for(int i=0;i<sales_ID.size();i++) {
		std::cout<<"\n"<<sales_ID[i];
	}

	vector<int> list={1,2,3,4,5,6,7,8,9};
	for(auto &i : list) {
		i=i*i;
	}

	std::cout<<"\n Square the values in list:";
	for(auto i :list) {
		std::cout<<"\n "<<i;
	}

	//checking for vector iterator
	auto itr = articles.begin();
	for(auto i : articles) {
		std::cout<<"\n Iterator  :"<<*itr;
		++itr;
	}

	for(auto it = sales_ID.begin(); it != sales_ID.end(); it++) {
		std::cout<<"\n Sales IT: "<<*it;
	}

	//combine dereferencing and member access
	for(auto itr= articles.begin(); itr!=articles.end();itr++) {
		if(!(*itr).empty()) {
			std::cout<<"\n Ariticle Name is not empty";
		}
	}
	return 0;
}
