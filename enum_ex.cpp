#include<iostream>
#include<cmath>
using namespace std;
enum days{Sun,Mon,Tue,Wed,Thu,Fri,Sat};
int main(){
	days d1,d2;
	d1= Fri;
	d2= Mon;
	if (d1<d2)
		cout<< (d1) <<"comes before"<< (d2)<<endl;
	else 
		cout<< (d2) <<"comes before "<< (d1)<< endl ;
	cout<<" the number of working days is "<<abs((d2-d1)/3);
return 0;
}
