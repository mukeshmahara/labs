#include<iostream>
using namespace std;

class student{
	private:
		char name[25];
		int mark[3];
	public:
		void datain();
		void dataout();
};
void student::datain(){
	cout<<"enter name"<<endl;
	cin>>name;
	for(int i=0;i<3;i++){
		cout<<"enter mark in sub"<<i+1<<endl;
		cin>>mark[i];
	}
}
void student::dataout(){
	cout << "the information is "<<endl;
	cout <<"name is "<<name <<endl;
	for(int i=0;i<3;i++){
		cout<<"mark in sub"<<i+1<<endl;
		cout<<mark[i]<<endl;
	}
}
int main(){
	student s;
	s.datain();s.dataout();
return 0;	
}
