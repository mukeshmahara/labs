//pass_by_ref_and_pointer
#include<iostream>
using namespace std;

int main(){
	void centi(double*);
	double var=15.0;
	cout<<"var= "<<var<<endl;
	centi(&var);
	cout<<"var= "<<var<<endl;
return 0;	
}
void centi(double* ptr){
	*ptr *=2.54;
}
