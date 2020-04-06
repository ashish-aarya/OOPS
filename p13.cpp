#include <iostream.h>
#include <stdio.h>
#include <conio.h>
struct name 
{
	char[40] First;
	char[40] Mid;
	char[40] Last;
};
struct phone 
{
	char[4] Area;
	char[4] Exch;
	char[6] Numb;
};
name n;
phone p;
class p_rec
{
	p_rec()
	{

	}
	void input ()
	{
		gets(n.First);
		gets(n.Mid);
		gets(n.Last);	
		gets(p.Area);
		gets(p.Exch);
		gets(p.Numb);
	}
	void display ()
	{
		cout<<n.First;
		cout<<n.Mid;
		cout<<n.Last;	
		cout<<p.Area;
		cout<<p.Exch;
		cout<<p.Numb;
	}
};
void main ()
{ p_rec p;
	p.input();
	p.display();  
	getch(); 
}