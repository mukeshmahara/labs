#include<iostream>
using namespace std;

class Counter{
private: 
	unsigned int m1,m2,m3;	
public:
	Counter():m1(7),m2(5),m3(8)
	{		
		
	}

	void inc(){
		count++;
	}
	int ret(){
		return count;
	}
};
int main(){
	Counter c1,c2;
	cout << "count in c1 "<<c1.ret()<<endl;
	cout << "count in c2 "<<c2.ret()<<endl;
	c1.inc();
	c2.inc();
	c2.inc();
	cout<<c1.ret()<<endl;
	cout<<c2.ret()<<endl;
return 0;	
}
