#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;
//C6_2
class tollBooth
{
	private:
		unsigned int TotalCar;
		double AmountMoney;
	public:
		tollBooth()
		{
			TotalCar=0;
			AmountMoney=0;
		}
		void PayCar()
		{
			TotalCar++;
			AmountMoney+=0.5;
		}
		void NopayCar()
		{
			TotalCar++;
		}
		void Display()
		{
			cout<<"Tong so xe: "<<TotalCar<<endl;
			cout<<"Tong tien thu: "<<AmountMoney<<endl;
		}
};

int main()
{
	tollBooth bot;
	char key;
	do
	{
		cout<<"Input key:(p or n or ESC exit): ";
		key=getch();
		system("cls");
		switch(key)
		{
			case 'p':
				bot.PayCar();
				break;
			case 'n':
				bot.NopayCar();
				break;
			case 27:
				bot.Display();
				break;	
		}
	}while(key!='p' || key!='n' || key!=27);
	return 0;
}
