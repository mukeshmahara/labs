#include<iostream> 
using namespace std;
int a=8,b=2,c=3;
int add(void);
int main(){
	cout<<add()<<endl ;
	cout<<"a="<<a<<"\t b="<<b<<"\t c="<<c;
	return 0;
}
int add(){
	extern int a;
	
	a=b=c=10;
	return(a+b+c);
}
