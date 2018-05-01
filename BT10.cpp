#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;
//C6_8
class Create_number
{
	private:
		static unsigned int count;
		unsigned int serial_number;
	public:
		Create_number()
		{
			++count;
			serial_number=count;
		}
		void shownumber()
		{
			cout<<"Serial number is: "<<serial_number<<endl;
		}
};
unsigned int Create_number::count=0;

//C6_7
char kytu(char &a)
{
	a-=32;
	return 0;
}
class angle
{
	private:
		int degrees;
		float minutes;
		char direction;
	public:
		angle()
		{
			degrees=0;
			minutes=0;
			direction=0;
		}
		void get_angle(int choice)
		{
			if(choice==1)
			{
				do
				{
					system("cls");
					cout<<"input degrees: ";
					cin>>degrees;
				}while(degrees>180);
				do
				{
					system("cls");
					cout<<"input minutes: ";
					cin>>minutes;
				}while(minutes>60);
				do
				{
					system("cls");
					cout<<"input direction: (S, N, E, W) ";
					cin>>direction;
					kytu(direction);
				}while(direction!='S'&&direction!='N'&&direction!='E'&&direction!='W');
			}
			else if(choice==2)
			{
				do
				{
					system("cls");
					cout<<"input degrees: ";
					cin>>degrees;
				}while(degrees>90);
				do
				{
					system("cls");
					cout<<"input minutes: ";
					cin>>minutes;
				}while(minutes>60);
				do
				{
					system("cls");
					cout<<"input direction: (S, N, E, W) ";
					cin>>direction;
					kytu(direction);
				}while(direction!='S'&&direction!='N'&&direction!='E'&&direction!='W');
			}
		}
		void display()
		{
			system("cls");
			cout<<"angle is: "<<degrees<<'\xF8'<<minutes<<"."<<direction<<"'\n";
		}
};

class ship
{
	private:
		Create_number shipnumber;
		angle location;
	public:
		void get_position()
		{
			int choice;
			cout<<"Input longitude or Input latitude: (Choice 1 or 2): ";
			cin>>choice;
			location.get_angle(choice);	
		}
		void display()
		{
			location.display();
			shipnumber.shownumber();
		}
};
int main()
{
	ship a,b,c;
	a.get_position();
	a.display();	
	b.get_position();
	b.display();
	c.get_position();
	c.display();
	return 0;
}
