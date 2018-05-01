#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;
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
int main()
{
	angle ang;
	int choice;
	cout<<"Input longitude or Input latitude: (Choice 1 or 2): ";
	cin>>choice;
	ang.get_angle(choice);
	ang.display();
	return 0;
}

