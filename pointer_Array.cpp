//pointer_array.cpp
#include<iostream>
using namespace std;

int main(){
	int arr[5]={39,55,15,74,60};
	for (int j=4;j>=0;j--){
		cout<<arr[j]<<endl;
		cout<< *(arr+j)<<endl; // for j=3; the compiler computes the first element first
								//and moves three elements further not the three bytes 
	}
return 0;
}
