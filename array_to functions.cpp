#include<iostream>
using namespace std;
int maxi(int a[], int length);

 int main(){
 	int leng;
	 int arr[]={4,13,27,40,13};
 	leng=(sizeof(arr)/sizeof(arr[0]));
 	cout<<leng<<endl;
 	int vaa=maxi(arr,leng);
 	cout<< "the maximum value is "<<vaa;
 }
 int maxi(int a[],int length){
 	int i;
 	int maxv=a[0];
 	for (i=0;i<length;i++)
 		if (a[i]>maxv)
 			maxv=a[i];
 	return maxv;
 }
