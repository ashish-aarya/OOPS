#include<iostream.h>
#include<conio.h>

void arm(int n)
{
int a,b,c,s;
while((n<99)||(n>999))
{
cout<<"Number you entered is NOT a THREE digit number enter again:";
cin>>n;
}
a=n%10;
b=(n/10)%10;
c=n/100;
s=a*a*a+b*b*b+c*c*c;
if(s==n)
cout<<n<<" is an ARMSTRONG number\n";
else
cout<<n<<" is NOT an ARMSTRONG number\n";
}
void main()
{
int n;
clrscr();
cout<<"Enter a three digit number you want to check:";
cin>>n;
arm(n);
getch();
}