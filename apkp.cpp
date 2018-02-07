#include <iostream>
#include <conio.h>
using namespace std;
class Student_info
{
   private:
    int student_id;
    string name;
    string address;
    int marks_NM, marks_OOP, marks_OS;
    float average;
   public:
    void getmark(){
    cout<< "Enter the student id";
    cin>>student_id;
    cout<<"Enter the name :	"<<endl;
    cin>>name;
    cout<<"Enter the address:	"<<endl;
    cin>>address;
    cout<<"enter the marks in OOP,OS and NM:	"<<endl;
    cin>>marks_OOP>>marks_OS>>marks_NM;
    }
    void calculate_average()
    {
        average=(marks_NM+marks_OOP+marks_OS)/3;
    }
    void display_info()
    {
        cout <<"\nstudent id: "<<student_id<<endl;
        cout <<"name: "<<name<<endl;
        cout <<" marks in OOP,OS,NM: "<<marks_OOP<<" "<<marks_OS<<" "<<marks_NM<<endl;
        cout <<"Average: "<<average<<endl;
    }
};

int main()
{
    Student_info Student_1,Student_2,Student_3;
   	Student_1.getmark();
	Student_2.getmark();
	Student_3.getmark();
	Student_1.calculate_average();
	Student_2.calculate_average();
	Student_3.calculate_average();
	Student_1.display_info();
	Student_2.display_info();
	Student_3.display_info();
    getch();
	return 0;
}

