#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int i=1;
	do{
		int j=1;
		do{
			cout<<i;
			j++	
		}while(j<=i);
		cout<<endl;
		i++;
	}while (i<=5);
	return 0;
}
