#include<iostream>
using namespace std;

class racer{
	private:
		static int count; 	//declaration
	public:
	racer(){
			count++;
		}
		int get_count(){
			return count++;
		}
};
int racer::count =0;
int main(){
	racer r1;
	
	racer r2;
	
	
	racer r3;
	cout<<"count is "<<r1.get_count()<<endl;
	cout<<"count is "<<r2.get_count()<<endl;
	cout<<"count is "<<r3.get_count()<<endl;
}
