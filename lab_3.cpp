#include<iostream>
using namespace std;
const int rate= 60;
class app{
	private:
		int ident, weight;
		int cost;
		float net;
	public:
		void set(int id, int weig=1);
		
		void calc(){
			cost= weight* rate;
		net_cost();
		}
		void net_cost(){
			if (weight>=2)
				net = 0.95*cost;
			else
				net = cost;
			
		}
		inline void disp(){
			cout<< "for this batch number"<<ident<<" the cost is "<<net<<endl;
		}
		};
void app::set(int id, int weig){
	ident=id; weight=weig;
	calc();
}
int main(){
	app a1,a2,a3,a4;
	a1.set(1,2);a2.set(2);a3.set(3);a4.set(4,5);
	//a1.calc();a2.calc();a3.calc();a4.calc();	
	//a1.net_cost();a2.net_cost();a3.net_cost();a4.net_cost();
	
	a1.disp();a2.disp();a3.disp();a4.disp();
}
