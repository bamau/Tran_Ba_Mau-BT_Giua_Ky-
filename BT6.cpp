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
//C6_5
class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		void getdate()
		{
			do
			{	
				system("cls");
				cout<<"nhap vao ngay: ";
				cin>>day;
			}while(day>31);
			if(day<=28)
			{
				do
				{
				system("cls");
				cout<<"nhap vao thang: ";
				cin>>month;	
				}while(month>12);
			}
			if(day==29||day==30)
			{	
				do
				{
					system("cls");
					cout<<"nhap vao thang: ";
					cin>>month;
				}while(month==2);
			}
			if(day==31)
			{
				do{
					system("cls");
					cout<<"nhap vao thang: ";
					cin>>month;
				}while(month==2||month==4||month==6||month==9||month==11);
			}
			system("cls");
			cout<<"nhap vao nam: ";
			cin>>year;
		}
		void showdate()
		{
			char key='/';
			cout<<"Date is: "<<day<<key<<month<<key<<year<<endl;
		}
};
//C6_6
enum etype
{
	laborer,
	secretary,
	manager
};
class Extend_employee
{
	private:
		etype type;
		Date first_date;
	public:
		void getemploy(char &input, etype &type)
		{
			switch(input)
			{
				case 'l':
					{
						
						type=laborer;
						break;
					}
				case 's':
					{
						
						type=secretary;
						break;
					}
				case 'm':
					{
				
						type=manager;
						break;
					}
			}
		}
		void putemploy(etype &type)
		{
			char type_employee[5][10]={"laborer", "secretary", "manager"};
			switch(type)
			{
				case laborer:
					{
						Employee laborer;
						laborer.Nhap();
						first_date.getdate();
						system("cls");
						cout<<"employee is: "<<type_employee[type]<<endl;
						laborer.Display();
						first_date.showdate();
						break;
					}
				case secretary:
					{
						Employee secretary;
						secretary.Nhap();
						first_date.getdate();
						system("cls");
						cout<<"employee is: "<<type_employee[type]<<endl;
						secretary.Display();
						first_date.showdate();
						break;
					}
				case manager:
					{
						Employee manager;
						manager.Nhap();
						first_date.getdate();
						system("cls");						
						cout<<"employee is: "<<type_employee[type]<<endl;
						manager.Display();
						first_date.showdate();
						break;
					}
			}
		}
};
int main()
{
	Extend_employee employee;
	char input;
	etype type;
	do
	{
		system("cls");
		cout<<"nhap vao ky hieu nhan vien ( l, s, m ): ";
		cin>>input;
	}while(input!='l'&&input!='s'&&input!='m');
	employee.getemploy(input,type);
	employee.putemploy(type);
	return 0;
}
