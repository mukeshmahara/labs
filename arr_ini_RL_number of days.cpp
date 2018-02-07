 #include<iostream>
 using namespace std;
 
 int main(){
 	int month,day, total;
 	int dpm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 	cout<<endl<<"enter the number of month(1-12) :";
 	cin>> month;
 	cout<<endl<<"enter day (1-31) :";
 	cin>>day;
 	total=day;
 	for (int j=0;j<month-1;j++){
 		total += dpm[j];
	 }
	 cout <<endl<<" total days from the start of the year is "<<total;
	return 0;
 }
