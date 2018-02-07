//assigning to the function call
#include<iostream>
using namespace std;
//int num;

int& set_val();

int main(){
	
	
	cout<<"num="<<num<<endl;
	return 0;
}
int& set_val(){
			return num;
}
