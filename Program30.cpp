#include<iostream>
#include<string>
#include<memory>
#include<chrono>
#include<mutex>
#include<thread>

using namespace std;

class Base {
	public:
		Base() {
			cout<<"\n Base Constructor\n";
		}
		~Base() {
			cout<<"\n Base Destructor\n";
		}
};

class Derived: public Base { 
	public:
		Derived() {
			cout<<"\n Derived Constructor\n";
		}

		~Derived() {
			cout<<"\n Derived Destructor\n";
		}
};

int threadFunction(std::shared_ptr<Base> ptr) {
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::shared_ptr<Base> lp = ptr;
	{
		//std::mutex io_mutex;
		//std::lock_guard<std::mutex> lk(io_mutex);
		std::cout<<"\n Local Pointer inforamtion \n"
			  <<" lp.get() : "<<lp.get()<<"\n"
			  <<" lp.use_count():"<<lp.use_count();
	}
}

int main() {
	std::shared_ptr<Base> p =std::make_shared<Derived>();
	std::cout<<"\n Derived Pointer inforamtion \n"
		  <<" p.get() : "<<p.get()<<"\n"
		  <<" p.use_count():"<<p.use_count();

	std::thread t1(threadFunction,p);
	std::thread t2(threadFunction,p);
	std::thread t3(threadFunction,p);
	p.reset();
	std::cout<<"\nShared Pointer inforamtion \n"
		  <<" p.get() : "<<p.get()<<"\n"
		  <<" p.use_count():"<<p.use_count();

	t1.join();
	t2.join();
	t3.join();
	std::cout<<"\n All Threads are completed\n";

	return 0;
}


