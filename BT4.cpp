#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

//C6_4

class Employee
{
	private:
		int employee_number;
		int employee_compensation;
	public:
		void Nhap(){
			cout<<"Input employee number: ";
			cin>>employee_number;
			cout<<"Input employee compensation: ";
			cin>>employee_compensation;
		}
		void Display(){
			cout<<"Employee Number: "<<employee_number<<endl;
			cout<<"Employee Compensation: "<<employee_compensation<<endl;
		}
};
int main()
{
	Employee Member;
	Member.Nhap();
  system("cls");
	Member.Display();
	system("pause");
	return 0;
}
