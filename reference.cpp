#include<iostream>
using namespace std;

int main(){
	int num=25;
	int &nu= num;
	cout<<num<<endl;
	cout<<nu<<endl;
	nu++;
	cout<<num<<endl;
	cout<<nu<<endl;
	return 0;
}
