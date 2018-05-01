#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

class fraction
{
	private:
		int numerator;
		int denominator;
	public:
		fraction()
		{
			numerator=0;
			denominator=0;
		}
		void set_fraction(int &numer, int &deno)
		{
			numerator=numer;
			denominator=deno;
		}
		fraction add(fraction &a, fraction &b)
		{
			fraction c;
			c.numerator=a.numerator*b.denominator+a.denominator*b.numerator;
			c.denominator=a.denominator*b.denominator;
			return c;
		}
		void display()
		{
			cout<<"Result sum: "<<numerator<<"/"<<denominator<<endl;
		}
};
int main()
{
	fraction a,b,c;
	int x,y,e,z;
	char dumychar;
	cout<<"Enter fraction 1: ";
	cin>>x>>dumychar>>y;
	a.set_fraction(x,y);
	cout<<"Enter fraction 2: ";
	cin>>e>>dumychar>>z;
	b.set_fraction(e,z);
	c=c.add(a,b);
	c.display();
	return 0;
}
