//ptr.cpp
#include<iostream>
using namespace std;

int main(){
	int var1,var2;	//defines the  variable of type int 
	int *ptr;		//defines ptr as a pointer to type int 
	ptr=&var1;		//assigns the address of variable v to the pointer ptr 
	cout<<ptr;		//confirm the above process
	*ptr=55;		//assign 55 to the ptr 
	var2=*ptr;		//assign the value of ptr to the var2
	cout<<endl<<var2;
}
