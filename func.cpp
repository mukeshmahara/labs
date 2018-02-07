#include<iostream>
using namespace std;
float sum(double, double);

int main(){
	int a=4.0,b=15.4;
	double c,d;
	c=sum(a,b);
	d=sum(13,14.75);
	cout<<sizeof(c)<<" "<<sum(a,b)<< endl;
	cout<<sizeof(d)<<" "<< d;
	return 0;
	
}
float sum(double a,double b){
	cout<<sizeof(a+b)<<endl;
	return (a+b);
	cout<<"HI";
}
