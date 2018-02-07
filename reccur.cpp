//recursion.cpp
#include<iostream>
using namespace std;
long int fac(long int);
int main(){
	long int num;
	cout<< "enter a number"<<endl;
	cin>>num;
	cout << "the factorial is"<<endl<<fac(num);
	return 0;  
}
long int fac(long int num){
	if (num<=1)
		return (1);
	else 
		return (num*fac(num-1));
	}
