#include <iostream.h>
#include <stdio.h>
#include <conio.h>
class student
{
	private : int Roll_no;
	char[10] Name;
	char[10] Class_st;
	float[5] Marks;
	float percentage;
	float Calculate (int mk[5])
	{ float pe;
		for (int i=0;i<5;i++)
		M+=mk[i];
		pe=(M/500)*100
       return pe; 
	}
	public:void Readmarks ()
	 {cout<<"Roll Number";
	 cin>>Roll_no;
	 	cout<<"name";
	 	gets(Name);
	 	cout<<"Class";
	 	gets(Class_st);
	 	for (int i=0;i<5;i++)
	 		cin>>Marks[i];
	 	percentage=Calculate(Marks);

	 }
	 void Displaydata()
	 {cout<<"\n Roll"<<Roll_no;
	 	cout<<"\n Name"<<Name;
	 	cout<<"\n Class"<<Class_st;
	 	cout<<"\n Marks";
	 	for (int i=0;i<5;i++)
	 		cout<<Marks[i];
	 	cout<<"\n Percentage"<<percentage;
	 }
};
void main ()
{
student s=new student();
s.Readmarks();
s.Displaydata();
getch();
}