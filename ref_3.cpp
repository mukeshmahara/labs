 //assigning to the fun ction call
#include<iostream>
using namespace std;
int& set_val(int &x,int &y){
	if (x>y)
		return x;
	else 
	return y;
}

int main(){
	int a=5,b=14;
	cout<<"a="<<a<<"	b="<<b<<endl;
	set_val(a,b)=-9;
	cout<<"a="<<a<<"	b="<<b<<endl;
	return 0;
}

