#include<iostream>
using namespace std;
int main(){
	int i;
	cout<<"enter a number "<<endl;
	cin>>i;
	if (i % 2 == 0){
		cout<<i<<" is even";
	}
	else{
		cout<<"the number "<<i <<" is odd";
	}
	return 0;
}
