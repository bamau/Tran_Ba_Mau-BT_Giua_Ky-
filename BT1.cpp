#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

//C6_1
class Int
{
	private:
		int variable;
	public:
		Int()
		{
			variable=0;
		} 
		void setdata(int &a)
		{
			variable=a;
		}
		Int add(Int a, Int b)
		{
			Int c;
			c.variable=a.variable+b.variable;
			return c;
		}
		void dislay()
		{
			cout<<"Sum two num is "<<variable<<endl;
		}
		
};
int main()
{
	Int a,b,c;
	int x,y;
	cout<<"Enter num 1: ";
	cin>>x;
	a.setdata(x);
	cout<<"Enter num 2: ";
	cin>>y;
	b.setdata(y);
	c=c.add(a,b);
	c.dislay();
	return 0;
}

