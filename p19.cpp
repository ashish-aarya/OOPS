#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <maths.h>
class  storec
{
	float x,y,x1,y1;
	storec()
	{
		x=0.0;y=0.0;x1=0.0;y1=0.0;
	}
	void entry ()
	{
		cout<<"Enter the cooridinates x";
		cin>>x;
		cout<<"Enter the cooridinates x1";
		cin>>x1;
		cout<<"Enter the cooridinates y";
		cin>>y;
		cout<<"Enter the cooridinates y1";
		cin>>y1;

	}
	void displaycor ()
	{
		cout<<"Enter the cooridinates x"<<x;
		cout<<"Enter the cooridinates x1"<<x1;
		cout<<"Enter the cooridinates y"<<y;
		cout<<"Enter the cooridinates y1"<<y1;
	}
};
class cal : public storec
{
	float dis;
	void calculate ()
		{
			dis=abs(x1-x)-abs(y1-y);
			dis=sqrt (dis);
		}
		void  displaycal ()
		{
			cout<<"Distance "<<dis;
		}
};
void main ()
{
cal c;
c.entry();
c.displaycor();
c.calculate();
c.displaycal();
}