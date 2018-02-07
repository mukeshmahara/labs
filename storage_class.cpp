#include<iostream>
#include<conio.h>
using namespace std;
void display();
int main(){
	display();
	display();
	display();
	return 0;
}
void display(void){
	static int a=4;
	cout << "\n the number is "<<a;
	a *=5;
}
