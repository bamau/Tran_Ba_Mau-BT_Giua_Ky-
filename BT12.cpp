#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;
class fraction_calculator
{
	private:
		int numerator;
		int denominator;
	public:
		fraction_calculator()
		{
			numerator=0;
			denominator=1;
		}
		void lowterms() // change ourself to lowest terms
		{
			long temp, tnum, tden, gcd;
			tnum = labs(numerator); // use non-negative copies
			tden = labs(denominator); // (needs cmath)
			if(tden==0 ) // check for n/0
			{ 
				cout << "Illegal fraction: division by 0";	
				exit(1); 
			}
			else if( tnum==0 ) // check for 0/n
				{ 
					numerator=0; denominator = 1;
					return; 
				}
			while(tnum != 0)
			{
				if(tnum < tden) // ensure numerator larger
				{ temp=tnum; tnum=tden; tden=temp; } // swap them
				tnum = tnum - tden; // subtract them
			}
			gcd = tden; // this is greatest common divisor
			numerator = numerator / gcd; // divide both num and den by gcd
			denominator = denominator / gcd; // to reduce frac to lowest terms
		}
		void set_fraction(int &num, int &den)
		{
			numerator=num;
			denominator=den;
		}
		fraction_calculator mul(fraction_calculator &a, fraction_calculator &b)
		{
			fraction_calculator c;
			c.numerator=a.numerator*b.numerator;
			c.denominator=a.denominator*b.denominator;
			c.lowterms();
			return c;
		}
		void display()
		{
			cout<<numerator<<"/"<<denominator<<"\t";
		}
};
int main()
{
	int n;
	cout<<"Enter denominator:";
	cin>>n;
	fraction_calculator f1;
	fraction_calculator f[n-1];
	for(int i=1;i<n;i++)
	{
		f[i].set_fraction(i,n);
		f[i].lowterms();
		f[i].display();
	}
	cout<<"\n\n";
	for(int i = 0; i < n; ++i)	cout << "-------";
	cout << "\n\n";
	for(int i=1;i<n;i++)
	{
		f[i].display();
		for(int j=1;j<n;j++)
		{
			f1=f1.mul(f[i],f[j]);
			f1.lowterms();
			f1.display();
		}
		cout<<"\n";
	}
	return 0;
}

