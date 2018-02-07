#include<iostream>
using namespace std;
 double a,b;
double add(double,double);
 int main(){
 	double c;
 	int x=4,y=5.15;
 	double d;
 	d=add(x,y);
 	c=add(13.0,14.45);
 	cout<<sizeof(c)<<c;
 	cout<<sizeof(d)<<d;
 	return 0;
 }
double add(a,b){
 	return(a+b);
 }
 
