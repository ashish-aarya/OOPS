#include <iostream.h>
#include <conio.h>
#include <stdio.h>
class student
{
    int roll;
    char[5] name;
    public : 
    void inputs ()
    {
    	cout<<"Roll No";
    	cin>>roll;
    	cout<<"Name";
    	gets (name);
    }
    void displays ()
    {
    	cout<<"\n Roll No"<<roll;
    	cout <<"\n Name "<< name;
    }
};
class exam 
{
int[5] mark;
int tm;
exam ()
{
	tm=0;
}
public: 
	void inpute ()
	{
		cout<<"Marks";
		for (int i=0;i<5;i++)
			{cin>>marks[i];
				tm+=marks[i];
			}
		}
		void outpute ()
	{
		cout<<"Marks";
		for (int i=0;i<5;i++)
			{cout<<marks[i];
			}
			cout<<tm;
		}

};
class exec: public student,public exam
{

}
 void main ()
 {
 	exec e;
 	e.inputs();
 	e.inpute();
 	e.outputs();
 	e.outpute();
 }