#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;
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
int main()
{
	Date ngay;
	ngay.getdate();
	ngay.showdate();
	return 0;
}

