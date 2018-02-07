#inclb  ude<iostream>
using namespace std;
void mark(int m1=30,int m2, int m3=50);
//void mark(int,int);
int main(){
	//mark();
	mark(50);
	mark(60,70);
	mark(75,80,85);
return 0;
}
void mark(int a1,int a2,int a3){
	cout<<"1 	"<< a1+a2+a3<<endl;
}
//void mark(int b1,int b2){
//	cout<<"2"<<b1*b2;
//	}
