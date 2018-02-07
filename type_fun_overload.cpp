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
	//cout<<show;
return 0;
}
void show(char chara){
	cout<<"1	"<<chara;
}
void show(int num){
	cout<<"2	"<<num;
}
void show(double cub){
	cout<<"3	"<<cub;
}
