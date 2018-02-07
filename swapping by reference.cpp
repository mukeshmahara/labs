#include<iostream>
using namespace std;
void swap(int&, int&);
int main(){
	int a,b;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	cout << "before swapping the value is "<< a <<"\t"<<b<<endl;
	swap(a,b);//calling by reference
	cout<<"after swapping the value is "<<a<<"\t"<<b;
	return 0;
}
void swap(int &x,int &y){//x and y are the aliases
	int temp;
	temp=x;x=y;y=temp;
	} 
