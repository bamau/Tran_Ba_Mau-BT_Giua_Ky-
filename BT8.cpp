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
int main()
{
	Create_number object1, object2, ojbect3;
	object2.shownumber();
	system("pause");
	return 0;
}
