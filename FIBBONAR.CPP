#include <iostream.h>
#include <conio.h>
void fibbo ()
{
 int n ;
 cout<<"Enter the TERM" ;
 cin>>n;
 int a=0,b=1;
 cout <<"THE FIBBONACCI SRERIES IS \n ";
 cout<<" " <<a<< " "<<b <<" ";
 for (int i=2;i<=n;i++)
 {
 int tp=a+b;
 a=b;
 b=tp;
 cout<<tp<<" ";
 }
 getch();
}
void main ()
{
  fibbo();
}
