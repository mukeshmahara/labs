#include<iostream>
using namespace std;
int main(){
	int size,i;
	cin>>size;
	int arr[size];
	//int arra[][6][4]={0};
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	//cout<<arr[4];
	//cout<<"the location is"<<&i<<endl;
	cout<<"the location is"<<&arr[0]<<endl; 
	cout<<"the size of array is "<<sizeof(arr)<<endl;
for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
return 0;
}
