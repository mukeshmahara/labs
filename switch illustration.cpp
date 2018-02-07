#include<iostream>
using namespace std;
int main(){
	float num1,num2;
	char c;
	cout<<"enter the two base numbers"<<endl;
	cin >> num1>>num2;
	l:
	cout <<"enter the character\n + for addition\n - for substraction \n"<<endl;
	cin>>c;
	switch(c){
		case '+':
			cout<<" the sum of two numbers is "<<num1+num2;
			break;
		case '-':
			cout<<" the difference of second number from the first is "<< num1-num2;
			break;
		default :
			cout<<"invalid character selection"<<endl;
			goto l;
			break;
	}
	return 0;
}
