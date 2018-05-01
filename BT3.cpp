#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;
//C6_3
class Time
{
	private:
		unsigned int hours;
		unsigned int minutes;
		unsigned int seconds;
	public:
		Time()//dung khoi tao doi tuong
		{
			hours=0;
		 	minutes=0;
			seconds=0;
		}
		void time(unsigned int &h,unsigned int &m,unsigned int &s)
		{
			hours=h;
			minutes=m;
			seconds=s;
		}
	
		void display()
		{
			cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
		Time add(Time a,Time b)
		{
			Time temp;
			temp.hours = a.hours + b.hours;
			temp.minutes = a.minutes+b.minutes;
			temp.seconds = a.seconds+b.seconds;
			temp.minutes += temp.seconds/60;
			temp.seconds = temp.seconds%60;
			temp.hours += temp.minutes/60;
			temp.minutes = temp.minutes%60;
			return temp;
		}
		void nhap(){
			do{
				system("cls");
				cout<<"Nhap vao gio: ";
				cin >> hours;
			}while(hours>24);
			do{
				system("cls");
				cout<<"Nhap vao phut: ";
				cin>>minutes;
			}while(minutes>60);
			do{
				system("cls");
				cout<<"Nhap vao giay: ";
				cin>>seconds;
			}while(seconds>60);
		}
		
};

int main()
{
	Time t1,t2,t3;
	t1.nhap();
	t2.nhap();
	t3=t3.add(t1,t2);// t3=t1+t2 // t1=t1+t2;
	t3.display();
	system("pause");
	return 0;
}

