#include <iostream.h>
#include <stdio.h>
#include <conio.h>
class serial
{
	private: int sc;
	char[20] title;
	float dur;
	int noe;
	public : 
		serial ()
	{
		dur=30.0;
 		noe=10;
	}
	void Newserial ()
	{
		cout<<"Serial code";
		cin>>sc;
		cout<<"title";
		gets(title);
	}
	void Otherentries (float dr,int n )
	{
		dur=dr;
		noe=n;
	}
	void Displaydata ()
	{
		cout<<"Serial code"<<sc<<"\n";
		cout<<"Title "<<title<<"\n";
		cout<<"Duration "<<dur<<"\n";	
		cout<<"Number of Episodes "<<noe<<"\n";
	}
};
void main ()
{ float a;int b;
	serial s=new serial();
    s.Newserial();
    cin>>a>>b;
    s.Otherentries(a,b);
    s.Displaydata();
getch();
}