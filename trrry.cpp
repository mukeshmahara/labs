#include<iostream>
using namespace std;
void show(char);
void show(int);
void show(double);
int main(){
	char ch='$';
	int number = 1144;
	double dob=11425.698982;
	cout<<"character function is envoked"<<endl;show(ch);
	cout<<endl<<"integer function is envoked"<<endl;show(number);
	cout<<endl<<"double function is envoked"<<endl;show(dob);
	//cout<<"character function is envoked"<<endl<<show;
return 0;
}
void show(char chara){
	cout<<chara;
}
void show(int num){
	cout<<num;
}
void show(double cub){
	cout<<cub;
}
