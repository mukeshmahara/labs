#include<iostream>
#include<string.h>

using namespace std;

class studentinfo{

        private:
                int stdid;
                char fname[15], lname[15];
                char fullname[30];
                float os,oop,nm,ave;

        public:

                void setdata(){
                        cout<<"\nStudent id: ";
                        cin >> stdid;
                        cout<<"First Name: ";
                        cin >> fname;
                        cout<<"last Name: ";
                        cin >> lname;

                        cout<<"Enter Marks Obtained:\n";

                        cout<<"Operating System: ";
                        cin >> os;
                        cout<<"Object Oriented Programming: ";
                        cin >> oop;
                        cout<<"Numerical Method: ";
                        cin >> nm;

                        strcpy(fullname,strcat(strcat(fname," "),lname));
                }

                void showdata(){
                        cout<<"\n***************************************\n";
                        cout<<"\nStudent Id: "<<stdid<<endl;
                        cout<<"Full Name: "<<fullname<<endl;
                        cout<<"--------Marks Obtained--------\n"<<endl;
                        cout<<"Operating System:"<<os<<endl;
                        cout<<"Object Oriented Programming:"<<oop<<endl;
                        cout<<"Numerical Method: "<<nm<<endl;
                }

                void average(){
                        ave = (os + nm + oop)/3;
                        cout<<"The average marks of "<< fullname << " is : "<< ave <<endl;
                        cout<<"\n***************************************"<<endl<<endl;
                }
};

int main(){
        cout<<"BY: Padam Raj Rijal.\n";
        studentinfo std1,std2,std3;

        std1.setdata();
        std2.setdata();
        std3.setdata();

        cout<<"\nDisplaying Student Info:\n";
        std1.showdata();
        std1.average();
        std2.showdata();
        std2.average();
        std3.showdata();
        std3.average();
}
