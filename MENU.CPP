#include<iostream.h>
#include<conio.h>
void prime()
{ int n,i,flag=0;
  cout<<"\n Enter number you want to check = ";
  cin>>n;
  for (i=2;i<n;i++)
  {
  if (n%i==0)
  flag++;
  }
    if(flag==0)
    cout<<"\n "<<n<<" is a prime number ";
    else
    cout<<"\n"<<n<<" is NOT a PRIME number ";
  }

void onetoten()
{ int n=2,i,j=0,r=0;
  cout<<"\n First 10 Prime Numbers are :";
  while(j<10)
  { for(i=2;i<=n/2;i++)
    if(n%i==0)
     r++;
     if(r==0)
     { cout<<n<<" ";
       j++;
     }
     n++;
     r=0;
  }
}
void between()
{ int i,n=2,j=0,r=0;
  cout<<"\n Prime Numbers between 1 to 100 are : ";
  while(j<99)
  { for(i=2;i<=n/2;i++)
    if(n%i==0)
    r++;
  if(r==0)
   cout<<n<<" ";
   n++;
   r=0;
   j++;

  }
}
void sum()
{ int i,sum=0,n=2,j=0,r=0;
  while(j<10)
  { for(i=2;i<n/2;i++)
    if(n%i==0)
    r++;
    if(r==1)
    { sum+=n;
      j++;
    }
    n++;
    r=0;
  }
  cout<<"\n Sum of first 10 Prime Numbers is : "<<sum;
}

void generate()
{ int a,b=0,c,n=2,r=0,i;
  cout<<"\n Enter number of Prime Numbers to display : ";
  cin>>c;
  while(b<c)
  { for(i=2;i<n/2;i++)
    if(n%i==0)
    r++;
    if(r==0)
    { cout<<n<<" ";
      b++;
    }
    r=0;
    n++;
  }
}

void main()
{ clrscr();
  cout<<"\n Ashish Arya 43513203118 ";
  int ch;
  do
  { cout<<"\n MENU \n 1.To check whether a given number is prime or not ."
	<<"\n 2.To print prime number between 1 to 10 ."
	<<"\n 3.To print prime number between 1 to 100."
	<<"\n 4.To find the sum of first 10 prime number ."
	<<"\n 5.To generate first n prime numbers . "
	<<"\n 6.EXIT ";
    cout<<"\n Enter choice ";
    cin>>ch;
    switch(ch)
    { case 1 : prime();
		break;
      case 2 : onetoten();
		break;
      case 3 : between();
		break;
      case 4 : sum();
		break;
      case 5 : generate();
		break;
      case 6 : cout<<"\n Terminating..........";
	       break;
      default:cout<<"\n Wrong choice ";
   }
  }while(ch!=6);
    getch();
}
