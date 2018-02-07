//void.cpp
#include<iostream>
using namespace std;

int main(){
	int intvar=5;
	float floatvar=10.0;
	int* ptr;
	float* flpt;
	void* voipt;
	
	ptr= &intvar;
//ptr= &floatvar;
//	flpt= &intvar;
	flpt= &floatvar;
	voipt= &intvar;
	//cout<<*voipt;
	cout<<*static_cast<int*>(voipt);
	voipt= &floatvar;
}
